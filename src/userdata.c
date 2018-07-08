#include "fmodwrapper.h"
#include "fakemodex.h"

// system
FMOD_RESULT F_API FMOD_System_SetUserData            (FMOD_SYSTEM *system, void *userdata)
{
    LOAD(System_SetUserData);
    return fmodfn.System_SetUserData((FMOD1_SYSTEM*)system, userdata);
}
FMOD_RESULT F_API FMOD_System_GetUserData            (FMOD_SYSTEM *system, void **userdata)
{
    LOAD(System_GetUserData);
    return fmodfn.System_GetUserData((FMOD1_SYSTEM*)system, userdata);
}

FMOD_RESULT F_API FMOD_System_GetMemoryInfo          (FMOD_SYSTEM *system, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details)
{
    FAKE(System_GetMemoryInfo);
}

// sound
FMOD_RESULT F_API FMOD_Sound_SetUserData             (FMOD_SOUND *sound, void *userdata)
{
    LOAD(Sound_SetUserData);
    return fmodfn.Sound_SetUserData((FMOD1_SOUND*)sound, userdata);
}
FMOD_RESULT F_API FMOD_Sound_GetUserData             (FMOD_SOUND *sound, void **userdata)
{
    LOAD(Sound_GetUserData);
    return fmodfn.Sound_GetUserData((FMOD1_SOUND*)sound, userdata);
}

FMOD_RESULT F_API FMOD_Sound_GetMemoryInfo           (FMOD_SOUND *sound, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details)
{
    FAKE(Sound_GetMemoryInfo);
}


// channel
FMOD_RESULT F_API FMOD_Channel_SetUserData           (FMOD_CHANNEL *channel, void *userdata)
{
    LOAD(Channel_SetUserData);
    return fmodfn.Channel_SetUserData((FMOD1_CHANNEL*)channel, userdata);
}
FMOD_RESULT F_API FMOD_Channel_GetUserData           (FMOD_CHANNEL *channel, void **userdata)
{
    LOAD(Channel_GetUserData);
    return fmodfn.Channel_GetUserData((FMOD1_CHANNEL*)channel, userdata);
}

FMOD_RESULT F_API FMOD_Channel_GetMemoryInfo         (FMOD_CHANNEL *channel, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details)
{
    FAKE(Channel_GetMemoryInfo);
}

// channelgroup
FMOD_RESULT F_API FMOD_ChannelGroup_SetUserData      (FMOD_CHANNELGROUP *channelgroup, void *userdata)
{
    LOAD(ChannelGroup_SetUserData);
    return fmodfn.ChannelGroup_SetUserData((FMOD1_CHANNELGROUP*)channelgroup, userdata);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetUserData      (FMOD_CHANNELGROUP *channelgroup, void **userdata)
{
    LOAD(ChannelGroup_GetUserData);
    return fmodfn.ChannelGroup_GetUserData((FMOD1_CHANNELGROUP*)channelgroup, userdata);
}

FMOD_RESULT F_API FMOD_ChannelGroup_GetMemoryInfo    (FMOD_CHANNELGROUP *channelgroup, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details)
{
    FAKE(ChannelGroup_GetMemoryInfo);
}

// soundgroup
FMOD_RESULT F_API FMOD_SoundGroup_SetUserData        (FMOD_SOUNDGROUP *soundgroup, void *userdata)
{
    LOAD(SoundGroup_SetUserData);
    return fmodfn.SoundGroup_SetUserData((FMOD1_SOUNDGROUP*)soundgroup, userdata);
}
FMOD_RESULT F_API FMOD_SoundGroup_GetUserData        (FMOD_SOUNDGROUP *soundgroup, void **userdata)
{
    LOAD(SoundGroup_GetUserData);
    return fmodfn.SoundGroup_GetUserData((FMOD1_SOUNDGROUP*)soundgroup, userdata);
}

FMOD_RESULT F_API FMOD_SoundGroup_GetMemoryInfo      (FMOD_SOUNDGROUP *soundgroup, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details)
{
    FAKE(SoundGroup_GetMemoryInfo);
}

// DSP
FMOD_RESULT F_API FMOD_DSP_SetUserData               (FMOD_DSP *dsp, void *userdata)
{
    LOAD(DSP_SetUserData);
    return fmodfn.DSP_SetUserData((FMOD1_DSP*)dsp, userdata);
}
FMOD_RESULT F_API FMOD_DSP_GetUserData               (FMOD_DSP *dsp, void **userdata)
{
    LOAD(DSP_GetUserData);
    return fmodfn.DSP_GetUserData((FMOD1_DSP*)dsp, userdata);
}

FMOD_RESULT F_API FMOD_DSP_GetMemoryInfo             (FMOD_DSP *dsp, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details)
{
    FAKE(DSP_GetMemoryInfo);
}

// DSPConnection
FMOD_RESULT F_API FMOD_DSPConnection_SetUserData     (FMOD_DSPCONNECTION *dspconnection, void *userdata)
{
    LOAD(DSPConnection_SetUserData);
    return fmodfn.DSPConnection_SetUserData((FMOD1_DSPCONNECTION*)dspconnection, userdata);
}
FMOD_RESULT F_API FMOD_DSPConnection_GetUserData     (FMOD_DSPCONNECTION *dspconnection, void **userdata)
{
    LOAD(DSPConnection_GetUserData);
    return fmodfn.DSPConnection_GetUserData((FMOD1_DSPCONNECTION*)dspconnection, userdata);
}

FMOD_RESULT F_API FMOD_DSPConnection_GetMemoryInfo   (FMOD_DSPCONNECTION *dspconnection, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details)
{
    FAKE(DSPConnection_GetMemoryInfo);
}

// geometry
FMOD_RESULT F_API FMOD_Geometry_SetUserData          (FMOD_GEOMETRY *geometry, void *userdata)
{
    LOAD(Geometry_SetUserData);
    return fmodfn.Geometry_SetUserData((FMOD1_GEOMETRY*)geometry, userdata);
}
FMOD_RESULT F_API FMOD_Geometry_GetUserData          (FMOD_GEOMETRY *geometry, void **userdata)
{
    LOAD(Geometry_GetUserData);
    return fmodfn.Geometry_GetUserData((FMOD1_GEOMETRY*)geometry, userdata);
}

FMOD_RESULT F_API FMOD_Geometry_GetMemoryInfo        (FMOD_GEOMETRY *geometry, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details)
{
    FAKE(Geometry_GetMemoryInfo);
}

// reverb
FMOD_RESULT F_API FMOD_Reverb_SetUserData            (FMOD_REVERB *reverb, void *userdata)
{
    LOAD(Reverb3D_SetUserData);
    return fmodfn.Reverb3D_SetUserData((FMOD1_REVERB3D*)reverb, userdata);
}
FMOD_RESULT F_API FMOD_Reverb_GetUserData            (FMOD_REVERB *reverb, void **userdata)
{
    LOAD(Reverb3D_GetUserData);
    return fmodfn.Reverb3D_GetUserData((FMOD1_REVERB3D*)reverb, userdata);
}

FMOD_RESULT F_API FMOD_Reverb_GetMemoryInfo          (FMOD_REVERB *reverb, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details)
{
    FAKE(Reverb_GetMemoryInfo);
}
