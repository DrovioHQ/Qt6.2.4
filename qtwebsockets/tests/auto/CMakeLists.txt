add_subdirectory(cmake)
add_subdirectory(websockets)
if(TARGET Qt::Quick)
    add_subdirectory(qml)
endif()
