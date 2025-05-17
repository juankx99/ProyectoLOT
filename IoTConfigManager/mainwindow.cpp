#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "devicemanager.h"
#include <QTableWidgetItem>
#include <QHeaderView>

MainWindow::MainWindow(const User &user, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), currentUser(user)
{
    ui->setupUi(this);

    // Configurar tabla
    ui->deviceTableWidget->setColumnCount(4);
    ui->deviceTableWidget->setHorizontalHeaderLabels(QStringList() << "Nombre" << "Tipo" << "IP" << "Calibración");
    ui->deviceTableWidget->horizontalHeader()->setStretchLastSection(true);

    // Conectar botón
    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::onAddButtonClicked);

    // Cargar dispositivos
    loadDevices();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadDevices()
{
    QList<Device> devices = DeviceManager::getDevicesForUser(currentUser.id);
    ui->deviceTableWidget->setRowCount(devices.size());

    for (int i = 0; i < devices.size(); ++i) {
        const Device &d = devices[i];
        ui->deviceTableWidget->setItem(i, 0, new QTableWidgetItem(d.name));
        ui->deviceTableWidget->setItem(i, 1, new QTableWidgetItem(d.type));
        ui->deviceTableWidget->setItem(i, 2, new QTableWidgetItem(d.ipAddress));
        ui->deviceTableWidget->setItem(i, 3, new QTableWidgetItem(d.calibrationParams));
    }
}

void MainWindow::onAddButtonClicked()
{
    // Aquí irá la lógica para abrir un formulario de agregar dispositivo
}
