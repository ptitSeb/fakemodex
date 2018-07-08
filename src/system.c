#include <stdio.h>
#include "fmodwrapper.h"
#include "fakemodex.h"

// System Creation
FMOD_RESULT F_API FMOD_System_Create               (FMOD_SYSTEM **system)
{
    LOAD(System_Create);
    return fmodfn.System_Create((FMOD1_SYSTEM**)system);
}
FMOD_RESULT F_API FMOD_System_Release              (FMOD_SYSTEM *system)
{
    LOAD(System_Release);
    return fmodfn.System_Release((FMOD1_SYSTEM*)system);
}

// Pre-init functions
FMOD_RESULT F_API FMOD_System_SetOutput              (FMOD_SYSTEM *system, FMOD_OUTPUTTYPE output) {
    LOAD(System_SetOutput);
    //TODO conversion?
    return fmodfn.System_SetOutput((FMOD1_SYSTEM*)system, output);
}
FMOD_RESULT F_API FMOD_System_GetOutput              (FMOD_SYSTEM *system, FMOD_OUTPUTTYPE *output) {
    LOAD(System_GetOutput);
    //TODO conversion?
    return fmodfn.System_GetOutput((FMOD1_SYSTEM*)system, (FMOD1_OUTPUTTYPE*)output);
}
FMOD_RESULT F_API FMOD_System_GetNumDrivers          (FMOD_SYSTEM *system, int *numdrivers) {
    LOAD(System_GetNumDrivers);
    return fmodfn.System_GetNumDrivers((FMOD1_SYSTEM*)system, numdrivers);
}
FMOD_RESULT F_API FMOD_System_GetDriverInfo          (FMOD_SYSTEM *system, int id, char *name, int namelen, FMOD_GUID *guid) {
    LOAD(System_GetDriverInfo);
    //(FMOD_SYSTEM *system, int id, char *name, int namelen, FMOD_GUID *guid, int *systemrate, FMOD_SPEAKERMODE *speakermode, int *speakermodechannels);
    int systemrate;
    FMOD1_SPEAKERMODE speakermode;
    int speakermodechannels;
    return fmodfn.System_GetDriverInfo((FMOD1_SYSTEM*)system, id, name, namelen, (FMOD1_GUID*)guid, &systemrate, &speakermode, &speakermodechannels);
}
FMOD_RESULT F_API FMOD_System_GetDriverInfoW         (FMOD_SYSTEM *system, int id, short *name, int namelen, FMOD_GUID *guid) {
    FAKE(System_GetDriverInfoW);
    // TODO?
    //return fmodfn.System_GetDriverInfoW((FMOD1_SYSTEM*)system, id, name, namelen, guid);
}
FMOD_RESULT F_API FMOD_System_GetDriverCaps          (FMOD_SYSTEM *system, int id, FMOD_CAPS *caps, int *controlpaneloutputrate, FMOD_SPEAKERMODE *controlpanelspeakermode) {
    FAKE(System_GetDriverCaps);
    // TODO?
    //return fmodfn.System_GetDriverCaps((FMOD1_SYSTEM*)system, id, caps, controlpaneloutputrate, controlpanelspeakermode);
}
FMOD_RESULT F_API FMOD_System_SetDriver              (FMOD_SYSTEM *system, int driver) {
    LOAD(System_SetDriver);
    return fmodfn.System_SetDriver((FMOD1_SYSTEM*)system, driver);
}
FMOD_RESULT F_API FMOD_System_GetDriver              (FMOD_SYSTEM *system, int *driver) {
    LOAD(System_GetDriver);
    return fmodfn.System_GetDriver((FMOD1_SYSTEM*)system, driver);
}
FMOD_RESULT F_API FMOD_System_SetHardwareChannels    (FMOD_SYSTEM *system, int numhardwarechannels) {
    FAKE(System_SetHardwareChannels);
    //return fmodfn.System_SetHardwareChannels((FMOD1_SYSTEM*)system, numhardwarechannels);
}
FMOD_RESULT F_API FMOD_System_SetSoftwareChannels    (FMOD_SYSTEM *system, int numsoftwarechannels) {
    LOAD(System_SetSoftwareChannels);
    return fmodfn.System_SetSoftwareChannels((FMOD1_SYSTEM*)system, numsoftwarechannels);
}
FMOD_RESULT F_API FMOD_System_GetSoftwareChannels    (FMOD_SYSTEM *system, int *numsoftwarechannels) {
    LOAD(System_GetSoftwareChannels);
    return fmodfn.System_GetSoftwareChannels((FMOD1_SYSTEM*)system, numsoftwarechannels);
}
FMOD_RESULT F_API FMOD_System_SetSoftwareFormat      (FMOD_SYSTEM *system, int samplerate, FMOD_SOUND_FORMAT format, int numoutputchannels, int maxinputchannels, FMOD_DSP_RESAMPLER resamplemethod) {
    LOAD(System_SetSoftwareFormat);
    FMOD1_SPEAKERMODE speakermode = FMOD_SPEAKERMODE_STEREO;
    switch(numoutputchannels) {
        case 1 : FMOD1_SPEAKERMODE_MONO; break;
        case 2 : FMOD1_SPEAKERMODE_STEREO; break;
        case 3 : FMOD1_SPEAKERMODE_SURROUND; break;
        case 4 : FMOD1_SPEAKERMODE_QUAD; break;
        case 5 : 
        case 6 : FMOD1_SPEAKERMODE_5POINT1; break;
        case 7 : FMOD1_SPEAKERMODE_7POINT1; break;
    }
    return fmodfn.System_SetSoftwareFormat((FMOD1_SYSTEM*)system, samplerate, speakermode, 0);
}
FMOD_RESULT F_API FMOD_System_GetSoftwareFormat      (FMOD_SYSTEM *system, int *samplerate, FMOD_SOUND_FORMAT *format, int *numoutputchannels, int *maxinputchannels, FMOD_DSP_RESAMPLER *resamplemethod, int *bits) {
    LOAD(System_GetSoftwareFormat);
    FMOD1_SPEAKERMODE speakermode;
    FMOD_RESULT res = fmodfn.System_GetSoftwareFormat((FMOD1_SYSTEM*)system, samplerate, &speakermode, numoutputchannels);
    *bits = 16;
    *resamplemethod = FMOD_DSP_RESAMPLER_NOINTERP;
    *format = FMOD_SOUND_FORMAT_PCM16;
    return res;
}
FMOD_RESULT F_API FMOD_System_SetDSPBufferSize       (FMOD_SYSTEM *system, unsigned int bufferlength, int numbuffers) {
    LOAD(System_SetDSPBufferSize);
    return fmodfn.System_SetDSPBufferSize((FMOD1_SYSTEM*)system, bufferlength, numbuffers);
}
FMOD_RESULT F_API FMOD_System_GetDSPBufferSize       (FMOD_SYSTEM *system, unsigned int *bufferlength, int *numbuffers) {
    LOAD(System_GetDSPBufferSize);
    return fmodfn.System_GetDSPBufferSize((FMOD1_SYSTEM*)system, bufferlength, numbuffers);
}
FMOD_RESULT F_API FMOD_System_SetFileSystem          (FMOD_SYSTEM *system, FMOD_FILE_OPENCALLBACK useropen, FMOD_FILE_CLOSECALLBACK userclose, FMOD_FILE_READCALLBACK userread, FMOD_FILE_SEEKCALLBACK userseek, FMOD_FILE_ASYNCREADCALLBACK userasyncread, FMOD_FILE_ASYNCCANCELCALLBACK userasynccancel, int blockalign) {
    LOAD(System_SetFileSystem);
    return fmodfn.System_SetFileSystem((FMOD1_SYSTEM*)system, (FMOD1_FILE_OPEN_CALLBACK)useropen, (FMOD1_FILE_CLOSE_CALLBACK)userclose, (FMOD1_FILE_READ_CALLBACK)userread, (FMOD1_FILE_SEEK_CALLBACK)userseek, (FMOD1_FILE_ASYNCREAD_CALLBACK)userasyncread, (FMOD1_FILE_ASYNCCANCEL_CALLBACK)userasynccancel, blockalign);
}
FMOD_RESULT F_API FMOD_System_AttachFileSystem       (FMOD_SYSTEM *system, FMOD_FILE_OPENCALLBACK useropen, FMOD_FILE_CLOSECALLBACK userclose, FMOD_FILE_READCALLBACK userread, FMOD_FILE_SEEKCALLBACK userseek) {
    LOAD(System_AttachFileSystem);
    return fmodfn.System_AttachFileSystem((FMOD1_SYSTEM*)system, (FMOD1_FILE_OPEN_CALLBACK)useropen, (FMOD1_FILE_CLOSE_CALLBACK)userclose, (FMOD1_FILE_READ_CALLBACK)userread, (FMOD1_FILE_SEEK_CALLBACK)userseek);
}
FMOD_RESULT F_API FMOD_System_SetAdvancedSettings    (FMOD_SYSTEM *system, FMOD_ADVANCEDSETTINGS *settings) {
    LOAD(System_SetAdvancedSettings);
    FMOD1_ADVANCEDSETTINGS set1;
    AdvancedSettingsTo(settings, &set1);
    return fmodfn.System_SetAdvancedSettings((FMOD1_SYSTEM*)system, &set1);
}
FMOD_RESULT F_API FMOD_System_GetAdvancedSettings    (FMOD_SYSTEM *system, FMOD_ADVANCEDSETTINGS *settings) {
    LOAD(System_GetAdvancedSettings);
    FMOD1_ADVANCEDSETTINGS set1;
    FMOD_RESULT res = fmodfn.System_GetAdvancedSettings((FMOD1_SYSTEM*)system, &set1);
    AdvancedSettingsFrom(settings, &set1);
    return res;
}
FMOD_RESULT F_API FMOD_System_SetSpeakerMode         (FMOD_SYSTEM *system, FMOD_SPEAKERMODE speakermode) {
    LOAD(System_SetSoftwareFormat);
    // TODO, make the frequency variable somehow
    return fmodfn.System_SetSoftwareFormat((FMOD1_SYSTEM*)system, 44100, SpeakerMode(speakermode), 0);
}
FMOD_RESULT F_API FMOD_System_GetSpeakerMode         (FMOD_SYSTEM *system, FMOD_SPEAKERMODE *speakermode) {
    LOAD(System_GetSoftwareFormat);
    int samplerate, numrawspeaker;
    FMOD1_SPEAKERMODE speaker;
    FMOD_RESULT res = fmodfn.System_GetSoftwareFormat((FMOD1_SYSTEM*)system, &samplerate, &speaker, &numrawspeaker);
    *speakermode = SpeakerModeFrom(speaker);
    return res;
}
FMOD_RESULT F_API FMOD_System_SetCallback            (FMOD_SYSTEM *system, FMOD_SYSTEM_CALLBACK callback) {
    LOAD(System_SetCallback);
    return fmodfn.System_SetCallback((FMOD1_SYSTEM*)system, (FMOD1_SYSTEM_CALLBACK)callback, 0xfff);
}

// Plugins
FMOD_RESULT F_API FMOD_System_SetPluginPath          (FMOD_SYSTEM *system, const char *path)
{
    LOAD(System_SetPluginPath);
    return fmodfn.System_SetPluginPath((FMOD1_SYSTEM*)system, path);
}
FMOD_RESULT F_API FMOD_System_LoadPlugin             (FMOD_SYSTEM *system, const char *filename, unsigned int *handle, unsigned int priority)
{
    LOAD(System_LoadPlugin);
    return fmodfn.System_LoadPlugin((FMOD1_SYSTEM*)system, filename, handle, priority);
}
FMOD_RESULT F_API FMOD_System_UnloadPlugin           (FMOD_SYSTEM *system, unsigned int handle)
{
    LOAD(System_UnloadPlugin);
    return fmodfn.System_UnloadPlugin((FMOD1_SYSTEM*)system, handle);
}
FMOD_RESULT F_API FMOD_System_GetNumPlugins          (FMOD_SYSTEM *system, FMOD_PLUGINTYPE plugintype, int *numplugins)
{
    LOAD(System_GetNumPlugins);
    return fmodfn.System_GetNumPlugins((FMOD1_SYSTEM*)system, plugintype, numplugins);
}
FMOD_RESULT F_API FMOD_System_GetPluginHandle        (FMOD_SYSTEM *system, FMOD_PLUGINTYPE plugintype, int index, unsigned int *handle)
{
    LOAD(System_GetPluginHandle);
    return fmodfn.System_GetPluginHandle((FMOD1_SYSTEM*)system, plugintype, index, handle);
}
FMOD_RESULT F_API FMOD_System_GetPluginInfo          (FMOD_SYSTEM *system, unsigned int handle, FMOD_PLUGINTYPE *plugintype, char *name, int namelen, unsigned int *version)
{
    LOAD(System_GetPluginInfo);
    return fmodfn.System_GetPluginInfo((FMOD1_SYSTEM*)system, handle, (FMOD1_PLUGINTYPE*)plugintype, name, namelen, version);
}
FMOD_RESULT F_API FMOD_System_SetOutputByPlugin      (FMOD_SYSTEM *system, unsigned int handle)
{
    LOAD(System_SetOutputByPlugin);
    return fmodfn.System_SetOutputByPlugin((FMOD1_SYSTEM*)system, handle);
}
FMOD_RESULT F_API FMOD_System_GetOutputByPlugin      (FMOD_SYSTEM *system, unsigned int *handle)
{
    LOAD(System_GetOutputByPlugin);
    return fmodfn.System_GetOutputByPlugin((FMOD1_SYSTEM*)system, handle);
}
FMOD_RESULT F_API FMOD_System_CreateDSPByPlugin      (FMOD_SYSTEM *system, unsigned int handle, FMOD_DSP **dsp)
{
    //FAKE(System_CreateDSPByPlugin);
    LOAD(System_CreateDSPByPlugin);
    return fmodfn.System_CreateDSPByPlugin((FMOD1_SYSTEM*)system, handle, (FMOD1_DSP**)dsp);
}
FMOD_RESULT F_API FMOD_System_RegisterCodec          (FMOD_SYSTEM *system, FMOD_CODEC_DESCRIPTION *description, unsigned int *handle, unsigned int priority)
{
    FAKE(System_RegisterCodec);
    // TODO FMOD_CODEC_DESCRIPTION -> FMOD1_CODEC_DESCRIPTION conversion?
    /*LOAD(System_RegisterCodec);
    return fmodfn.System_RegisterCodec((FMOD1_SYSTEM*)system, (FMOD1_CODEC_DESCRIPTION*)description, handle, priority);*/
}
FMOD_RESULT F_API FMOD_System_RegisterDSP            (FMOD_SYSTEM *system, FMOD_DSP_DESCRIPTION *description, unsigned int *handle)
{
    FAKE(System_RegisterDSP);
    // TODO FMOD_CODEC_DESCRIPTION -> FMOD1_DSP_DESCRIPTION conversion?
    /*LOAD(System_RegisterDSP);
    return fmodfn.System_RegisterDSP((FMOD1_SYSTEM*)system, (FMOD1_DSP_DESCRIPTION*)description, handle);*/
}

// Init / Close
FMOD_RESULT F_API FMOD_System_Init                   (FMOD_SYSTEM *system, int maxchannels, FMOD_INITFLAGS flags, void *extradriverdata)
{
    LOAD(System_Init);
    return fmodfn.System_Init((FMOD1_SYSTEM*)system, maxchannels, InitFlags(flags), extradriverdata);
}
FMOD_RESULT F_API FMOD_System_Close                  (FMOD_SYSTEM *system)
{
    LOAD(System_Close);
    return fmodfn.System_Close((FMOD1_SYSTEM*)system);
}


// Post-init
FMOD_RESULT F_API FMOD_System_Update                 (FMOD_SYSTEM *system)
{
    LOAD(System_Update);
    return fmodfn.System_Update((FMOD1_SYSTEM*)system);
}
FMOD_RESULT F_API FMOD_System_Set3DSettings          (FMOD_SYSTEM *system, float dopplerscale, float distancefactor, float rolloffscale)
{
    LOAD(System_Set3DSettings);
    return fmodfn.System_Set3DSettings((FMOD1_SYSTEM*)system, dopplerscale, distancefactor, rolloffscale);
}
FMOD_RESULT F_API FMOD_System_Get3DSettings          (FMOD_SYSTEM *system, float *dopplerscale, float *distancefactor, float *rolloffscale)
{
    LOAD(System_Get3DSettings);
    return fmodfn.System_Get3DSettings((FMOD1_SYSTEM*)system, dopplerscale, distancefactor, rolloffscale);
}
FMOD_RESULT F_API FMOD_System_Set3DNumListeners      (FMOD_SYSTEM *system, int numlisteners)
{
    LOAD(System_Set3DNumListeners);
    return fmodfn.System_Set3DNumListeners((FMOD1_SYSTEM*)system, numlisteners);
}
FMOD_RESULT F_API FMOD_System_Get3DNumListeners      (FMOD_SYSTEM *system, int *numlisteners)
{
    LOAD(System_Get3DNumListeners);
    return fmodfn.System_Get3DNumListeners((FMOD1_SYSTEM*)system, numlisteners);
}
FMOD_RESULT F_API FMOD_System_Set3DListenerAttributes(FMOD_SYSTEM *system, int listener, const FMOD_VECTOR *pos, const FMOD_VECTOR *vel, const FMOD_VECTOR *forward, const FMOD_VECTOR *up)
{
    LOAD(System_Set3DListenerAttributes);
    return fmodfn.System_Set3DListenerAttributes((FMOD1_SYSTEM*)system, listener, (const FMOD1_VECTOR*)pos, (const FMOD1_VECTOR*)vel, (const FMOD1_VECTOR*)forward, (const FMOD1_VECTOR*)up);
}
FMOD_RESULT F_API FMOD_System_Get3DListenerAttributes(FMOD_SYSTEM *system, int listener, FMOD_VECTOR *pos, FMOD_VECTOR *vel, FMOD_VECTOR *forward, FMOD_VECTOR *up)
{
    LOAD(System_Get3DListenerAttributes);
    return fmodfn.System_Get3DListenerAttributes((FMOD1_SYSTEM*)system, listener, (FMOD1_VECTOR*)pos, (FMOD1_VECTOR*)vel, (FMOD1_VECTOR*)forward, (FMOD1_VECTOR*)up);
}
FMOD_RESULT F_API FMOD_System_Set3DRolloffCallback   (FMOD_SYSTEM *system, FMOD_3D_ROLLOFFCALLBACK callback)
{
    LOAD(System_Set3DRolloffCallback);
    return fmodfn.System_Set3DRolloffCallback((FMOD1_SYSTEM*)system, (FMOD1_3D_ROLLOFF_CALLBACK)callback); // is it ok? FMOD1_CHANNELCONTROL vs FMOD_CHANNEL
}
FMOD_RESULT F_API FMOD_System_Set3DSpeakerPosition   (FMOD_SYSTEM *system, FMOD_SPEAKER speaker, float x, float y, FMOD_BOOL active)
{
    LOAD(System_SetSpeakerPosition);
    return fmodfn.System_SetSpeakerPosition((FMOD1_SYSTEM*)system, Speaker(speaker), x, y, active);
}
FMOD_RESULT F_API FMOD_System_Get3DSpeakerPosition   (FMOD_SYSTEM *system, FMOD_SPEAKER speaker, float *x, float *y, FMOD_BOOL *active)
{
    LOAD(System_GetSpeakerPosition);
    return fmodfn.System_GetSpeakerPosition((FMOD1_SYSTEM*)system, Speaker(speaker), x, y, active);
}
FMOD_RESULT F_API FMOD_System_SetStreamBufferSize    (FMOD_SYSTEM *system, unsigned int filebuffersize, FMOD_TIMEUNIT filebuffersizetype)
{
    LOAD(System_SetStreamBufferSize);
    return fmodfn.System_SetStreamBufferSize((FMOD1_SYSTEM*)system, filebuffersize, TimeUnit(filebuffersizetype));
}
FMOD_RESULT F_API FMOD_System_GetStreamBufferSize    (FMOD_SYSTEM *system, unsigned int *filebuffersize, FMOD_TIMEUNIT *filebuffersizetype)
{
    LOAD(System_GetStreamBufferSize);
    FMOD1_TIMEUNIT tu;
    FMOD_RESULT res = fmodfn.System_GetStreamBufferSize((FMOD1_SYSTEM*)system, filebuffersize, &tu);
    *filebuffersizetype = TimeUnitFrom(tu);
    return res;
}


// System Info
FMOD_RESULT F_API FMOD_System_GetVersion             (FMOD_SYSTEM *system, unsigned int *version)
{
    //LOAD(System_GetVersion);
    //return fmodfn.System_GetVersion((FMOD1_SYSTEM*)system, version);
    // faked here
    *version = FMOD_VERSION;
    return FMOD_OK;
}
FMOD_RESULT F_API FMOD_System_GetOutputHandle        (FMOD_SYSTEM *system, void **handle)
{
    LOAD(System_GetOutputHandle);
    return fmodfn.System_GetOutputHandle((FMOD1_SYSTEM*)system, handle);
}
FMOD_RESULT F_API FMOD_System_GetChannelsPlaying     (FMOD_SYSTEM *system, int *channels)
{
    LOAD(System_GetChannelsPlaying);
    return fmodfn.System_GetChannelsPlaying((FMOD1_SYSTEM*)system, channels);
}
FMOD_RESULT F_API FMOD_System_GetHardwareChannels    (FMOD_SYSTEM *system, int *numhardwarechannels)
{
    /*LOAD(System_GetHardwareChannels);
    return fmodfn.System_GetHardwareChannels((FMOD1_SYSTEM*)system, numhardwarechannels);*/
    // force 32 hardware channels...
    *numhardwarechannels = 32;
    return FMOD_OK;
}
FMOD_RESULT F_API FMOD_System_GetCPUUsage            (FMOD_SYSTEM *system, float *dsp, float *stream, float *geometry, float *update, float *total)
{
    LOAD(System_GetCPUUsage);
    return fmodfn.System_GetCPUUsage((FMOD1_SYSTEM*)system, dsp, stream, geometry, update, total);
}
FMOD_RESULT F_API FMOD_System_GetSoundRAM            (FMOD_SYSTEM *system, int *currentalloced, int *maxalloced, int *total)
{
    LOAD(System_GetSoundRAM);
    return fmodfn.System_GetSoundRAM((FMOD1_SYSTEM*)system, currentalloced, maxalloced, total);
}
FMOD_RESULT F_API FMOD_System_GetNumCDROMDrives      (FMOD_SYSTEM *system, int *numdrives)
{
    numdrives = 0;
    FAKE(System_GetNumCDROMDrives);
    //return fmodfn.System_GetNumCDROMDrives((FMOD1_SYSTEM*)system, numdrives);
}
FMOD_RESULT F_API FMOD_System_GetCDROMDriveName      (FMOD_SYSTEM *system, int drive, char *drivename, int drivenamelen, char *scsiname, int scsinamelen, char *devicename, int devicenamelen)
{
    FAKE(System_GetCDROMDriveName);
    //return fmodfn.System_GetCDROMDriveName((FMOD1_SYSTEM*)system, drive, drivename, drivenamelen, scsinamelen, devicename, devicenamelen);
}
FMOD_RESULT F_API FMOD_System_GetSpectrum            (FMOD_SYSTEM *system, float *spectrumarray, int numvalues, int channeloffset, FMOD_DSP_FFT_WINDOW windowtype)
{
    FAKE(System_GetSpectrum);
    //return fmodfn.System_GetSpectrum((FMOD1_SYSTEM*)system, spectrumarray, numvalues, channeloffset, windowtype);
}
FMOD_RESULT F_API FMOD_System_GetWaveData            (FMOD_SYSTEM *system, float *wavearray, int numvalues, int channeloffset)
{
    FAKE(System_GetWaveData);
    //return fmodfn.System_GetWaveData((FMOD1_SYSTEM*)system, wavearray, numvalues, channeloffset);
}

// Sound creation
FMOD_RESULT F_API FMOD_System_CreateSound            (FMOD_SYSTEM *system, const char *name_or_data, FMOD_MODE mode, FMOD_CREATESOUNDEXINFO *exinfo, FMOD_SOUND **sound)
{
    LOAD(System_CreateSound);
    FMOD1_CREATESOUNDEXINFO ex1info;
    if(exinfo) ExInfoTo(exinfo, &ex1info);
    return fmodfn.System_CreateSound((FMOD1_SYSTEM*)system, name_or_data, Mode(mode), exinfo?&ex1info:NULL, (FMOD1_SOUND**)sound);
}
FMOD_RESULT F_API FMOD_System_CreateStream           (FMOD_SYSTEM *system, const char *name_or_data, FMOD_MODE mode, FMOD_CREATESOUNDEXINFO *exinfo, FMOD_SOUND **sound)
{
    LOAD(System_CreateStream);
    FMOD1_CREATESOUNDEXINFO ex1info;
    if(exinfo) ExInfoTo(exinfo, &ex1info);
    return fmodfn.System_CreateStream((FMOD1_SYSTEM*)system, name_or_data, Mode(mode), exinfo?&ex1info:NULL, (FMOD1_SOUND **)sound);
}
FMOD_RESULT F_API FMOD_System_CreateDSP              (FMOD_SYSTEM *system, FMOD_DSP_DESCRIPTION *description, FMOD_DSP **dsp)
{
    LOAD(System_CreateDSP);
    FMOD1_DSP_DESCRIPTION desc1;
    if(description) DspDescriptionTo(description, &desc1);
    return fmodfn.System_CreateDSP((FMOD1_SYSTEM*)system, &desc1, (FMOD1_DSP**)dsp);
}
FMOD_RESULT F_API FMOD_System_CreateDSPByType        (FMOD_SYSTEM *system, FMOD_DSP_TYPE type, FMOD_DSP **dsp)
{
    LOAD(System_CreateDSPByType);
    // TODO: convert "type" parameter
    return fmodfn.System_CreateDSPByType((FMOD1_SYSTEM*)system, type, (FMOD1_DSP**)dsp);
}
FMOD_RESULT F_API FMOD_System_CreateChannelGroup     (FMOD_SYSTEM *system, const char *name, FMOD_CHANNELGROUP **channelgroup)
{
    LOAD(System_CreateChannelGroup);
    return fmodfn.System_CreateChannelGroup((FMOD1_SYSTEM*)system, name, (FMOD1_CHANNELGROUP **)channelgroup);
}
FMOD_RESULT F_API FMOD_System_CreateSoundGroup       (FMOD_SYSTEM *system, const char *name, FMOD_SOUNDGROUP **soundgroup)
{
    LOAD(System_CreateSoundGroup);
    return fmodfn.System_CreateSoundGroup((FMOD1_SYSTEM*)system, name, (FMOD1_SOUNDGROUP**)soundgroup);
}
FMOD_RESULT F_API FMOD_System_CreateReverb           (FMOD_SYSTEM *system, FMOD_REVERB **reverb)
{
    LOAD(System_CreateReverb3D);
    return fmodfn.System_CreateReverb3D((FMOD1_SYSTEM*)system, (FMOD1_REVERB3D**)reverb);
}
FMOD_RESULT F_API FMOD_System_PlaySound              (FMOD_SYSTEM *system, FMOD_CHANNELINDEX channelid, FMOD_SOUND *sound, FMOD_BOOL paused, FMOD_CHANNEL **channel)
{
    LOAD(System_PlaySound);
    // ignoring channelid for now..., no chanelgroup handling...
    return fmodfn.System_PlaySound((FMOD1_SYSTEM*)system, (FMOD1_SOUND *)sound, NULL, paused, (FMOD1_CHANNEL **)channel);
}
FMOD_RESULT F_API FMOD_System_PlayDSP                (FMOD_SYSTEM *system, FMOD_CHANNELINDEX channelid, FMOD_DSP *dsp, FMOD_BOOL paused, FMOD_CHANNEL **channel)
{
    LOAD(System_PlayDSP);
    // ignoring channelid for now..., no chanelgroup handling...
    return fmodfn.System_PlayDSP((FMOD1_SYSTEM*)system, (FMOD1_DSP*)dsp, NULL, paused, (FMOD1_CHANNEL **)channel);
}
FMOD_RESULT F_API FMOD_System_GetChannel             (FMOD_SYSTEM *system, int channelid, FMOD_CHANNEL **channel)
{
    LOAD(System_GetChannel);
    return fmodfn.System_GetChannel((FMOD1_SYSTEM*)system, channelid, (FMOD1_CHANNEL **)channel);
}
FMOD_RESULT F_API FMOD_System_GetMasterChannelGroup  (FMOD_SYSTEM *system, FMOD_CHANNELGROUP **channelgroup)
{
    LOAD(System_GetMasterChannelGroup);
    return fmodfn.System_GetMasterChannelGroup((FMOD1_SYSTEM*)system, (FMOD1_CHANNELGROUP **)channelgroup);
}
FMOD_RESULT F_API FMOD_System_GetMasterSoundGroup    (FMOD_SYSTEM *system, FMOD_SOUNDGROUP **soundgroup)
{
    LOAD(System_GetMasterSoundGroup);
    return fmodfn.System_GetMasterSoundGroup((FMOD1_SYSTEM*)system, (FMOD1_SOUNDGROUP **)soundgroup);
}
