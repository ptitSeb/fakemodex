#include "fmodwrapper.h"
#include "fakemodex.h"

FMOD_RESULT F_API FMOD_ChannelGroup_Release          (FMOD_CHANNELGROUP *channelgroup)
{
    LOAD(ChannelGroup_Release);
    return fmodfn.ChannelGroup_Release((FMOD1_CHANNELGROUP*)channelgroup);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetSystemObject  (FMOD_CHANNELGROUP *channelgroup, FMOD_SYSTEM **system)
{
    LOAD(ChannelGroup_GetSystemObject);
    return fmodfn.ChannelGroup_GetSystemObject((FMOD1_CHANNELGROUP*)channelgroup, (FMOD1_SYSTEM**)system);
}

// scale
FMOD_RESULT F_API FMOD_ChannelGroup_SetVolume        (FMOD_CHANNELGROUP *channelgroup, float volume)
{
    LOAD(ChannelGroup_SetVolume);
    return fmodfn.ChannelGroup_SetVolume((FMOD1_CHANNELGROUP*)channelgroup, volume);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetVolume        (FMOD_CHANNELGROUP *channelgroup, float *volume)
{
    LOAD(ChannelGroup_GetVolume);
    return fmodfn.ChannelGroup_GetVolume((FMOD1_CHANNELGROUP*)channelgroup, volume);
}
FMOD_RESULT F_API FMOD_ChannelGroup_SetPitch         (FMOD_CHANNELGROUP *channelgroup, float pitch)
{
    LOAD(ChannelGroup_SetPitch);
    return fmodfn.ChannelGroup_SetPitch((FMOD1_CHANNELGROUP*)channelgroup, pitch);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetPitch         (FMOD_CHANNELGROUP *channelgroup, float *pitch)
{
    LOAD(ChannelGroup_GetPitch);
    return fmodfn.ChannelGroup_GetPitch((FMOD1_CHANNELGROUP*)channelgroup, pitch);
}
FMOD_RESULT F_API FMOD_ChannelGroup_Set3DOcclusion   (FMOD_CHANNELGROUP *channelgroup, float directocclusion, float reverbocclusion)
{
    LOAD(ChannelGroup_Set3DOcclusion);
    return fmodfn.ChannelGroup_Set3DOcclusion((FMOD1_CHANNELGROUP*)channelgroup, directocclusion, reverbocclusion);
}
FMOD_RESULT F_API FMOD_ChannelGroup_Get3DOcclusion   (FMOD_CHANNELGROUP *channelgroup, float *directocclusion, float *reverbocclusion)
{
    LOAD(ChannelGroup_Get3DOcclusion);
    return fmodfn.ChannelGroup_Get3DOcclusion((FMOD1_CHANNELGROUP*)channelgroup, directocclusion, reverbocclusion);
}
FMOD_RESULT F_API FMOD_ChannelGroup_SetPaused        (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL paused)
{
    LOAD(ChannelGroup_SetPaused);
    return fmodfn.ChannelGroup_SetPaused((FMOD1_CHANNELGROUP*)channelgroup, (FMOD1_BOOL)paused);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetPaused        (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL *paused)
{
    LOAD(ChannelGroup_GetPaused);
    return fmodfn.ChannelGroup_GetPaused((FMOD1_CHANNELGROUP*)channelgroup, (FMOD1_BOOL*)paused);
}
FMOD_RESULT F_API FMOD_ChannelGroup_SetMute          (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL mute)
{
    LOAD(ChannelGroup_SetMute);
    return fmodfn.ChannelGroup_SetMute((FMOD1_CHANNELGROUP*)channelgroup, (FMOD1_BOOL)mute);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetMute          (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL *mute)
{
    LOAD(ChannelGroup_GetMute);
    return fmodfn.ChannelGroup_GetMute((FMOD1_CHANNELGROUP*)channelgroup, (FMOD1_BOOL*)mute);
}

// Overrides
FMOD_RESULT F_API FMOD_ChannelGroup_Stop             (FMOD_CHANNELGROUP *channelgroup)
{
    LOAD(ChannelGroup_Stop);
    return fmodfn.ChannelGroup_Stop((FMOD1_CHANNELGROUP*)channelgroup);
}
FMOD_RESULT F_API FMOD_ChannelGroup_OverrideVolume   (FMOD_CHANNELGROUP *channelgroup, float volume)
{
    FAKE(ChannelGroup_OverrideVolume);
    /*LOAD(ChannelGroup_OverrideVolume);
    return fmodfn.ChannelGroup_OverrideVolume((FMOD1_CHANNELGROUP*)channelgroup, volume);*/
}
FMOD_RESULT F_API FMOD_ChannelGroup_OverrideFrequency(FMOD_CHANNELGROUP *channelgroup, float frequency)
{
    FAKE(ChannelGroup_OverrideFrequency);
    /*LOAD(ChannelGroup_OverrideFrequency);
    return fmodfn.ChannelGroup_OverrideFrequency((FMOD1_CHANNELGROUP*)channelgroup, frequency);*/
}
FMOD_RESULT F_API FMOD_ChannelGroup_OverridePan      (FMOD_CHANNELGROUP *channelgroup, float pan)
{
    FAKE(ChannelGroup_OverridePan);
    /*LOAD(ChannelGroup_OverridePan);
    return fmodfn.ChannelGroup_OverridePan((FMOD1_CHANNELGROUP*)channelgroup, pan);*/
}
FMOD_RESULT F_API FMOD_ChannelGroup_OverrideReverbProperties(FMOD_CHANNELGROUP *channelgroup, const FMOD_REVERB_CHANNELPROPERTIES *prop)
{
    FAKE(ChannelGroup_OverrideReverbProperties);
    /*LOAD(ChannelGroup_OverrideReverbProperties);
    return fmodfn.ChannelGroup_OverrideReverbProperties((FMOD1_CHANNELGROUP*)channelgroup, (const FMOD1_REVERB_CHANNELPROPERTIES*)prop);*/
}
FMOD_RESULT F_API FMOD_ChannelGroup_Override3DAttributes(FMOD_CHANNELGROUP *channelgroup, const FMOD_VECTOR *pos, const FMOD_VECTOR *vel)
{
    FAKE(ChannelGroup_Override3DAttributes);
    /*LOAD(ChannelGroup_Override3DAttributes);
    return fmodfn.ChannelGroup_Override3DAttributes((FMOD1_CHANNELGROUP*)channelgroup, (const FMOD1_VECTOR*)pos, (const FMOD1_VECTOR*)vel);*/
}
FMOD_RESULT F_API FMOD_ChannelGroup_OverrideSpeakerMix(FMOD_CHANNELGROUP *channelgroup, float frontleft, float frontright, float center, float lfe, float backleft, float backright, float sideleft, float sideright)
{
    FAKE(ChannelGroup_OverrideSpeakerMix);
    /*LOAD(ChannelGroup_OverrideSpeakerMix);
    return fmodfn.ChannelGroup_OverrideSpeakerMix((FMOD1_CHANNELGROUP*)channelgroup, frontleft, frontright, center, lfe, backleft, backright, sideleft, sideright);*/
}


// Nested
FMOD_RESULT F_API FMOD_ChannelGroup_AddGroup         (FMOD_CHANNELGROUP *channelgroup, FMOD_CHANNELGROUP *group)
{
    LOAD(ChannelGroup_AddGroup);
    // TODO: not sure this is correct
    return fmodfn.ChannelGroup_AddGroup((FMOD1_CHANNELGROUP*)channelgroup, (FMOD1_CHANNELGROUP*)group, 0, NULL);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetNumGroups     (FMOD_CHANNELGROUP *channelgroup, int *numgroups)
{
    LOAD(ChannelGroup_GetNumGroups);
    return fmodfn.ChannelGroup_GetNumGroups((FMOD1_CHANNELGROUP*)channelgroup, numgroups);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetGroup         (FMOD_CHANNELGROUP *channelgroup, int index, FMOD_CHANNELGROUP **group)
{
    LOAD(ChannelGroup_GetGroup);
    return fmodfn.ChannelGroup_GetGroup((FMOD1_CHANNELGROUP*)channelgroup, index, (FMOD1_CHANNELGROUP**)group);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetParentGroup   (FMOD_CHANNELGROUP *channelgroup, FMOD_CHANNELGROUP **group)
{
    LOAD(ChannelGroup_GetParentGroup);
    return fmodfn.ChannelGroup_GetParentGroup((FMOD1_CHANNELGROUP*)channelgroup, (FMOD1_CHANNELGROUP**)group);
}

// Info
FMOD_RESULT F_API FMOD_ChannelGroup_GetName          (FMOD_CHANNELGROUP *channelgroup, char *name, int namelen)
{
    LOAD(ChannelGroup_GetName);
    return fmodfn.ChannelGroup_GetName((FMOD1_CHANNELGROUP*)channelgroup, name, namelen);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetNumChannels   (FMOD_CHANNELGROUP *channelgroup, int *numchannels)
{
    LOAD(ChannelGroup_GetNumChannels);
    return fmodfn.ChannelGroup_GetNumChannels((FMOD1_CHANNELGROUP*)channelgroup, numchannels);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetChannel       (FMOD_CHANNELGROUP *channelgroup, int index, FMOD_CHANNEL **channel)
{
    LOAD(ChannelGroup_GetChannel);
    return fmodfn.ChannelGroup_GetChannel((FMOD1_CHANNELGROUP*)channelgroup, index, (FMOD1_CHANNEL**)channel);
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetSpectrum      (FMOD_CHANNELGROUP *channelgroup, float *spectrumarray, int numvalues, int channeloffset, FMOD_DSP_FFT_WINDOW windowtype)
{
    FAKE(ChannelGroup_GetSpectrum);
    /*LOAD(ChannelGroup_GetSpectrum);
    return fmodfn.ChannelGroup_GetSpectrum((FMOD1_CHANNELGROUP*)channelgroup, );*/
}
FMOD_RESULT F_API FMOD_ChannelGroup_GetWaveData      (FMOD_CHANNELGROUP *channelgroup, float *wavearray, int numvalues, int channeloffset)
{
    FAKE(ChannelGroup_GetWaveData);
    /*LOAD(ChannelGroup_GetWaveData);
    return fmodfn.ChannelGroup_GetWaveData((FMOD1_CHANNELGROUP*)channelgroup, );*/
}
