# Generated from plugins.pro.

if(QT_FEATURE_cerence_sdk)
    add_subdirectory(cerence)
endif()
if(QT_FEATURE_hangul)
    add_subdirectory(hangul)
endif()
if(QT_FEATURE_hunspell)
    add_subdirectory(hunspell)
endif()
if(QT_FEATURE_openwnn)
    add_subdirectory(openwnn)
endif()
if(QT_FEATURE_pinyin AND NOT QT_FEATURE_cerence_xt9)
    add_subdirectory(pinyin)
endif()
if(QT_FEATURE_tcime)
    add_subdirectory(tcime)
endif()
if(QT_FEATURE_myscript)
    add_subdirectory(myscript)
endif()
if(QT_FEATURE_thai)
    add_subdirectory(thai)
endif()
