add_subdirectory(uic)
if (QT_FEATURE_dbus)
    add_subdirectory(qdbuscpp2xml)
    add_subdirectory(qdbusxml2cpp)
endif()
add_subdirectory(qlalr)
add_subdirectory(qvkgen)
if (QT_FEATURE_commandlineparser)
    add_subdirectory(qtpaths)
endif()

# Only include the following tools when performing a host build
if(NOT CMAKE_CROSSCOMPILING AND QT_FEATURE_regularexpression)
    add_subdirectory(androiddeployqt)
    if(QT_FEATURE_gui AND QT_FEATURE_systemsemaphore)
        add_subdirectory(androidtestrunner)
    endif()
endif()
