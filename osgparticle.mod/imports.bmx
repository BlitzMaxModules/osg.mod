' osg module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgParticle/ConnectedParticleSystem.cpp"
Import "../osg.mod/src/osgParticle/Emitter.cpp"
Import "../osg.mod/src/osgParticle/ExplosionDebrisEffect.cpp"
Import "../osg.mod/src/osgParticle/ExplosionEffect.cpp"
Import "../osg.mod/src/osgParticle/FireEffect.cpp"
Import "../osg.mod/src/osgParticle/FluidFrictionOperator.cpp"
Import "../osg.mod/src/osgParticle/FluidProgram.cpp"
Import "../osg.mod/src/osgParticle/ModularEmitter.cpp"
Import "../osg.mod/src/osgParticle/ModularProgram.cpp"
Import "../osg.mod/src/osgParticle/MultiSegmentPlacer.cpp"
Import "../osg.mod/src/osgParticle/Particle.cpp"
Import "../osg.mod/src/osgParticle/ParticleEffect.cpp"
Import "../osg.mod/src/osgParticle/ParticleProcessor.cpp"
Import "../osg.mod/src/osgParticle/ParticleSystem.cpp"
Import "../osg.mod/src/osgParticle/ParticleSystemUpdater.cpp"
Import "../osg.mod/src/osgParticle/PrecipitationEffect.cpp"
Import "../osg.mod/src/osgParticle/Program.cpp"
Import "../osg.mod/src/osgParticle/SmokeEffect.cpp"
Import "../osg.mod/src/osgParticle/SmokeTrailEffect.cpp"
Import "../osg.mod/src/osgParticle/Version.cpp"
