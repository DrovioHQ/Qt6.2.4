#####################################################################
## tst_qcanbus Test:
#####################################################################

qt_internal_add_test(tst_qcanbus
    SOURCES
        tst_qcanbus.cpp
    PUBLIC_LIBRARIES
        Qt::Network
        Qt::SerialBus
)

# should be
# qt6_import_plugins(tst_qcanbus INCLUDE TestCanBusPlugin)
# but qt6_import_plugins does not work here
target_link_libraries(tst_qcanbus PRIVATE TestCanBusPlugin)
