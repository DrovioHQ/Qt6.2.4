# Generated from mqtt.pro.

qt_internal_add_example(consolepubsub)
if(TARGET Qt::Gui AND TARGET Qt::Widgets)
    qt_internal_add_example(simpleclient)
    qt_internal_add_example(subscriptions)
endif()
if(TARGET Qt::Quick)
    qt_internal_add_example(quicksubscription)
    qt_internal_add_example(quickpublication)
endif()
if(TARGET Qt::WebSockets)
    qt_internal_add_example(websocketsubscription)
endif()
