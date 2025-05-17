#include "loginmanager.h"
#include <QSqlQuery>
#include <QVariant>
#include <QCryptographicHash>
#include <QDebug>
QString Loginmanager::hashPassword(const QString &password) {
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return QString(hash.toHex());
}
bool Loginmanager::login(const QString &username, const QString &password, User &userOut) {
    QSqlQuery q;
    q.prepare("SELECT id, username, password_hash FROM users WHERE username = ?");
    q.addBindValue(QVariant(username));   // Convertir explícitamente a QVariant
    if (q.exec() && q.next()) {
        QString dbHash = q.value("password_hash").toString();
        QString inputHash = hashPassword(password);
        if (dbHash == inputHash) {
            userOut.id = q.value("id").toInt();
            userOut.username = q.value("username").toString();
            userOut.passwordHash = dbHash;
            return true;
        }
    }
    return false;
}
