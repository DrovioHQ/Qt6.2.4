# Generated from qmlscene.pro.

#####################################################################
## qmlscene App:
#####################################################################

qt_internal_add_app(qmlscene
    TARGET_DESCRIPTION "QML Scene Viewer"
    SOURCES
        main.cpp
    DEFINES
        QML_RUNTIME_TESTING
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::Gui
        Qt::GuiPrivate
        Qt::Qml
        Qt::Quick
        Qt::QuickPrivate
)

set_target_properties(qmlscene PROPERTIES WIN32_EXECUTABLE FALSE)

#### Keys ignored in scope 1:.:.:qmlscene.pro:<TRUE>:
# QMAKE_TARGET_DESCRIPTION = "QML" "Scene" "Viewer"

## Scopes:
#####################################################################

qt_internal_extend_target(qmlscene CONDITION TARGET Qt::Widgets
    PUBLIC_LIBRARIES
        Qt::Widgets
)

qt_internal_extend_target(qmlscene CONDITION QT_FEATURE_qml_debug
    DEFINES
        QT_QML_DEBUG_NO_WARNING
)
