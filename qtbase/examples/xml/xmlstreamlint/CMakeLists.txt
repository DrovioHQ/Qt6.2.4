# Generated from xmlstreamlint.pro.

cmake_minimum_required(VERSION 3.16)
project(xmlstreamlint LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(NOT DEFINED INSTALL_EXAMPLESDIR)
  set(INSTALL_EXAMPLESDIR "examples")
endif()

set(INSTALL_EXAMPLEDIR "${INSTALL_EXAMPLESDIR}/xml/xmlstreamlint")

find_package(Qt6 COMPONENTS Core Xml) # special case

qt_add_executable(xmlstreamlint
    main.cpp
)
set_target_properties(xmlstreamlint PROPERTIES
    WIN32_EXECUTABLE FALSE
    MACOSX_BUNDLE FALSE
)
target_link_libraries(xmlstreamlint PUBLIC
    Qt::Core
    Qt::Xml # special case: add
)

install(TARGETS xmlstreamlint
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
