# Generated from runtimerender.pro.

#####################################################################
## Quick3DRuntimeRender Module:
#####################################################################

qt_internal_add_module(Quick3DRuntimeRender
    SOURCES
        graphobjects/qssgrendercamera.cpp graphobjects/qssgrendercamera_p.h
        graphobjects/qssgrendercustommaterial_p.h
        graphobjects/qssgrenderdefaultmaterial.cpp graphobjects/qssgrenderdefaultmaterial_p.h
        graphobjects/qssgrendereffect.cpp graphobjects/qssgrendereffect_p.h
        graphobjects/qssgrendergeometry.cpp graphobjects/qssgrendergeometry_p.h
        graphobjects/qssgrendergraphobject.cpp graphobjects/qssgrendergraphobject_p.h
        graphobjects/qssgrenderimage.cpp graphobjects/qssgrenderimage_p.h
        graphobjects/qssgrenderitem2d.cpp graphobjects/qssgrenderitem2d_p.h
        graphobjects/qssgrenderjoint.cpp graphobjects/qssgrenderjoint_p.h
        graphobjects/qssgrenderlayer.cpp graphobjects/qssgrenderlayer_p.h
        graphobjects/qssgrenderlight.cpp graphobjects/qssgrenderlight_p.h
        graphobjects/qssgrendermaterialdirty_p.h
        graphobjects/qssgrendermodel.cpp graphobjects/qssgrendermodel_p.h
        graphobjects/qssgrendernode.cpp graphobjects/qssgrendernode_p.h
        graphobjects/qssgrenderskeleton.cpp graphobjects/qssgrenderskeleton_p.h
        graphobjects/qssgrendertexturedata.cpp graphobjects/qssgrendertexturedata_p.h
        graphobjects/qssgrendermorphtarget.cpp graphobjects/qssgrendermorphtarget_p.h
        qssgperframeallocator_p.h
        qssgrenderableimage_p.h
        qssgrenderclippingfrustum.cpp qssgrenderclippingfrustum_p.h
        graphobjects/qssgrenderparticles.cpp graphobjects/qssgrenderparticles_p.h
        qssgrendercommands.cpp qssgrendercommands_p.h
        qssgrendercontextcore.cpp qssgrendercontextcore_p.h
        qssgrenderdefaultmaterialshadergenerator.cpp qssgrenderdefaultmaterialshadergenerator_p.h
        qssgrendererutil_p.h
        qssgrenderimagetexture_p.h
        qssgrendermaterialshadergenerator_p.h
        qssgrendermesh_p.h
        qssgrenderray.cpp qssgrenderray_p.h
        qssgrendershadercache.cpp qssgrendershadercache_p.h
        qssgrendershadercodegenerator.cpp qssgrendershadercodegenerator_p.h
        qssgrendershaderkeys_p.h
        qssgrendershadermetadata.cpp qssgrendershadermetadata_p.h
        qssgrendershadowmap.cpp qssgrendershadowmap_p.h
        qssgrhiparticles.cpp qssgrhiparticles_p.h
        qssgrhicontext.cpp qssgrhicontext_p.h
        qssgrhicustommaterialsystem.cpp qssgrhicustommaterialsystem_p.h
        qssgrhieffectsystem.cpp qssgrhieffectsystem_p.h
        qssgrhiquadrenderer.cpp qssgrhiquadrenderer_p.h
        qssgruntimerenderlogging.cpp qssgruntimerenderlogging_p.h
        qssgshadermapkey_p.h
        qssgshadermaterialadapter.cpp qssgshadermaterialadapter_p.h
        qssgshaderresourcemergecontext_p.h
        qtquick3druntimerenderglobal_p.h
        rendererimpl/qssgrenderableobjects.cpp rendererimpl/qssgrenderableobjects_p.h
        rendererimpl/qssgrenderer.cpp rendererimpl/qssgrenderer_p.h
        rendererimpl/qssgrendererimpllayerrenderdata_p.h
        rendererimpl/qssgrendererimpllayerrenderdata_rhi.cpp
        rendererimpl/qssgrendererimpllayerrenderhelper.cpp rendererimpl/qssgrendererimpllayerrenderhelper_p.h
        rendererimpl/qssgrendererimpllayerrenderpreparationdata.cpp rendererimpl/qssgrendererimpllayerrenderpreparationdata_p.h
        rendererimpl/qssgrendererimplshaders_rhi.cpp
        rendererimpl/qssgvertexpipelineimpl.cpp rendererimpl/qssgvertexpipelineimpl_p.h
        resourcemanager/qssgrenderbuffermanager.cpp resourcemanager/qssgrenderbuffermanager_p.h
        resourcemanager/qssgrenderloadedtexture.cpp resourcemanager/qssgrenderloadedtexture_p.h
        resourcemanager/qssgrenderresourcemanager.cpp resourcemanager/qssgrenderresourcemanager_p.h
        resourcemanager/qssgrendershaderlibrarymanager.cpp resourcemanager/qssgrendershaderlibrarymanager_p.h
    DEFINES
        QT_BUILD_QUICK3DRUNTIMERENDER_LIB
    LIBRARIES
        Qt::Quick3DUtilsPrivate
        Qt::QuickPrivate
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Gui
        Qt::Quick
        Qt::Quick3DUtils
    PRIVATE_MODULE_INTERFACE
        Qt::Quick3DUtilsPrivate
        Qt::QuickPrivate
)

qt_internal_extend_target(Quick3DRuntimeRender CONDITION TARGET Qt::ShaderTools
    PUBLIC_LIBRARIES
        Qt::ShaderTools
    LIBRARIES
        Qt::ShaderToolsPrivate
    PRIVATE_MODULE_INTERFACE
        Qt::ShaderToolsPrivate
    DEFINES
        QT_QUICK3D_HAS_RUNTIME_SHADERS
)

# Resources:
set(res_resource_files
    "res/effectlib/defaultMaterialBumpNoLod.glsllib"
    "res/effectlib/defaultMaterialFresnel.glsllib"
    "res/effectlib/depthpass.glsllib"
    "res/effectlib/funccalculatePointLightAttenuation.glsllib"
    "res/effectlib/funcdiffuseBurleyBSDF.glsllib"
    "res/effectlib/funcdiffuseReflectionBSDF.glsllib"
    "res/effectlib/funcdiffuseReflectionWrapBSDF.glsllib"
    "res/effectlib/funcgetTransformedUVCoords.glsllib"
    "res/effectlib/funcsampleLightVars.glsllib"
    "res/effectlib/funcsampleNormalTexture.glsllib"
    "res/effectlib/funcspecularBSDF.glsllib"
    "res/effectlib/funcspecularGGXBSDF.glsllib"
    "res/effectlib/physGlossyBSDF.glsllib"
    "res/effectlib/principledMaterialFresnel.glsllib"
    "res/effectlib/sampleProbe.glsllib"
    "res/effectlib/shadowMapping.glsllib"
    "res/effectlib/skinanim.glsllib"
    "res/effectlib/ssao.glsllib"
    "res/effectlib/tonemapping.glsllib"
    "res/effectlib/viewProperties.glsllib"
    "res/effectlib/morphanim.glsllib"
    "res/effectlib/parallaxMapping.glsllib"
    "res/effectlib/particles.glsllib"
    "res/primitives/Cone.mesh"
    "res/primitives/Cube.mesh"
    "res/primitives/Cylinder.mesh"
    "res/primitives/Rectangle.mesh"
    "res/primitives/Sphere.mesh"
)

qt_internal_add_resource(Quick3DRuntimeRender "res"
    PREFIX
        "/"
    FILES
        ${res_resource_files}
)

# special case begin

# default settings are GLSL "100es,120,150" HLSL "50" MSL "12"
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders"
    SILENT
    PRECOMPILE
    OPTIMIZED
    PREFIX
        "/"
    FILES
        res/rhishaders/orthoshadowblurx.vert
        res/rhishaders/orthoshadowblurx.frag
        res/rhishaders/orthoshadowblury.vert
        res/rhishaders/orthoshadowblury.frag
        res/rhishaders/texturedquad.vert
        res/rhishaders/texturedquad.frag
        res/rhishaders/environmentmap.vert
        res/rhishaders/environmentmap.frag
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_pertarget"
    SILENT
    PRECOMPILE
    OPTIMIZED
    PERTARGETCOMPILE
    PREFIX
        "/"
    FILES
        res/rhishaders/ssaaresolve.vert
        res/rhishaders/ssaaresolve.frag
        res/rhishaders/progressiveaa.vert
        res/rhishaders/progressiveaa.frag
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_es3"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,120,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/cubeshadowblurx.vert
        res/rhishaders/cubeshadowblurx.frag
        res/rhishaders/cubeshadowblury.vert
        res/rhishaders/cubeshadowblury.frag
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_es3_gl3"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/ssao.vert
        res/rhishaders/ssao.frag
        res/rhishaders/skybox.vert
        res/rhishaders/skybox.frag
        res/rhishaders/environmentmapprefilter.vert
        res/rhishaders/environmentmapprefilter.frag
        res/rhishaders/environmentmapirradiance.vert
        res/rhishaders/environmentmapirradiance.frag
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_lightprobe_rgbe"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/environmentmapprefilter.vert
        res/rhishaders/environmentmapprefilter.frag
        res/rhishaders/environmentmapirradiance.vert
        res/rhishaders/environmentmapirradiance.frag
    OUTPUTS
        res/rhishaders/environmentmapprefilter_rgbe.vert.qsb
        res/rhishaders/environmentmapprefilter_rgbe.frag.qsb
        res/rhishaders/environmentmapirradiance_rgbe.vert.qsb
        res/rhishaders/environmentmapirradiance_rgbe.frag.qsb
    DEFINES
        QSSG_ENABLE_RGBE_LIGHT_PROBE
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_skybox_hdr_none"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/skybox.vert
        res/rhishaders/skybox.frag
    OUTPUTS
        res/rhishaders/skybox_hdr_none.vert.qsb
        res/rhishaders/skybox_hdr_none.frag.qsb
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_skybox_rgbe_none"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/skybox.vert
        res/rhishaders/skybox.frag
    OUTPUTS
        res/rhishaders/skybox_rgbe_none.vert.qsb
        res/rhishaders/skybox_rgbe_none.frag.qsb
    DEFINES
        QSSG_ENABLE_RGBE_LIGHT_PROBE
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_skybox_hdr_linear"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/skybox.vert
        res/rhishaders/skybox.frag
    OUTPUTS
        res/rhishaders/skybox_hdr_linear.vert.qsb
        res/rhishaders/skybox_hdr_linear.frag.qsb
    DEFINES
        QSSG_ENABLE_LINEAR_TONEMAPPING
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_skybox_rgbe_linear"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/skybox.vert
        res/rhishaders/skybox.frag
    OUTPUTS
        res/rhishaders/skybox_rgbe_linear.vert.qsb
        res/rhishaders/skybox_rgbe_linear.frag.qsb
    DEFINES
        QSSG_ENABLE_LINEAR_TONEMAPPING
        QSSG_ENABLE_RGBE_LIGHT_PROBE
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_skybox_hdr_aces"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/skybox.vert
        res/rhishaders/skybox.frag
    OUTPUTS
        res/rhishaders/skybox_hdr_aces.vert.qsb
        res/rhishaders/skybox_hdr_aces.frag.qsb
    DEFINES
        QSSG_ENABLE_ACES_TONEMAPPING
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_skybox_rgbe_aces"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/skybox.vert
        res/rhishaders/skybox.frag
    OUTPUTS
        res/rhishaders/skybox_rgbe_aces.vert.qsb
        res/rhishaders/skybox_rgbe_aces.frag.qsb
    DEFINES
        QSSG_ENABLE_ACES_TONEMAPPING
        QSSG_ENABLE_RGBE_LIGHT_PROBE
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_skybox_hdr_hejldawson"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/skybox.vert
        res/rhishaders/skybox.frag
    OUTPUTS
        res/rhishaders/skybox_hdr_hejldawson.vert.qsb
        res/rhishaders/skybox_hdr_hejldawson.frag.qsb
    DEFINES
        QSSG_ENABLE_HEJLDAWSON_TONEMAPPING
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_skybox_rgbe_hejldawson"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/skybox.vert
        res/rhishaders/skybox.frag
    OUTPUTS
        res/rhishaders/skybox_rgbe_hejldawson.vert.qsb
        res/rhishaders/skybox_rgbe_hejldawson.frag.qsb
    DEFINES
        QSSG_ENABLE_HEJLDAWSON_TONEMAPPING
        QSSG_ENABLE_RGBE_LIGHT_PROBE
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_skybox_hdr_filmic"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/skybox.vert
        res/rhishaders/skybox.frag
    OUTPUTS
        res/rhishaders/skybox_hdr_filmic.vert.qsb
        res/rhishaders/skybox_hdr_filmic.frag.qsb
    DEFINES
        QSSG_ENABLE_FILMIC_TONEMAPPING
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_skybox_rgbe_filmic"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/skybox.vert
        res/rhishaders/skybox.frag
    OUTPUTS
        res/rhishaders/skybox_rgbe_filmic.vert.qsb
        res/rhishaders/skybox_rgbe_filmic.frag.qsb
    DEFINES
        QSSG_ENABLE_FILMIC_TONEMAPPING
        QSSG_ENABLE_RGBE_LIGHT_PROBE
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_particles_nolight"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/particles.vert
        res/rhishaders/particles.frag
    OUTPUTS
        res/rhishaders/particlesnolightsimple.vert.qsb
        res/rhishaders/particlesnolightsimple.frag.qsb
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_particles_nolight_mapped"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/particles.vert
        res/rhishaders/particles.frag
    OUTPUTS
        res/rhishaders/particlesnolightmapped.vert.qsb
        res/rhishaders/particlesnolightmapped.frag.qsb
    DEFINES
        QSSG_PARTICLES_ENABLE_MAPPED
)
qt_internal_add_shaders(Quick3DRuntimeRender "res_shaders_particles_nolight_animated"
    SILENT
    PRECOMPILE
    OPTIMIZED
    GLSL "300es,150"
    PREFIX
        "/"
    FILES
        res/rhishaders/particles.vert
        res/rhishaders/particles.frag
    OUTPUTS
        res/rhishaders/particlesnolightanimated.vert.qsb
        res/rhishaders/particlesnolightanimated.frag.qsb
    DEFINES
        QSSG_PARTICLES_ENABLE_MAPPED
        QSSG_PARTICLES_ENABLE_ANIMATED
)
# special case end

#### Keys ignored in scope 1:.:.:runtimerender.pro:<TRUE>:
# MODULE = "quick3druntimerender"
