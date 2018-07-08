#include "fmodwrapper.h"
#include "fakemodex.h"

FMOD_RESULT F_API FMOD_Sound_GetMusicNumChannels     (FMOD_SOUND *sound, int *numchannels)
{
    LOAD(Sound_GetMusicNumChannels);
    return fmodfn.Sound_GetMusicNumChannels((FMOD1_SOUND*)sound, numchannels);
}
FMOD_RESULT F_API FMOD_Sound_SetMusicChannelVolume   (FMOD_SOUND *sound, int channel, float volume)
{
    LOAD(Sound_SetMusicChannelVolume);
    return fmodfn.Sound_SetMusicChannelVolume((FMOD1_SOUND*)sound, channel, volume);
}
FMOD_RESULT F_API FMOD_Sound_GetMusicChannelVolume   (FMOD_SOUND *sound, int channel, float *volume)
{
    LOAD(Sound_GetMusicChannelVolume);
    return fmodfn.Sound_GetMusicChannelVolume((FMOD1_SOUND*)sound, channel, volume);
}
FMOD_RESULT F_API FMOD_Sound_SetMusicSpeed           (FMOD_SOUND *sound, float speed)
{
    LOAD(Sound_SetMusicSpeed);
    return fmodfn.Sound_SetMusicSpeed((FMOD1_SOUND*)sound, speed);
}
FMOD_RESULT F_API FMOD_Sound_GetMusicSpeed           (FMOD_SOUND *sound, float *speed)
{
    LOAD(Sound_GetMusicSpeed);
    return fmodfn.Sound_GetMusicSpeed((FMOD1_SOUND*)sound, speed);
}
