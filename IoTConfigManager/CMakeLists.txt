cmake_minimum_required(VERSION 3.5)

project(IoTConfigManager VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Buscar Qt (Qt6 o Qt5) con Widgets y Sql
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    databasemanager.cpp
    databasemanager.h
    user.cpp
    user.h
    device.cpp
    device.h
    devicemanager.cpp
    devicemanager.h
    loginmanager.cpp
    loginmanager.h
    loginwindow.cpp
    loginwindow.h
    loginwindow.ui
    adddevicedialog.cpp
    adddevicedialog.h
    adddevicedialog.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(IoTConfigManager
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(IoTConfigManager SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(IoTConfigManager
            ${PROJECT_SOURCES}
            adddevicedialog.h adddevicedialog.cpp adddevicedialog.ui
            registerwindow.h registerwindow.cpp registerwindow.ui
        )
    endif()
endif()

# Linkear con los módulos Qt con keywords y sin repetir
target_link_libraries(IoTConfigManager
    PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Sql
)

# Propiedades específicas para macOS/iOS
if(${QT_VERSION} VERSION_LESS 6.1.0)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.IoTConfigManager)
endif()

set_target_properties(IoTConfigManager PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS IoTConfigManager
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(IoTConfigManager)
endif()
