#include "fmodwrapper.h"
#include "fakemodex.h"

// Channel

FMOD_RESULT F_API FMOD_Channel_GetSystemObject       (FMOD_CHANNEL *channel, FMOD_SYSTEM **system)
{
    LOAD(Channel_GetSystemObject);
    return fmodfn.Channel_GetSystemObject((FMOD1_CHANNEL*)channel, (FMOD1_SYSTEM**)system);
}

FMOD_RESULT F_API FMOD_Channel_Stop                  (FMOD_CHANNEL *channel)
{
    LOAD(Channel_Stop);
    return fmodfn.Channel_Stop((FMOD1_CHANNEL*)channel);
}

FMOD_RESULT F_API FMOD_Channel_SetPaused             (FMOD_CHANNEL *channel, FMOD_BOOL paused)
{
    LOAD(Channel_SetPaused);
    return fmodfn.Channel_SetPaused((FMOD1_CHANNEL*)channel, paused);
}

FMOD_RESULT F_API FMOD_Channel_GetPaused             (FMOD_CHANNEL *channel, FMOD_BOOL *paused)
{
    LOAD(Channel_GetPaused);
    return fmodfn.Channel_GetPaused((FMOD1_CHANNEL*)channel, paused);
}

FMOD_RESULT F_API FMOD_Channel_SetVolume             (FMOD_CHANNEL *channel, float volume)
{
    LOAD(Channel_SetVolume);
    return fmodfn.Channel_SetVolume((FMOD1_CHANNEL*)channel, volume);
}

FMOD_RESULT F_API FMOD_Channel_GetVolume             (FMOD_CHANNEL *channel, float *volume)
{
    LOAD(Channel_GetVolume);
    return fmodfn.Channel_GetVolume((FMOD1_CHANNEL*)channel, volume);
}

FMOD_RESULT F_API FMOD_Channel_SetFrequency          (FMOD_CHANNEL *channel, float frequency)
{
    LOAD(Channel_SetFrequency);
    return fmodfn.Channel_SetFrequency((FMOD1_CHANNEL*)channel, frequency);
}

FMOD_RESULT F_API FMOD_Channel_GetFrequency          (FMOD_CHANNEL *channel, float *frequency)
{
    LOAD(Channel_GetFrequency);
    return fmodfn.Channel_GetFrequency((FMOD1_CHANNEL*)channel, frequency);
}

FMOD_RESULT F_API FMOD_Channel_SetPan                (FMOD_CHANNEL *channel, float pan)
{
    LOAD(Channel_SetPan);
    return fmodfn.Channel_SetPan((FMOD1_CHANNEL*)channel, pan);
}

FMOD_RESULT F_API FMOD_Channel_GetPan                (FMOD_CHANNEL *channel, float *pan)
{
    FAKE(Channel_GetPan);
    // yep, set but no get...
    //return fmodfn.Channel_GetPan((FMOD1_CHANNEL*)channel, pan);
}

FMOD_RESULT F_API FMOD_Channel_SetDelay              (FMOD_CHANNEL *channel, FMOD_DELAYTYPE delaytype, unsigned int delayhi, unsigned int delaylo)
{
    FAKE(Channel_SetDelay);
    //return fmodfn.Channel_SetDelay((FMOD1_CHANNEL*)channel, );
}

FMOD_RESULT F_API FMOD_Channel_GetDelay              (FMOD_CHANNEL *channel, FMOD_DELAYTYPE delaytype, unsigned int *delayhi, unsigned int *delaylo)
{
    FAKE(Channel_GetDelay);
    //return fmodfn.Channel_GetDelay((FMOD1_CHANNEL*)channel, );
}

FMOD_RESULT F_API FMOD_Channel_SetSpeakerMix         (FMOD_CHANNEL *channel, float frontleft, float frontright, float center, float lfe, float backleft, float backright, float sideleft, float sideright)
{
    FAKE(Channel_SetSpeakerMix);
    //return fmodfn.Channel_SetSpeakerMix((FMOD1_CHANNEL*)channel, );
}

FMOD_RESULT F_API FMOD_Channel_GetSpeakerMix         (FMOD_CHANNEL *channel, float *frontleft, float *frontright, float *center, float *lfe, float *backleft, float *backright, float *sideleft, float *sideright)
{
    FAKE(Channel_GetSpeakerMix);
    //return fmodfn.Channel_GetSpeakerMix((FMOD1_CHANNEL*)channel, );
}

FMOD_RESULT F_API FMOD_Channel_SetSpeakerLevels      (FMOD_CHANNEL *channel, FMOD_SPEAKER speaker, float *levels, int numlevels)
{
    FAKE(Channel_SetSpeakerLevels);
    //return fmodfn.Channel_SetSpeakerLevels((FMOD1_CHANNEL*)channel, );
}

FMOD_RESULT F_API FMOD_Channel_GetSpeakerLevels      (FMOD_CHANNEL *channel, FMOD_SPEAKER speaker, float *levels, int numlevels)
{
    FAKE(Channel_GetSpeakerLevels);
    //return fmodfn.Channel_GetSpeakerLevels((FMOD1_CHANNEL*)channel, );
}

FMOD_RESULT F_API FMOD_Channel_SetInputChannelMix    (FMOD_CHANNEL *channel, float *levels, int numlevels)
{
    FAKE(Channel_SetInputChannelMix);
    //return fmodfn.Channel_SetInputChannelMix((FMOD1_CHANNEL*)channel, );
}

FMOD_RESULT F_API FMOD_Channel_GetInputChannelMix    (FMOD_CHANNEL *channel, float *levels, int numlevels)
{
    FAKE(Channel_GetInputChannelMix);
    //return fmodfn.Channel_GetInputChannelMix((FMOD1_CHANNEL*)channel, );
}

FMOD_RESULT F_API FMOD_Channel_SetMute               (FMOD_CHANNEL *channel, FMOD_BOOL mute)
{
    LOAD(Channel_SetMute);
    return fmodfn.Channel_SetMute((FMOD1_CHANNEL*)channel, mute);
}

FMOD_RESULT F_API FMOD_Channel_GetMute               (FMOD_CHANNEL *channel, FMOD_BOOL *mute)
{
    LOAD(Channel_GetMute);
    return fmodfn.Channel_GetMute((FMOD1_CHANNEL*)channel, mute);
}

FMOD_RESULT F_API FMOD_Channel_SetPriority           (FMOD_CHANNEL *channel, int priority)
{
    LOAD(Channel_SetPriority);
    return fmodfn.Channel_SetPriority((FMOD1_CHANNEL*)channel, priority);
}

FMOD_RESULT F_API FMOD_Channel_GetPriority           (FMOD_CHANNEL *channel, int *priority)
{
    LOAD(Channel_GetPriority);
    return fmodfn.Channel_GetPriority((FMOD1_CHANNEL*)channel, priority);
}

FMOD_RESULT F_API FMOD_Channel_SetPosition           (FMOD_CHANNEL *channel, unsigned int position, FMOD_TIMEUNIT postype)
{
    LOAD(Channel_SetPosition);
    return fmodfn.Channel_SetPosition((FMOD1_CHANNEL*)channel, position, postype);
}

FMOD_RESULT F_API FMOD_Channel_GetPosition           (FMOD_CHANNEL *channel, unsigned int *position, FMOD_TIMEUNIT postype)
{
    LOAD(Channel_GetPosition);
    return fmodfn.Channel_GetPosition((FMOD1_CHANNEL*)channel, position, postype);
}

FMOD_RESULT F_API FMOD_Channel_SetReverbProperties   (FMOD_CHANNEL *channel, const FMOD_REVERB_CHANNELPROPERTIES *prop)
{
    FAKE(Channel_SetReverbProperties);
    //return fmodfn.Channel_SetReverbProperties((FMOD1_CHANNEL*)channel, );
}

FMOD_RESULT F_API FMOD_Channel_GetReverbProperties   (FMOD_CHANNEL *channel, FMOD_REVERB_CHANNELPROPERTIES *prop)
{
    FAKE(Channel_GetReverbProperties);
    //return fmodfn.Channel_GetReverbProperties((FMOD1_CHANNEL*)channel, );
}

FMOD_RESULT F_API FMOD_Channel_SetLowPassGain        (FMOD_CHANNEL *channel, float gain)
{
    LOAD(Channel_SetLowPassGain);
    return fmodfn.Channel_SetLowPassGain((FMOD1_CHANNEL*)channel, gain);
}

FMOD_RESULT F_API FMOD_Channel_GetLowPassGain        (FMOD_CHANNEL *channel, float *gain)
{
    LOAD(Channel_GetLowPassGain);
    return fmodfn.Channel_GetLowPassGain((FMOD1_CHANNEL*)channel, gain);
}

FMOD_RESULT F_API FMOD_Channel_SetChannelGroup       (FMOD_CHANNEL *channel, FMOD_CHANNELGROUP *channelgroup)
{
    LOAD(Channel_SetChannelGroup);
    return fmodfn.Channel_SetChannelGroup((FMOD1_CHANNEL*)channel, (FMOD1_CHANNELGROUP*)channelgroup);
}

FMOD_RESULT F_API FMOD_Channel_GetChannelGroup       (FMOD_CHANNEL *channel, FMOD_CHANNELGROUP **channelgroup)
{
    LOAD(Channel_GetChannelGroup);
    return fmodfn.Channel_GetChannelGroup((FMOD1_CHANNEL*)channel, (FMOD1_CHANNELGROUP**)channelgroup);
}

FMOD_RESULT F_API FMOD_Channel_SetCallback           (FMOD_CHANNEL *channel, FMOD_CHANNEL_CALLBACK callback)
{
    LOAD(Channel_SetCallback);
    return fmodfn.Channel_SetCallback((FMOD1_CHANNEL*)channel, (FMOD1_CHANNELCONTROL_CALLBACK)callback);
}


FMOD_RESULT F_API FMOD_Sound_SetMode                    (FMOD_SOUND *sound, FMOD_MODE mode)
{
    LOAD(Sound_SetMode);
    return fmodfn.Sound_SetMode((FMOD1_SOUND*)sound, (FMOD1_MODE)mode);
}
FMOD_RESULT F_API FMOD_Sound_GetMode                    (FMOD_SOUND *sound, FMOD_MODE *mode)
{
    LOAD(Sound_GetMode);
    return fmodfn.Sound_GetMode((FMOD1_SOUND*)sound, (FMOD1_MODE*)mode);
}
FMOD_RESULT F_API FMOD_Sound_SetLoopCount               (FMOD_SOUND *sound, int loopcount)
{
    LOAD(Sound_SetLoopCount);
    return fmodfn.Sound_SetLoopCount((FMOD1_SOUND*)sound, loopcount);
}
FMOD_RESULT F_API FMOD_Sound_GetLoopCount               (FMOD_SOUND *sound, int *loopcount)
{
    LOAD(Sound_GetLoopCount);
    return fmodfn.Sound_GetLoopCount((FMOD1_SOUND*)sound, loopcount);
}
FMOD_RESULT F_API FMOD_Sound_SetLoopPoints              (FMOD_SOUND *sound, unsigned int loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int loopend, FMOD_TIMEUNIT loopendtype)
{
    LOAD(Sound_SetLoopPoints);
    return fmodfn.Sound_SetLoopPoints((FMOD1_SOUND*)sound, loopstart, TimeUnit(loopstarttype), loopend, TimeUnit(loopendtype));
}
FMOD_RESULT F_API FMOD_Sound_GetLoopPoints              (FMOD_SOUND *sound, unsigned int *loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int *loopend, FMOD_TIMEUNIT loopendtype)
{
    LOAD(Sound_GetLoopPoints);
    return fmodfn.Sound_GetLoopPoints((FMOD1_SOUND*)sound, loopstart, TimeUnit(loopstarttype), loopend, TimeUnit(loopendtype));
}

// Get Infos
FMOD_RESULT F_API FMOD_Channel_IsPlaying             (FMOD_CHANNEL *channel, FMOD_BOOL *isplaying)
{
    LOAD(Channel_IsPlaying);
    return fmodfn.Channel_IsPlaying((FMOD1_CHANNEL*)channel, (FMOD1_BOOL*)isplaying);
}
FMOD_RESULT F_API FMOD_Channel_IsVirtual             (FMOD_CHANNEL *channel, FMOD_BOOL *isvirtual)
{
    LOAD(Channel_IsVirtual);
    return fmodfn.Channel_IsVirtual((FMOD1_CHANNEL*)channel, (FMOD1_BOOL*)isvirtual);
}
FMOD_RESULT F_API FMOD_Channel_GetAudibility         (FMOD_CHANNEL *channel, float *audibility)
{
    LOAD(Channel_GetAudibility);
    return fmodfn.Channel_GetAudibility((FMOD1_CHANNEL*)channel, audibility);
}
FMOD_RESULT F_API FMOD_Channel_GetCurrentSound       (FMOD_CHANNEL *channel, FMOD_SOUND **sound)
{
    LOAD(Channel_GetCurrentSound);
    return fmodfn.Channel_GetCurrentSound((FMOD1_CHANNEL*)channel, (FMOD1_SOUND**)sound);
}
FMOD_RESULT F_API FMOD_Channel_GetSpectrum           (FMOD_CHANNEL *channel, float *spectrumarray, int numvalues, int channeloffset, FMOD_DSP_FFT_WINDOW windowtype)
{
    FAKE(Channel_GetSpectrum);
    /*LOAD(Channel_GetSpectrum);
    return fmodfn.Channel_GetSpectrum((FMOD1_CHANNEL*)channel, spectrumarray, numvalues, channeloffset, (FMOD1_DSP_FFT_WINDOW)windowtype);*/
}
FMOD_RESULT F_API FMOD_Channel_GetWaveData           (FMOD_CHANNEL *channel, float *wavearray, int numvalues, int channeloffset)
{
    FAKE(Channel_GetWaveData);
    /*LOAD(Channel_GetWaveData);
    return fmodfn.Channel_GetWaveData((FMOD1_CHANNEL*)channel, wavearray, numvalues, channeloffset);*/
}
FMOD_RESULT F_API FMOD_Channel_GetIndex              (FMOD_CHANNEL *channel, int *index)
{
    LOAD(Channel_GetIndex);
    return fmodfn.Channel_GetIndex((FMOD1_CHANNEL*)channel, index);
}


//
FMOD_RESULT F_API FMOD_Channel_SetMode               (FMOD_CHANNEL *channel, FMOD_MODE mode)
{
    LOAD(Channel_SetMode);
    return fmodfn.Channel_SetMode((FMOD1_CHANNEL*)channel, (FMOD1_MODE)mode);
}
FMOD_RESULT F_API FMOD_Channel_GetMode               (FMOD_CHANNEL *channel, FMOD_MODE *mode)
{
    LOAD(Channel_GetMode);
    return fmodfn.Channel_GetMode((FMOD1_CHANNEL*)channel, (FMOD1_MODE*)mode);
}
FMOD_RESULT F_API FMOD_Channel_SetLoopCount          (FMOD_CHANNEL *channel, int loopcount)
{
    LOAD(Channel_SetLoopCount);
    return fmodfn.Channel_SetLoopCount((FMOD1_CHANNEL*)channel, loopcount);
}
FMOD_RESULT F_API FMOD_Channel_GetLoopCount          (FMOD_CHANNEL *channel, int *loopcount)
{
    LOAD(Channel_GetLoopCount);
    return fmodfn.Channel_GetLoopCount((FMOD1_CHANNEL*)channel, loopcount);
}
FMOD_RESULT F_API FMOD_Channel_SetLoopPoints         (FMOD_CHANNEL *channel, unsigned int loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int loopend, FMOD_TIMEUNIT loopendtype)
{
    LOAD(Channel_SetLoopPoints);
    return fmodfn.Channel_SetLoopPoints((FMOD1_CHANNEL*)channel, loopstart, TimeUnit(loopstarttype), loopend, TimeUnit(loopendtype));
}
FMOD_RESULT F_API FMOD_Channel_GetLoopPoints         (FMOD_CHANNEL *channel, unsigned int *loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int *loopend, FMOD_TIMEUNIT loopendtype)
{
    LOAD(Channel_GetLoopPoints);
    return fmodfn.Channel_GetLoopPoints((FMOD1_CHANNEL*)channel, loopstart, TimeUnit(loopstarttype), loopend, TimeUnit(loopendtype));
}
