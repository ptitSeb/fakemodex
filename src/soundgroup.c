#include "fmodwrapper.h"
#include "fakemodex.h"

FMOD_RESULT F_API FMOD_SoundGroup_Release            (FMOD_SOUNDGROUP *soundgroup)
{
    LOAD(SoundGroup_Release);
    return fmodfn.SoundGroup_Release((FMOD1_SOUNDGROUP*)soundgroup);
}
FMOD_RESULT F_API FMOD_SoundGroup_GetSystemObject    (FMOD_SOUNDGROUP *soundgroup, FMOD_SYSTEM **system)
{
    LOAD(SoundGroup_GetSystemObject);
    return fmodfn.SoundGroup_GetSystemObject((FMOD1_SOUNDGROUP*)soundgroup, (FMOD1_SYSTEM**)system);
}


// control
FMOD_RESULT F_API FMOD_SoundGroup_SetMaxAudible      (FMOD_SOUNDGROUP *soundgroup, int maxaudible)
{
    LOAD(SoundGroup_SetMaxAudible);
    return fmodfn.SoundGroup_SetMaxAudible((FMOD1_SOUNDGROUP*)soundgroup, maxaudible);
}
FMOD_RESULT F_API FMOD_SoundGroup_GetMaxAudible      (FMOD_SOUNDGROUP *soundgroup, int *maxaudible)
{
    LOAD(SoundGroup_GetMaxAudible);
    return fmodfn.SoundGroup_GetMaxAudible((FMOD1_SOUNDGROUP*)soundgroup, maxaudible);
}
FMOD_RESULT F_API FMOD_SoundGroup_SetMaxAudibleBehavior(FMOD_SOUNDGROUP *soundgroup, FMOD_SOUNDGROUP_BEHAVIOR behavior)
{
    LOAD(SoundGroup_SetMaxAudibleBehavior);
    return fmodfn.SoundGroup_SetMaxAudibleBehavior((FMOD1_SOUNDGROUP*)soundgroup, (FMOD1_SOUNDGROUP_BEHAVIOR)behavior);
}
FMOD_RESULT F_API FMOD_SoundGroup_GetMaxAudibleBehavior(FMOD_SOUNDGROUP *soundgroup, FMOD_SOUNDGROUP_BEHAVIOR *behavior)
{
    LOAD(SoundGroup_GetMaxAudibleBehavior);
    return fmodfn.SoundGroup_GetMaxAudibleBehavior((FMOD1_SOUNDGROUP*)soundgroup, (FMOD1_SOUNDGROUP_BEHAVIOR*)behavior);
}
FMOD_RESULT F_API FMOD_SoundGroup_SetMuteFadeSpeed   (FMOD_SOUNDGROUP *soundgroup, float speed)
{
    LOAD(SoundGroup_SetMuteFadeSpeed);
    return fmodfn.SoundGroup_SetMuteFadeSpeed((FMOD1_SOUNDGROUP*)soundgroup, speed);
}
FMOD_RESULT F_API FMOD_SoundGroup_GetMuteFadeSpeed   (FMOD_SOUNDGROUP *soundgroup, float *speed)
{
    LOAD(SoundGroup_GetMuteFadeSpeed);
    return fmodfn.SoundGroup_GetMuteFadeSpeed((FMOD1_SOUNDGROUP*)soundgroup, speed);
}
FMOD_RESULT F_API FMOD_SoundGroup_SetVolume          (FMOD_SOUNDGROUP *soundgroup, float volume)
{
    LOAD(SoundGroup_SetVolume);
    return fmodfn.SoundGroup_SetVolume((FMOD1_SOUNDGROUP*)soundgroup, volume);
}
FMOD_RESULT F_API FMOD_SoundGroup_GetVolume          (FMOD_SOUNDGROUP *soundgroup, float *volume)
{
    LOAD(SoundGroup_GetVolume);
    return fmodfn.SoundGroup_GetVolume((FMOD1_SOUNDGROUP*)soundgroup, volume);
}
FMOD_RESULT F_API FMOD_SoundGroup_Stop               (FMOD_SOUNDGROUP *soundgroup)
{
    LOAD(SoundGroup_Stop);
    return fmodfn.SoundGroup_Stop((FMOD1_SOUNDGROUP*)soundgroup);
}

// Infos
FMOD_RESULT F_API FMOD_SoundGroup_GetName            (FMOD_SOUNDGROUP *soundgroup, char *name, int namelen)
{
    LOAD(SoundGroup_GetName);
    return fmodfn.SoundGroup_GetName((FMOD1_SOUNDGROUP*)soundgroup, name, namelen);
}
FMOD_RESULT F_API FMOD_SoundGroup_GetNumSounds       (FMOD_SOUNDGROUP *soundgroup, int *numsounds)
{
    LOAD(SoundGroup_GetNumSounds);
    return fmodfn.SoundGroup_GetNumSounds((FMOD1_SOUNDGROUP*)soundgroup, numsounds);
}
FMOD_RESULT F_API FMOD_SoundGroup_GetSound           (FMOD_SOUNDGROUP *soundgroup, int index, FMOD_SOUND **sound)
{
    LOAD(SoundGroup_GetSound);
    return fmodfn.SoundGroup_GetSound((FMOD1_SOUNDGROUP*)soundgroup, index, (FMOD1_SOUND**)sound);
}
FMOD_RESULT F_API FMOD_SoundGroup_GetNumPlaying      (FMOD_SOUNDGROUP *soundgroup, int *numplaying)
{
    LOAD(SoundGroup_GetNumPlaying);
    return fmodfn.SoundGroup_GetNumPlaying((FMOD1_SOUNDGROUP*)soundgroup, numplaying);
}
