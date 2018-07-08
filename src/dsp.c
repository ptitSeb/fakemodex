#include "fmodwrapper.h"
#include "fakemodex.h"

FMOD_RESULT F_API FMOD_System_GetDSPHead             (FMOD_SYSTEM *system, FMOD_DSP **dsp)
{
    FAKE(System_GetDSPHead);
    /*LOAD(System_GetDSPHead);
    return fmodfn.System_GetDSPHead((FMOD1_SYSTEM*)system, (FMOD1_DSP**)dsp);*/
}
FMOD_RESULT F_API FMOD_System_AddDSP                 (FMOD_SYSTEM *system, FMOD_DSP *dsp, FMOD_DSPCONNECTION **connection)
{
    FAKE(System_AddDSP);
    /*LOAD(System_AddDSP);
    return fmodfn.System_AddDSP((FMOD1_SYSTEM*)system, (FMOD1_DSP*)dsp, (FMOD1_DSPCONNECTION **)connection);*/
}
FMOD_RESULT F_API FMOD_System_LockDSP                (FMOD_SYSTEM *system)
{
    LOAD(System_LockDSP);
    return fmodfn.System_LockDSP((FMOD1_SYSTEM*)system);
}
FMOD_RESULT F_API FMOD_System_UnlockDSP              (FMOD_SYSTEM *system)
{
    LOAD(System_UnlockDSP);
    return fmodfn.System_UnlockDSP((FMOD1_SYSTEM*)system);
}
FMOD_RESULT F_API FMOD_System_GetDSPClock            (FMOD_SYSTEM *system, unsigned int *hi, unsigned int *lo)
{
    FAKE(System_GetDSPClock);
    /*LOAD(System_GetDSPClock);
    return fmodfn.System_GetDSPClock((FMOD1_SYSTEM*)system, hi, lo);*/
}

FMOD_RESULT F_API FMOD_Channel_GetDSPHead            (FMOD_CHANNEL *channel, FMOD_DSP **dsp)
{
    FAKE(Channel_GetDSPHead);
}
FMOD_RESULT F_API FMOD_Channel_AddDSP                (FMOD_CHANNEL *channel, FMOD_DSP *dsp, FMOD_DSPCONNECTION **connection)
{
    FAKE(Channel_AddDSP);
}


// channelgroup
FMOD_RESULT F_API FMOD_ChannelGroup_GetDSPHead       (FMOD_CHANNELGROUP *channelgroup, FMOD_DSP **dsp)
{
    FAKE(ChannelGroup_GetDSPHead);
}
FMOD_RESULT F_API FMOD_ChannelGroup_AddDSP           (FMOD_CHANNELGROUP *channelgroup, FMOD_DSP *dsp, FMOD_DSPCONNECTION **connection)
{
    FAKE(ChannelGroup_AddDSP);
}

// system
FMOD_RESULT F_API FMOD_DSP_Release                   (FMOD_DSP *dsp)
{
    LOAD(DSP_Release);
    return fmodfn.DSP_Release((FMOD1_DSP*)dsp);
}
FMOD_RESULT F_API FMOD_DSP_GetSystemObject           (FMOD_DSP *dsp, FMOD_SYSTEM **system)
{
    LOAD(DSP_GetSystemObject);
    return fmodfn.DSP_GetSystemObject((FMOD1_DSP*)dsp, (FMOD1_SYSTEM**)system);
}

// connection
FMOD_RESULT F_API FMOD_DSP_AddInput                  (FMOD_DSP *dsp, FMOD_DSP *target, FMOD_DSPCONNECTION **connection)
{
        FAKE(DSP_AddInput);
}
FMOD_RESULT F_API FMOD_DSP_DisconnectFrom            (FMOD_DSP *dsp, FMOD_DSP *target)
{
        FAKE(DSP_DisconnectFrom);
}
FMOD_RESULT F_API FMOD_DSP_DisconnectAll             (FMOD_DSP *dsp, FMOD_BOOL inputs, FMOD_BOOL outputs)
{
        FAKE(DSP_DisconnectAll);
}
FMOD_RESULT F_API FMOD_DSP_Remove                    (FMOD_DSP *dsp)
{
        FAKE(DSP_Remove);
}
FMOD_RESULT F_API FMOD_DSP_GetNumInputs              (FMOD_DSP *dsp, int *numinputs)
{
        FAKE(DSP_GetNumInputs);
}
FMOD_RESULT F_API FMOD_DSP_GetNumOutputs             (FMOD_DSP *dsp, int *numoutputs)
{
        FAKE(DSP_GetNumOutputs);
}
FMOD_RESULT F_API FMOD_DSP_GetInput                  (FMOD_DSP *dsp, int index, FMOD_DSP **input, FMOD_DSPCONNECTION **inputconnection)
{
        FAKE(DSP_GetInput);
}
FMOD_RESULT F_API FMOD_DSP_GetOutput                 (FMOD_DSP *dsp, int index, FMOD_DSP **output, FMOD_DSPCONNECTION **outputconnection)
{
        FAKE(DSP_GetOutput);
}

// control
FMOD_RESULT F_API FMOD_DSP_SetActive                 (FMOD_DSP *dsp, FMOD_BOOL active)
{
    FAKE(DSP_SetActive);
}
FMOD_RESULT F_API FMOD_DSP_GetActive                 (FMOD_DSP *dsp, FMOD_BOOL *active)
{
    FAKE(DSP_GetActive);
}
FMOD_RESULT F_API FMOD_DSP_SetBypass                 (FMOD_DSP *dsp, FMOD_BOOL bypass)
{
    FAKE(DSP_SetBypass);
}
FMOD_RESULT F_API FMOD_DSP_GetBypass                 (FMOD_DSP *dsp, FMOD_BOOL *bypass)
{
    FAKE(DSP_GetBypass);
}
FMOD_RESULT F_API FMOD_DSP_SetSpeakerActive          (FMOD_DSP *dsp, FMOD_SPEAKER speaker, FMOD_BOOL active)
{
    FAKE(DSP_SetSpeakerActive);
}
FMOD_RESULT F_API FMOD_DSP_GetSpeakerActive          (FMOD_DSP *dsp, FMOD_SPEAKER speaker, FMOD_BOOL *active)
{
    FAKE(DSP_GetSpeakerActive);
}
FMOD_RESULT F_API FMOD_DSP_Reset                     (FMOD_DSP *dsp)
{
    FAKE(DSP_Reset);
}

// parameters
FMOD_RESULT F_API FMOD_DSP_SetParameter              (FMOD_DSP *dsp, int index, float value)
{
    FAKE(DSP_SetParameter);
}
FMOD_RESULT F_API FMOD_DSP_GetParameter              (FMOD_DSP *dsp, int index, float *value, char *valuestr, int valuestrlen)
{
    FAKE(DSP_GetParameter);
}
FMOD_RESULT F_API FMOD_DSP_GetNumParameters          (FMOD_DSP *dsp, int *numparams)
{
    FAKE(DSP_GetNumParameters);
}
FMOD_RESULT F_API FMOD_DSP_GetParameterInfo          (FMOD_DSP *dsp, int index, char *name, char *label, char *description, int descriptionlen, float *min, float *max)
{
    FAKE(DSP_GetParameterInfo);
}
FMOD_RESULT F_API FMOD_DSP_ShowConfigDialog          (FMOD_DSP *dsp, void *hwnd, FMOD_BOOL show)
{
    FAKE(DSP_ShowConfigDialog);
}

// attribute
FMOD_RESULT F_API FMOD_DSP_GetInfo                   (FMOD_DSP *dsp, char *name, unsigned int *version, int *channels, int *configwidth, int *configheight)
{
    FAKE(GetInfo);
}
FMOD_RESULT F_API FMOD_DSP_GetType                   (FMOD_DSP *dsp, FMOD_DSP_TYPE *type)
{
    FAKE(GetType);
}
FMOD_RESULT F_API FMOD_DSP_SetDefaults               (FMOD_DSP *dsp, float frequency, float volume, float pan, int priority)
{
    FAKE(SetDefaults);
}
FMOD_RESULT F_API FMOD_DSP_GetDefaults               (FMOD_DSP *dsp, float *frequency, float *volume, float *pan, int *priority)
{
    FAKE(GetDefaults);
}

// DSPConnection
FMOD_RESULT F_API FMOD_DSPConnection_GetInput        (FMOD_DSPCONNECTION *dspconnection, FMOD_DSP **input)
{
    FAKE(DSPConnection_GetInput);
}
FMOD_RESULT F_API FMOD_DSPConnection_GetOutput       (FMOD_DSPCONNECTION *dspconnection, FMOD_DSP **output)
{
    FAKE(DSPConnection_GetOutput);
}
FMOD_RESULT F_API FMOD_DSPConnection_SetMix          (FMOD_DSPCONNECTION *dspconnection, float volume)
{
    FAKE(DSPConnection_SetMix);
}
FMOD_RESULT F_API FMOD_DSPConnection_GetMix          (FMOD_DSPCONNECTION *dspconnection, float *volume)
{
    FAKE(DSPConnection_GetMix);
}
FMOD_RESULT F_API FMOD_DSPConnection_SetLevels       (FMOD_DSPCONNECTION *dspconnection, FMOD_SPEAKER speaker, float *levels, int numlevels)
{
    FAKE(DSPConnection_SetLevels);
}
FMOD_RESULT F_API FMOD_DSPConnection_GetLevels       (FMOD_DSPCONNECTION *dspconnection, FMOD_SPEAKER speaker, float *levels, int numlevels)
{
    FAKE(DSPConnection_GetLevels);
}
