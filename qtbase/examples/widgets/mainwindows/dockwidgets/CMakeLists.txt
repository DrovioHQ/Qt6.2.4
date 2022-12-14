# Generated from dockwidgets.pro.

cmake_minimum_required(VERSION 3.16)
project(dockwidgets LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(NOT DEFINED INSTALL_EXAMPLESDIR)
  set(INSTALL_EXAMPLESDIR "examples")
endif()

set(INSTALL_EXAMPLEDIR "${INSTALL_EXAMPLESDIR}/widgets/mainwindows/dockwidgets")

find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Gui)
find_package(Qt6 COMPONENTS Widgets)
find_package(Qt6 COMPONENTS PrintSupport) # special case

qt_add_executable(dockwidgets
    main.cpp
    mainwindow.cpp mainwindow.h
)
set_target_properties(dockwidgets PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)
target_link_libraries(dockwidgets PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)
# special case begin
if (TARGET Qt::PrintSupport)
    target_link_libraries(dockwidgets PUBLIC Qt::PrintSupport)
endif()
# special case end


# Resources:
set(dockwidgets_resource_files
    "images/new.png"
    "images/print.png"
    "images/save.png"
    "images/undo.png"
)

qt6_add_resources(dockwidgets "dockwidgets"
    PREFIX
        "/"
    FILES
        ${dockwidgets_resource_files}
)

if(TARGET Qt::PrintSupport)
    target_link_libraries(dockwidgets PUBLIC
        Qt::PrintSupport
    )
endif()

install(TARGETS dockwidgets
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
