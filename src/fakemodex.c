
#include "fmodwrapper.h"
#include "fakemodex.h"

void ExInfoTo(const FMOD_CREATESOUNDEXINFO * exinfo, FMOD1_CREATESOUNDEXINFO * ex1info)
{
    ex1info->cbsize = sizeof(FMOD1_CREATESOUNDEXINFO);
    ex1info->length = exinfo->length;
    ex1info->fileoffset = exinfo->fileoffset;
    ex1info->numchannels = exinfo->numchannels;
    ex1info->defaultfrequency = exinfo->defaultfrequency;
    ex1info->format = SoundFormat(exinfo->format);
    ex1info->decodebuffersize = exinfo->decodebuffersize;
    ex1info->initialsubsound = exinfo->initialsubsound;
    ex1info->numsubsounds = exinfo->numsubsounds;
    ex1info->inclusionlist = exinfo->inclusionlist;
    ex1info->inclusionlistnum = exinfo->inclusionlistnum;
    ex1info->pcmreadcallback = (FMOD1_SOUND_PCMREAD_CALLBACK)exinfo->pcmreadcallback;
    ex1info->pcmsetposcallback = (FMOD1_SOUND_PCMSETPOS_CALLBACK)exinfo->pcmsetposcallback;
    ex1info->nonblockcallback = (FMOD1_SOUND_NONBLOCK_CALLBACK)exinfo->nonblockcallback;
    ex1info->dlsname = exinfo->dlsname;
    ex1info->encryptionkey = exinfo->encryptionkey;
    ex1info->maxpolyphony = exinfo->maxpolyphony;
    ex1info->userdata = exinfo->userdata;
    ex1info->suggestedsoundtype = SoundType(exinfo->suggestedsoundtype);
    ex1info->fileuseropen = (FMOD1_FILE_OPEN_CALLBACK)exinfo->useropen;
    ex1info->fileuserclose = (FMOD1_FILE_CLOSE_CALLBACK)exinfo->userclose;
    ex1info->fileuserread = (FMOD1_FILE_READ_CALLBACK)exinfo->userread;
    ex1info->fileuserseek = (FMOD1_FILE_SEEK_CALLBACK)exinfo->userseek;
    ex1info->fileuserasyncread = (FMOD1_FILE_ASYNCREAD_CALLBACK)exinfo->userasyncread;
    ex1info->fileuserasynccancel = (FMOD1_FILE_ASYNCCANCEL_CALLBACK)exinfo->userasynccancel;
    ex1info->fileuserdata = NULL;
    ex1info->channelorder = 0;
    ex1info->channelmask = 0;
    ex1info->initialsoundgroup = (FMOD1_SOUNDGROUP *)exinfo->initialsoundgroup;
    ex1info->initialseekposition = exinfo->initialseekposition;
    ex1info->initialseekpostype = TimeUnit(exinfo->initialseekpostype);
    ex1info->ignoresetfilesystem = exinfo->ignoresetfilesystem;
    ex1info->audioqueuepolicy = exinfo->audioqueuepolicy;
    ex1info->minmidigranularity = exinfo->minmidigranularity;
    ex1info->nonblockthreadid = exinfo->nonblockthreadid;
}

void DspDescriptionTo(const FMOD_DSP_DESCRIPTION * description, FMOD1_DSP_DESCRIPTION * desc1) 
{
    desc1->pluginsdkversion = FMOD1_PLUGIN_SDK_VERSION;
    memcpy(desc1->name, description->name, 32);
    desc1->version = description->version;
    desc1->numinputbuffers = 0;// or 1 ???
    desc1->numoutputbuffers = 1;
    desc1->create = (FMOD1_DSP_CREATE_CALLBACK)description->create;
    desc1->release = (FMOD1_DSP_RELEASE_CALLBACK)description->release;
    desc1->reset = (FMOD1_DSP_RESET_CALLBACK)description->reset;
    desc1->read = (FMOD1_DSP_READ_CALLBACK)description->read;
    desc1->process = NULL;
    desc1->setposition = (FMOD1_DSP_SETPOSITION_CALLBACK)description->setposition;
    desc1->numparameters = description->numparameters;
    // parameters callbacks should be worked on
    desc1->setparameterfloat = NULL; /*description->setparameterfloat;*/
    desc1->setparameterint = NULL; /*description->setparameterint;*/
    desc1->setparameterbool = NULL; /*description->setparameterbool;*/
    desc1->setparameterdata = NULL; /*description->setparameterdata;*/
    desc1->getparameterfloat = NULL; /*description->getparameterfloat;*/
    desc1->getparameterint = NULL; /*description->getparameterint;*/
    desc1->getparameterbool = NULL; /*description->getparameterbool;*/
    desc1->getparameterdata = NULL; /*description->getparameterdata;*/
    desc1->shouldiprocess = NULL; // can be null?
    desc1->userdata = description->userdata;
}

void AdvancedSettingsTo(const FMOD_ADVANCEDSETTINGS * settings, FMOD1_ADVANCEDSETTINGS * set1)
{
    set1->cbSize = sizeof(FMOD1_ADVANCEDSETTINGS);
    set1->maxMPEGCodecs = settings->maxMPEGcodecs;
    set1->maxADPCMCodecs = settings->maxADPCMcodecs;
    set1->maxXMACodecs = settings->maxXMAcodecs;
    set1->maxVorbisCodecs = settings->maxVORBIScodecs;
    set1->maxAT9Codecs = settings->maxAT9Codecs;
    set1->maxFADPCMCodecs = 0;
    set1->maxPCMCodecs = settings->maxPCMcodecs;
    set1->ASIONumChannels = settings->ASIONumChannels;
    set1->ASIOChannelList = settings->ASIOChannelList;
    set1->ASIOSpeakerList = (FMOD1_SPEAKER*)settings->ASIOSpeakerList;
    set1->HRTFMinAngle = settings->HRTFMinAngle;
    set1->HRTFMaxAngle = settings->HRTFMaxAngle;
    set1->HRTFFreq = settings->HRTFFreq;
    set1->vol0virtualvol = settings->vol0virtualvol;
    set1->defaultDecodeBufferSize = settings->defaultDecodeBufferSize;
    set1->profilePort = settings->profileport;
    set1->geometryMaxFadeTime = settings->geometryMaxFadeTime;
    set1->distanceFilterCenterFreq = settings->distanceFilterCenterFreq;
    set1->reverb3Dinstance = 0;
    set1->DSPBufferPoolSize = 0;
    set1->stackSizeStream = settings->stackSizeStream;
    set1->stackSizeNonBlocking = settings->stackSizeNonBlocking;
    set1->stackSizeMixer = settings->stackSizeMixer;
    set1->resamplerMethod = 0;
    set1->commandQueueSize = 0;
    set1->randomSeed    = 0;
}
void AdvancedSettingsFrom(FMOD_ADVANCEDSETTINGS * settings, const FMOD1_ADVANCEDSETTINGS * set1)
{
    settings->cbsize = sizeof(FMOD_ADVANCEDSETTINGS);
    settings->maxMPEGcodecs = set1->maxMPEGCodecs;
    settings->maxADPCMcodecs = set1->maxADPCMCodecs;
    settings->maxXMAcodecs = set1->maxXMACodecs;
    settings->maxCELTcodecs = 0;
    settings->maxVORBIScodecs = set1->maxVorbisCodecs;
    settings->maxAT9Codecs = set1->maxAT9Codecs;
    settings->maxPCMcodecs = set1->maxPCMCodecs;
    settings->ASIONumChannels = set1->ASIONumChannels;
    settings->ASIOChannelList = set1->ASIOChannelList;
    settings->ASIOSpeakerList = (FMOD_SPEAKER*)set1->ASIOSpeakerList;
    settings->max3DReverbDSPs = 0;
    settings->HRTFMinAngle = set1->HRTFMinAngle;
    settings->HRTFMaxAngle = set1->HRTFMaxAngle;
    settings->HRTFFreq = set1->HRTFFreq;
    settings->vol0virtualvol = set1->vol0virtualvol;
    settings->eventqueuesize = 0;
    settings->defaultDecodeBufferSize = set1->defaultDecodeBufferSize;
    settings->debugLogFilename = NULL;
    settings->profileport = set1->profilePort;
    settings->geometryMaxFadeTime = set1->geometryMaxFadeTime;
    settings->maxSpectrumWaveDataBuffers = 0;
    settings->musicSystemCacheDelay = 0;
    settings->distanceFilterCenterFreq = set1->distanceFilterCenterFreq;
    settings->stackSizeStream = set1->stackSizeStream;
    settings->stackSizeNonBlocking = set1->stackSizeNonBlocking;
    settings->stackSizeMixer = set1->stackSizeMixer;
}

void RevebPropTo(const FMOD_REVERB_PROPERTIES * props, FMOD1_REVERB_PROPERTIES * props1)
{
    // flags can be ignored?
    props1->DecayTime = props->DecayTime * 1000.f;
    props1->EarlyDelay = props->ReflectionsDelay * 1000.f;
    props1->LateDelay = props->ReverbDelay * 1000.f;
    props1->HFReference = props->HFReference;
    props1->HFDecayRatio = props->DecayHFRatio * 100.f;
    props1->Diffusion = props->Diffusion;
    props1->Density = props->Density;
    props1->LowShelfFrequency = props->LFReference;
    props1->LowShelfGain = props->RoomLF;
    props1->HighCut = 20000.0; // should use props->RoomHF somehow
    props1->EarlyLateMix = (props->Reflections+10000.f)/100.f;
    props1->WetLevel = props->Room/100.f + 20.f;
}
void RevebPropFrom(FMOD_REVERB_PROPERTIES * props, const FMOD1_REVERB_PROPERTIES * props1)
{
    props->Instance = 0;
    props->Environment = -1;
    props->EnvDiffusion = 1.0;
    props->Room = (props1->WetLevel-20.0f)*100.f;
    props->RoomHF = -100;
    props->RoomLF = props1->LowShelfGain;
    props->DecayTime = props1->DecayTime/1000.f;
    props->DecayHFRatio = props1->HFDecayRatio/100.f;
    props->DecayLFRatio = 1.0f;
    props->Reflections = props1->EarlyLateMix*100.f - 10000.f;//-2602;
    props->ReflectionsDelay = props1->EarlyDelay/1000.f;
    props->Reverb = 200;
    props->ReverbDelay = props1->LateDelay/1000.f;
    props->ModulationTime = 0.25f;
    props->ModulationDepth = 0.0f;
    props->HFReference = props1->HFReference;
    props->LFReference = props1->LowShelfFrequency;
    props->Diffusion = props1->Diffusion;
    props->Density = props1->Density;
    props->Flags = 0;
}


FMOD1_INITFLAGS InitFlags(FMOD_INITFLAGS flags) 
{
// from
// FMOD_INIT_NORMAL                     0x00000000 /* All platforms - Initialize normally */
// FMOD_INIT_STREAM_FROM_UPDATE         0x00000001 /* All platforms - No stream thread is created internally.  Streams are driven from System::update.  Mainly used with non-realtime outputs. */
// FMOD_INIT_3D_RIGHTHANDED             0x00000002 /* All platforms - FMOD will treat +X as right, +Y as up and +Z as backwards (towards you). */
// FMOD_INIT_SOFTWARE_DISABLE           0x00000004 /* All platforms - Disable software mixer to save memory.  Anything created with FMOD_SOFTWARE will fail and DSP will not work. */
// FMOD_INIT_OCCLUSION_LOWPASS          0x00000008 /* All platforms - All FMOD_SOFTWARE (and FMOD_HARDWARE on 3DS and NGP) with FMOD_3D based voices will add a software lowpass filter effect into the DSP chain which is automatically used when Channel::set3DOcclusion is used or the geometry API. */
// FMOD_INIT_HRTF_LOWPASS               0x00000010 /* All platforms - All FMOD_SOFTWARE (and FMOD_HARDWARE on 3DS and NGP) with FMOD_3D based voices will add a software lowpass filter effect into the DSP chain which causes sounds to sound duller when the sound goes behind the listener.  Use System::setAdvancedSettings to adjust cutoff frequency. */
// FMOD_INIT_DISTANCE_FILTERING         0x00000200 /* All platforms - All FMOD_SOFTWARE with FMOD_3D based voices will add a software lowpass and highpass filter effect into the DSP chain which will act as a distance-automated bandpass filter. Use System::setAdvancedSettings to adjust the center frequency. */
// FMOD_INIT_REVERB_PREALLOCBUFFERS     0x00000040 /* All platforms - FMOD Software reverb will preallocate enough buffers for reverb per channel, rather than allocating them and freeing them at runtime. */
// FMOD_INIT_ENABLE_PROFILE             0x00000020 /* All platforms - Enable TCP/IP based host which allows FMOD Designer or FMOD Profiler to connect to it, and view memory, CPU and the DSP network graph in real-time. */
// FMOD_INIT_VOL0_BECOMES_VIRTUAL       0x00000080 /* All platforms - Any sounds that are 0 volume will go virtual and not be processed except for having their positions updated virtually.  Use System::setAdvancedSettings to adjust what volume besides zero to switch to virtual at. */
// FMOD_INIT_WASAPI_EXCLUSIVE           0x00000100 /* Win32 Vista only - for WASAPI output - Enable exclusive access to hardware, lower latency at the expense of excluding other applications from accessing the audio hardware. */
// FMOD_INIT_PS3_PREFERDTS              0x00800000 /* PS3 only - Prefer DTS over Dolby Digital if both are supported. Note: 8 and 6 channel LPCM is always preferred over both DTS and Dolby Digital. */
// FMOD_INIT_PS3_FORCE2CHLPCM           0x01000000 /* PS3 only - Force PS3 system output mode to 2 channel LPCM. */
// FMOD_INIT_DISABLEDOLBY               0x00100000 /* Wii / 3DS - Disable Dolby Pro Logic surround. Speakermode will be set to STEREO even if user has selected surround in the system settings. */
// FMOD_INIT_SYSTEM_MUSICMUTENOTPAUSE   0x00200000 /* Xbox 360 / PS3 - The "music" channelgroup which by default pauses when custom 360 dashboard / PS3 BGM music is played, can be changed to mute (therefore continues playing) instead of pausing, by using this flag. */
// FMOD_INIT_SYNCMIXERWITHUPDATE        0x00400000 /* Win32/Wii/PS3/Xbox/Xbox 360 - FMOD Mixer thread is woken up to do a mix when System::update is called rather than waking periodically on its own timer. */
// FMOD_INIT_GEOMETRY_USECLOSEST        0x04000000 /* All platforms - With the geometry engine, only process the closest polygon rather than accumulating all polygons the sound to listener line intersects. */
// FMOD_INIT_DISABLE_MYEARS_AUTODETECT  0x08000000 /* Win32 - Disables automatic setting of FMOD_SPEAKERMODE_STEREO to FMOD_SPEAKERMODE_MYEARS if the MyEars profile exists on the PC.  MyEars is HRTF 7.1 downmixing through headphones. */
// FMOD_INIT_PS3_DISABLEDTS             0x10000000 /* PS3 only - Disable DTS output mode selection */
// FMOD_INIT_PS3_DISABLEDOLBYDIGITAL    0x20000000 /* PS3 only - Disable Dolby Digital output mode selection */
// FMOD_INIT_7POINT1_DOLBYMAPPING       0x40000000 /* PS3/PS4 only - FMOD uses the WAVEFORMATEX Microsoft 7.1 speaker mapping where the last 2 pairs of speakers are 'rears' then 'sides', but on PS3/PS4 these are mapped to 'surrounds' and 'backs'.  Use this flag to swap fmod's last 2 pair of speakers on PS3/PS4 to avoid needing to do a special case for these platforms. */
// FMOD_INIT_ASYNCREAD_FAST             0x80000000 /* All platforms - Rather than setting FMOD_ASYNCREADINFO::result, call FMOD_ASYNCREADINFO::done to enable a semaphore based wait inside fmod, rather than the older method which can incur up to 10ms delay per read. */
// to
// FMOD1_INIT_NORMAL                     0x00000000 /* Initialize normally */
// FMOD1_INIT_STREAM_FROM_UPDATE         0x00000001 /* No stream thread is created internally.  Streams are driven from System::update.  Mainly used with non-realtime outputs. */
// FMOD1_INIT_MIX_FROM_UPDATE            0x00000002 /* Win/PS3/Xbox 360 Only - FMOD Mixer thread is woken up to do a mix when System::update is called rather than waking periodically on its own timer. */
// FMOD1_INIT_3D_RIGHTHANDED             0x00000004 /* FMOD will treat +X as right, +Y as up and +Z as backwards (towards you). */
// FMOD1_INIT_CHANNEL_LOWPASS            0x00000100 /* All FMOD1_3D based voices will add a software lowpass filter effect into the DSP chain which is automatically used when Channel::set3DOcclusion is used or the geometry API.   This also causes sounds to sound duller when the sound goes behind the listener, as a fake HRTF style effect.  Use System::setAdvancedSettings to disable or adjust cutoff frequency for this feature. */
// FMOD1_INIT_CHANNEL_DISTANCEFILTER     0x00000200 /* All FMOD1_3D based voices will add a software lowpass and highpass filter effect into the DSP chain which will act as a distance-automated bandpass filter. Use System::setAdvancedSettings to adjust the center frequency. */
// FMOD1_INIT_PROFILE_ENABLE             0x00010000 /* Enable TCP/IP based host which allows FMOD Designer or FMOD Profiler to connect to it, and view memory, CPU and the DSP network graph in real-time. */
// FMOD1_INIT_VOL0_BECOMES_VIRTUAL       0x00020000 /* Any sounds that are 0 volume will go virtual and not be processed except for having their positions updated virtually.  Use System::setAdvancedSettings to adjust what volume besides zero to switch to virtual at. */
// FMOD1_INIT_GEOMETRY_USECLOSEST        0x00040000 /* With the geometry engine, only process the closest polygon rather than accumulating all polygons the sound to listener line intersects. */
// FMOD1_INIT_PREFER_DOLBY_DOWNMIX       0x00080000 /* When using FMOD1_SPEAKERMODE_5POINT1 with a stereo output device, use the Dolby Pro Logic II downmix algorithm instead of the SRS Circle Surround algorithm. */
// FMOD1_INIT_THREAD_UNSAFE              0x00100000 /* Disables thread safety for API calls. Only use this if FMOD low level is being called from a single thread, and if Studio API is not being used! */
// FMOD1_INIT_PROFILE_METER_ALL          0x00200000 /* Slower, but adds level metering for every single DSP unit in the graph.  Use DSP::setMeteringEnabled to turn meters off individually. */
    if(flags&FMOD_INIT_SOFTWARE_DISABLE) flags&=~FMOD_INIT_SOFTWARE_DISABLE;   // doesn't exist
    if(flags&FMOD_INIT_3D_RIGHTHANDED) { flags&=~FMOD_INIT_3D_RIGHTHANDED; flags|=FMOD1_INIT_3D_RIGHTHANDED;}
    if(flags&FMOD_INIT_WASAPI_EXCLUSIVE) flags&=~FMOD_INIT_WASAPI_EXCLUSIVE;    // doesn't exist
    if(flags&(FMOD_INIT_OCCLUSION_LOWPASS|FMOD_INIT_HRTF_LOWPASS)) {flags&=~(FMOD_INIT_OCCLUSION_LOWPASS|FMOD_INIT_HRTF_LOWPASS); flags|=FMOD1_INIT_CHANNEL_LOWPASS;}
    if(flags&FMOD_INIT_OCCLUSION_LOWPASS) flags&=~FMOD_INIT_OCCLUSION_LOWPASS;   // doesn't exist alone
    if(flags&FMOD_INIT_HRTF_LOWPASS) flags&=~FMOD_INIT_HRTF_LOWPASS;   // doesn't exist alone
    if(flags&FMOD_INIT_ENABLE_PROFILE) { flags&=~FMOD_INIT_ENABLE_PROFILE; flags|=FMOD1_INIT_PROFILE_ENABLE;}
    if(flags&FMOD_INIT_VOL0_BECOMES_VIRTUAL) { flags&=~FMOD_INIT_VOL0_BECOMES_VIRTUAL; flags|=FMOD1_INIT_VOL0_BECOMES_VIRTUAL;}
    if(flags&FMOD_INIT_GEOMETRY_USECLOSEST) { flags&=~FMOD_INIT_GEOMETRY_USECLOSEST; flags|=FMOD1_INIT_GEOMETRY_USECLOSEST;}
    if(flags&FMOD_INIT_DISABLEDOLBY) flags&=~FMOD_INIT_DISABLEDOLBY;   // doesn't exist
    if(flags&FMOD_INIT_SYSTEM_MUSICMUTENOTPAUSE) flags&=~FMOD_INIT_SYSTEM_MUSICMUTENOTPAUSE;   // doesn't exist

    return flags;
}


FMOD1_SOUND_FORMAT SoundFormat(FMOD_SOUND_FORMAT format)
{
// From
    // FMOD_SOUND_FORMAT_NONE,             /* Unitialized / unknown. */
    // FMOD_SOUND_FORMAT_PCM8,             /* 8bit integer PCM data. */
    // FMOD_SOUND_FORMAT_PCM16,            /* 16bit integer PCM data. */
    // FMOD_SOUND_FORMAT_PCM24,            /* 24bit integer PCM data. */
    // FMOD_SOUND_FORMAT_PCM32,            /* 32bit integer PCM data. */
    // FMOD_SOUND_FORMAT_PCMFLOAT,         /* 32bit floating point PCM data. */
    // FMOD_SOUND_FORMAT_GCADPCM,          /* Compressed Nintendo 3DS/Wii DSP data. */
    // FMOD_SOUND_FORMAT_IMAADPCM,         /* Compressed IMA ADPCM data. */
    // FMOD_SOUND_FORMAT_VAG,              /* Compressed PlayStation Portable ADPCM data. */
    // FMOD_SOUND_FORMAT_HEVAG,            /* Compressed PSVita ADPCM data. */
    // FMOD_SOUND_FORMAT_XMA,              /* Compressed Xbox360 XMA data. */
    // FMOD_SOUND_FORMAT_MPEG,             /* Compressed MPEG layer 2 or 3 data. */
    // FMOD_SOUND_FORMAT_CELT,             /* Compressed CELT data. */
    // FMOD_SOUND_FORMAT_AT9,              /* Compressed PSVita ATRAC9 data. */
    // FMOD_SOUND_FORMAT_XWMA,             /* Compressed Xbox360 xWMA data. */
    // FMOD_SOUND_FORMAT_VORBIS,           /* Compressed Vorbis data. */
    // FMOD_SOUND_FORMAT_MAX,              /* Maximum number of sound formats supported. */   
    // FMOD_SOUND_FORMAT_FORCEINT = 65536  /* Makes sure this enum is signed 32bit. */
// To
    // FMOD1_SOUND_FORMAT_NONE,             /* Unitialized / unknown. */
    // FMOD1_SOUND_FORMAT_PCM8,             /* 8bit integer PCM data. */
    // FMOD1_SOUND_FORMAT_PCM16,            /* 16bit integer PCM data. */
    // FMOD1_SOUND_FORMAT_PCM24,            /* 24bit integer PCM data. */
    // FMOD1_SOUND_FORMAT_PCM32,            /* 32bit integer PCM data. */
    // FMOD1_SOUND_FORMAT_PCMFLOAT,         /* 32bit floating point PCM data. */
    // FMOD1_SOUND_FORMAT_GCADPCM,          /* Compressed Nintendo 3DS/Wii DSP data. */
    // FMOD1_SOUND_FORMAT_IMAADPCM,         /* Compressed IMA ADPCM data. */
    // FMOD1_SOUND_FORMAT_VAG,              /* Compressed PlayStation Portable ADPCM data. */
    // FMOD1_SOUND_FORMAT_HEVAG,            /* Compressed PSVita ADPCM data. */
    // FMOD1_SOUND_FORMAT_XMA,              /* Compressed Xbox360 XMA data. */
    // FMOD1_SOUND_FORMAT_MPEG,             /* Compressed MPEG layer 2 or 3 data. */
    // FMOD1_SOUND_FORMAT_CELT,             /* Not supported. */
    // FMOD1_SOUND_FORMAT_AT9,              /* Compressed PSVita ATRAC9 data. */
    // FMOD1_SOUND_FORMAT_XWMA,             /* Compressed Xbox360 xWMA data. */
    // FMOD1_SOUND_FORMAT_VORBIS,           /* Compressed Vorbis data. */
    // FMOD1_SOUND_FORMAT_FADPCM,           /* Compressed FADPCM data. */
    // FMOD1_SOUND_FORMAT_MAX,              /* Maximum number of sound formats supported. */   
    // FMOD1_SOUND_FORMAT_FORCEINT = 65536  /* Makes sure this enum is signed 32bit. */
    return format;  // nothing to change \o/
}
FMOD_SOUND_FORMAT SoundFormatFrom(FMOD1_SOUND_FORMAT format)
{
    return format; // ok for FMOD1_SOUND_FORMAT_FADPCM?
}


FMOD1_SOUND_TYPE SoundType(FMOD_SOUND_TYPE type)
{
// From
    //FMOD_SOUND_TYPE_UNKNOWN,         /* 3rd party / unknown plugin format. */
    //FMOD_SOUND_TYPE_AIFF,            /* AIFF. */
    //FMOD_SOUND_TYPE_ASF,             /* Microsoft Advanced Systems Format (ie WMA/ASF/WMV). */
    //FMOD_SOUND_TYPE_AT3,             /* Sony ATRAC 3 format */
    //FMOD_SOUND_TYPE_CDDA,            /* Digital CD audio. */
    //FMOD_SOUND_TYPE_DLS,             /* Sound font / downloadable sound bank. */
    //FMOD_SOUND_TYPE_FLAC,            /* FLAC lossless codec. */
    //FMOD_SOUND_TYPE_FSB,             /* FMOD Sample Bank. */
    //FMOD_SOUND_TYPE_GCADPCM,         /* Nintendo GameCube/Wii ADPCM */
    //FMOD_SOUND_TYPE_IT,              /* Impulse Tracker. */
    //FMOD_SOUND_TYPE_MIDI,            /* MIDI. extracodecdata is a pointer to an FMOD_MIDI_EXTRACODECDATA structure. */
    //FMOD_SOUND_TYPE_MOD,             /* Protracker / Fasttracker MOD. */
    //FMOD_SOUND_TYPE_MPEG,            /* MP2/MP3 MPEG. */
    //FMOD_SOUND_TYPE_OGGVORBIS,       /* Ogg vorbis. */
    //FMOD_SOUND_TYPE_PLAYLIST,        /* Information only from ASX/PLS/M3U/WAX playlists */
    //FMOD_SOUND_TYPE_RAW,             /* Raw PCM data. */
    //FMOD_SOUND_TYPE_S3M,             /* ScreamTracker 3. */
    //FMOD_SOUND_TYPE_SF2,             /* Sound font 2 format. */
    //FMOD_SOUND_TYPE_USER,            /* User created sound. */
    //FMOD_SOUND_TYPE_WAV,             /* Microsoft WAV. */
    //FMOD_SOUND_TYPE_XM,              /* FastTracker 2 XM. */
    //FMOD_SOUND_TYPE_XMA,             /* Xbox360 XMA */
    //FMOD_SOUND_TYPE_VAG,             /* PlayStation Portable ADPCM VAG format. */
    //FMOD_SOUND_TYPE_AUDIOQUEUE,      /* iPhone hardware decoder, supports AAC, ALAC and MP3. extracodecdata is a pointer to an FMOD_AUDIOQUEUE_EXTRACODECDATA structure. */
    //FMOD_SOUND_TYPE_XWMA,            /* Xbox360 XWMA */
    //FMOD_SOUND_TYPE_BCWAV,           /* 3DS BCWAV container format for DSP ADPCM and PCM */
    //FMOD_SOUND_TYPE_AT9,             /* NGP ATRAC 9 format */
    //FMOD_SOUND_TYPE_VORBIS,          /* Raw vorbis */
    //FMOD_SOUND_TYPE_MEDIA_FOUNDATION,/* Microsoft Media Foundation wrappers, supports ASF/WMA */
    //FMOD_SOUND_TYPE_MAX,             /* Maximum number of sound types supported. */
    //FMOD_SOUND_TYPE_FORCEINT = 65536 /* Makes sure this enum is signed 32bit. */
// To
    //FMOD1_SOUND_TYPE_UNKNOWN,         /* 3rd party / unknown plugin format. */
    //FMOD1_SOUND_TYPE_AIFF,            /* AIFF. */
    //FMOD1_SOUND_TYPE_ASF,             /* Microsoft Advanced Systems Format (ie WMA/ASF/WMV). */
    //FMOD1_SOUND_TYPE_AT3,             /* Sony ATRAC 3 format */
    //FMOD1_SOUND_TYPE_DLS,             /* Sound font / downloadable sound bank. */
    //FMOD1_SOUND_TYPE_FLAC,            /* FLAC lossless codec. */
    //FMOD1_SOUND_TYPE_FSB,             /* FMOD Sample Bank. */
    //FMOD1_SOUND_TYPE_GCADPCM,         /* Nintendo GameCube/Wii ADPCM */
    //FMOD1_SOUND_TYPE_IT,              /* Impulse Tracker. */
    //FMOD1_SOUND_TYPE_MIDI,            /* MIDI. extracodecdata is a pointer to an FMOD1_MIDI_EXTRACODECDATA structure. */
    //FMOD1_SOUND_TYPE_MOD,             /* Protracker / Fasttracker MOD. */
    //FMOD1_SOUND_TYPE_MPEG,            /* MP2/MP3 MPEG. */
    //FMOD1_SOUND_TYPE_OGGVORBIS,       /* Ogg vorbis. */
    //FMOD1_SOUND_TYPE_PLAYLIST,        /* Information only from ASX/PLS/M3U/WAX playlists */
    //FMOD1_SOUND_TYPE_RAW,             /* Raw PCM data. */
    //FMOD1_SOUND_TYPE_S3M,             /* ScreamTracker 3. */
    //FMOD1_SOUND_TYPE_USER,            /* User created sound. */
    //FMOD1_SOUND_TYPE_WAV,             /* Microsoft WAV. */
    //FMOD1_SOUND_TYPE_XM,              /* FastTracker 2 XM. */
    //FMOD1_SOUND_TYPE_XMA,             /* Xbox360 XMA */
    //FMOD1_SOUND_TYPE_VAG,             /* PlayStation Portable ADPCM VAG format. */
    //FMOD1_SOUND_TYPE_AUDIOQUEUE,      /* iPhone hardware decoder, supports AAC, ALAC and MP3. extracodecdata is a pointer to an FMOD1_AUDIOQUEUE_EXTRACODECDATA structure. */
    //FMOD1_SOUND_TYPE_XWMA,            /* Xbox360 XWMA */
    //FMOD1_SOUND_TYPE_BCWAV,           /* 3DS BCWAV container format for DSP ADPCM and PCM */
    //FMOD1_SOUND_TYPE_AT9,             /* PS4 / PSVita ATRAC 9 format */
    //FMOD1_SOUND_TYPE_VORBIS,          /* Vorbis */
    //FMOD1_SOUND_TYPE_MEDIA_FOUNDATION,/* Windows Store Application built in system codecs */
    //FMOD1_SOUND_TYPE_MEDIACODEC,      /* Android MediaCodec */
    //FMOD1_SOUND_TYPE_FADPCM,          /* FMOD Adaptive Differential Pulse Code Modulation */
    //FMOD1_SOUND_TYPE_MAX,             /* Maximum number of sound types supported. */
    //FMOD1_SOUND_TYPE_FORCEINT = 65536 /* Makes sure this enum is signed 32bit. */
    switch(type) {
        case FMOD_SOUND_TYPE_AIFF: return FMOD1_SOUND_TYPE_AIFF;
        case FMOD_SOUND_TYPE_ASF: return FMOD1_SOUND_TYPE_ASF;
        case FMOD_SOUND_TYPE_AT3: return FMOD1_SOUND_TYPE_AT3;
        case FMOD_SOUND_TYPE_CDDA: return FMOD1_SOUND_TYPE_UNKNOWN;
        case FMOD_SOUND_TYPE_DLS: return FMOD1_SOUND_TYPE_DLS;
        case FMOD_SOUND_TYPE_FLAC: return FMOD1_SOUND_TYPE_FLAC;
        case FMOD_SOUND_TYPE_FSB: return FMOD1_SOUND_TYPE_FSB;
        case FMOD_SOUND_TYPE_GCADPCM: return FMOD1_SOUND_TYPE_GCADPCM;
        case FMOD_SOUND_TYPE_IT: return FMOD1_SOUND_TYPE_IT;
        case FMOD_SOUND_TYPE_MIDI: return FMOD1_SOUND_TYPE_MIDI;
        case FMOD_SOUND_TYPE_MOD: return FMOD1_SOUND_TYPE_MOD;
        case FMOD_SOUND_TYPE_MPEG: return FMOD1_SOUND_TYPE_MPEG;
        case FMOD_SOUND_TYPE_OGGVORBIS: return FMOD1_SOUND_TYPE_OGGVORBIS;
        case FMOD_SOUND_TYPE_PLAYLIST: return FMOD1_SOUND_TYPE_PLAYLIST;
        case FMOD_SOUND_TYPE_RAW: return FMOD1_SOUND_TYPE_RAW;
        case FMOD_SOUND_TYPE_S3M: return FMOD1_SOUND_TYPE_S3M;
        case FMOD_SOUND_TYPE_SF2: return FMOD1_SOUND_TYPE_UNKNOWN;
        case FMOD_SOUND_TYPE_USER: return FMOD1_SOUND_TYPE_USER;
        case FMOD_SOUND_TYPE_WAV: return FMOD1_SOUND_TYPE_WAV;
        case FMOD_SOUND_TYPE_XM: return FMOD1_SOUND_TYPE_XM;
        case FMOD_SOUND_TYPE_XMA: return FMOD1_SOUND_TYPE_XMA;
        case FMOD_SOUND_TYPE_VAG: return FMOD1_SOUND_TYPE_VAG;
        case FMOD_SOUND_TYPE_AUDIOQUEUE: return FMOD1_SOUND_TYPE_AUDIOQUEUE;
        case FMOD_SOUND_TYPE_XWMA: return FMOD1_SOUND_TYPE_XWMA;
        case FMOD_SOUND_TYPE_BCWAV: return FMOD1_SOUND_TYPE_BCWAV;
        case FMOD_SOUND_TYPE_AT9: return FMOD1_SOUND_TYPE_AT9;
        case FMOD_SOUND_TYPE_VORBIS: return FMOD1_SOUND_TYPE_VORBIS;
        case FMOD_SOUND_TYPE_MEDIA_FOUNDATION: return FMOD1_SOUND_TYPE_MEDIA_FOUNDATION;
        case FMOD_SOUND_TYPE_MAX: return FMOD1_SOUND_TYPE_MAX;
        default:
            return FMOD1_SOUND_TYPE_UNKNOWN;
    }
}
FMOD_SOUND_TYPE SoundTypeFrom(FMOD1_SOUND_TYPE type)
{
    switch(type) {
        case FMOD1_SOUND_TYPE_AIFF: return FMOD_SOUND_TYPE_AIFF;
        case FMOD1_SOUND_TYPE_ASF: return FMOD_SOUND_TYPE_ASF;
        case FMOD1_SOUND_TYPE_AT3: return FMOD_SOUND_TYPE_AT3;
        case FMOD1_SOUND_TYPE_DLS: return FMOD_SOUND_TYPE_DLS;
        case FMOD1_SOUND_TYPE_FLAC: return FMOD_SOUND_TYPE_FLAC;
        case FMOD1_SOUND_TYPE_FSB: return FMOD_SOUND_TYPE_FSB;
        case FMOD1_SOUND_TYPE_GCADPCM: return FMOD_SOUND_TYPE_GCADPCM;
        case FMOD1_SOUND_TYPE_IT: return FMOD_SOUND_TYPE_IT;
        case FMOD1_SOUND_TYPE_MIDI: return FMOD_SOUND_TYPE_MIDI;
        case FMOD1_SOUND_TYPE_MOD: return FMOD_SOUND_TYPE_MOD;
        case FMOD1_SOUND_TYPE_MPEG: return FMOD_SOUND_TYPE_MPEG;
        case FMOD1_SOUND_TYPE_OGGVORBIS: return FMOD_SOUND_TYPE_OGGVORBIS;
        case FMOD1_SOUND_TYPE_PLAYLIST: return FMOD_SOUND_TYPE_PLAYLIST;
        case FMOD1_SOUND_TYPE_RAW: return FMOD_SOUND_TYPE_RAW;
        case FMOD1_SOUND_TYPE_S3M: return FMOD_SOUND_TYPE_S3M;
        case FMOD1_SOUND_TYPE_USER: return FMOD_SOUND_TYPE_USER;
        case FMOD1_SOUND_TYPE_WAV: return FMOD_SOUND_TYPE_WAV;
        case FMOD1_SOUND_TYPE_XM: return FMOD_SOUND_TYPE_XM;
        case FMOD1_SOUND_TYPE_XMA: return FMOD_SOUND_TYPE_XMA;
        case FMOD1_SOUND_TYPE_VAG: return FMOD_SOUND_TYPE_VAG;
        case FMOD1_SOUND_TYPE_AUDIOQUEUE: return FMOD_SOUND_TYPE_AUDIOQUEUE;
        case FMOD1_SOUND_TYPE_XWMA: return FMOD_SOUND_TYPE_XWMA;
        case FMOD1_SOUND_TYPE_BCWAV: return FMOD_SOUND_TYPE_BCWAV;
        case FMOD1_SOUND_TYPE_AT9: return FMOD_SOUND_TYPE_AT9;
        case FMOD1_SOUND_TYPE_VORBIS: return FMOD_SOUND_TYPE_VORBIS;
        case FMOD1_SOUND_TYPE_MEDIA_FOUNDATION: return FMOD_SOUND_TYPE_MEDIA_FOUNDATION;
        case FMOD1_SOUND_TYPE_FADPCM: return FMOD1_SOUND_TYPE_UNKNOWN;
        case FMOD1_SOUND_TYPE_MAX: return FMOD_SOUND_TYPE_MAX;
        default:
            return FMOD1_SOUND_TYPE_UNKNOWN;
    }
}

FMOD1_TIMEUNIT TimeUnit(FMOD_TIMEUNIT timeunit) {
// From
    // FMOD_TIMEUNIT_MS                0x00000001  /* Milliseconds. */
    // FMOD_TIMEUNIT_PCM               0x00000002  /* PCM samples, related to milliseconds * samplerate / 1000. */
    // FMOD_TIMEUNIT_PCMBYTES          0x00000004  /* Bytes, related to PCM samples * channels * datawidth (ie 16bit = 2 bytes). */
    // FMOD_TIMEUNIT_RAWBYTES          0x00000008  /* Raw file bytes of (compressed) sound data (does not include headers).  Only used by Sound::getLength and Channel::getPosition. */
    // FMOD_TIMEUNIT_PCMFRACTION       0x00000010  /* Fractions of 1 PCM sample.  Unsigned int range 0 to 0xFFFFFFFF.  Used for sub-sample granularity for DSP purposes. */
    // FMOD_TIMEUNIT_MODORDER          0x00000100  /* MOD/S3M/XM/IT.  Order in a sequenced module format.  Use Sound::getFormat to determine the PCM format being decoded to. */
    // FMOD_TIMEUNIT_MODROW            0x00000200  /* MOD/S3M/XM/IT.  Current row in a sequenced module format.  Sound::getLength will return the number of rows in the currently playing or seeked to pattern. */
    // FMOD_TIMEUNIT_MODPATTERN        0x00000400  /* MOD/S3M/XM/IT.  Current pattern in a sequenced module format.  Sound::getLength will return the number of patterns in the song and Channel::getPosition will return the currently playing pattern. */
    // FMOD_TIMEUNIT_SENTENCE_MS       0x00010000  /* Currently playing subsound in a sentence time in milliseconds. */
    // FMOD_TIMEUNIT_SENTENCE_PCM      0x00020000  /* Currently playing subsound in a sentence time in PCM Samples, related to milliseconds * samplerate / 1000. */
    // FMOD_TIMEUNIT_SENTENCE_PCMBYTES 0x00040000  /* Currently playing subsound in a sentence time in bytes, related to PCM samples * channels * datawidth (ie 16bit = 2 bytes). */
    // FMOD_TIMEUNIT_SENTENCE          0x00080000  /* Currently playing sentence index according to the channel. */
    // FMOD_TIMEUNIT_SENTENCE_SUBSOUND 0x00100000  /* Currently playing subsound index in a sentence. */
    // FMOD_TIMEUNIT_BUFFERED          0x10000000  /* Time value as seen by buffered stream.  This is always ahead of audible time, and is only used for processing. */
// To
    // FMOD1_TIMEUNIT_MS                0x00000001  /* Milliseconds. */
    // FMOD1_TIMEUNIT_PCM               0x00000002  /* PCM samples, related to milliseconds * samplerate / 1000. */
    // FMOD1_TIMEUNIT_PCMBYTES          0x00000004  /* Bytes, related to PCM samples * channels * datawidth (ie 16bit = 2 bytes). */
    // FMOD1_TIMEUNIT_RAWBYTES          0x00000008  /* Raw file bytes of (compressed) sound data (does not include headers).  Only used by Sound::getLength and Channel::getPosition. */
    // FMOD1_TIMEUNIT_PCMFRACTION       0x00000010  /* Fractions of 1 PCM sample.  Unsigned int range 0 to 0xFFFFFFFF.  Used for sub-sample granularity for DSP purposes. */
    // FMOD1_TIMEUNIT_MODORDER          0x00000100  /* MOD/S3M/XM/IT.  Order in a sequenced module format.  Use Sound::getFormat to determine the PCM format being decoded to. */
    // FMOD1_TIMEUNIT_MODROW            0x00000200  /* MOD/S3M/XM/IT.  Current row in a sequenced module format.  Sound::getLength will return the number of rows in the currently playing or seeked to pattern. */
    // FMOD1_TIMEUNIT_MODPATTERN        0x00000400  /* MOD/S3M/XM/IT.  Current pattern in a sequenced module format.  Sound::getLength will return the number of patterns in the song and Channel::getPosition will return the currently playing pattern. */
    // FMOD1_TIMEUNIT_BUFFERED          0x10000000  /* Time value as seen by buffered stream.  This is always ahead of audible time, and is only used for processing. */
    
    // some stuff are not handled....
    return timeunit;
}
FMOD_TIMEUNIT TimeUnitFrom(FMOD1_TIMEUNIT timeunit) {
    // reverse, no issue here...
    return timeunit;
}


FMOD1_MODE Mode(FMOD_MODE mode)
{
// From
    // FMOD_DEFAULT                   0x00000000  /* Default for all modes listed below. FMOD_LOOP_OFF, FMOD_2D, FMOD_HARDWARE */
    // FMOD_LOOP_OFF                  0x00000001  /* For non looping sounds. (DEFAULT).  Overrides FMOD_LOOP_NORMAL / FMOD_LOOP_BIDI. */
    // FMOD_LOOP_NORMAL               0x00000002  /* For forward looping sounds. */
    // FMOD_LOOP_BIDI                 0x00000004  /* For bidirectional looping sounds. (only works on software mixed static sounds). */
    // FMOD_2D                        0x00000008  /* Ignores any 3d processing. (DEFAULT). */
    // FMOD_3D                        0x00000010  /* Makes the sound positionable in 3D.  Overrides FMOD_2D. */
    // FMOD_HARDWARE                  0x00000020  /* Attempts to make sounds use hardware acceleration. (DEFAULT).  Note on platforms that don't support FMOD_HARDWARE (only 3DS, PS Vita, PSP, Wii and Wii U support FMOD_HARDWARE), this will be internally treated as FMOD_SOFTWARE. */
    // FMOD_SOFTWARE                  0x00000040  /* Makes the sound be mixed by the FMOD CPU based software mixer.  Overrides FMOD_HARDWARE.  Use this for FFT, DSP, compressed sample support, 2D multi-speaker support and other software related features. */
    // FMOD_CREATESTREAM              0x00000080  /* Decompress at runtime, streaming from the source provided (ie from disk).  Overrides FMOD_CREATESAMPLE and FMOD_CREATECOMPRESSEDSAMPLE.  Note a stream can only be played once at a time due to a stream only having 1 stream buffer and file handle.  Open multiple streams to have them play concurrently. */
    // FMOD_CREATESAMPLE              0x00000100  /* Decompress at loadtime, decompressing or decoding whole file into memory as the target sample format (ie PCM).  Fastest for FMOD_SOFTWARE based playback and most flexible.  */
    // FMOD_CREATECOMPRESSEDSAMPLE    0x00000200  /* Load MP2/MP3/IMAADPCM/CELT/Vorbis/AT9 or XMA into memory and leave it compressed.  CELT/Vorbis/AT9 encoding only supported in the FSB file format.  During playback the FMOD software mixer will decode it in realtime as a 'compressed sample'.  Can only be used in combination with FMOD_SOFTWARE.  Overrides FMOD_CREATESAMPLE.  If the sound data is not one of the supported formats, it will behave as if it was created with FMOD_CREATESAMPLE and decode the sound into PCM. */
    // FMOD_OPENUSER                  0x00000400  /* Opens a user created static sample or stream. Use FMOD_CREATESOUNDEXINFO to specify format and/or read callbacks.  If a user created 'sample' is created with no read callback, the sample will be empty.  Use Sound::lock and Sound::unlock to place sound data into the sound if this is the case. */
    // FMOD_OPENMEMORY                0x00000800  /* "name_or_data" will be interpreted as a pointer to memory instead of filename for creating sounds.  Use FMOD_CREATESOUNDEXINFO to specify length.  If used with FMOD_CREATESAMPLE or FMOD_CREATECOMPRESSEDSAMPLE, FMOD duplicates the memory into its own buffers.  Your own buffer can be freed after open.  If used with FMOD_CREATESTREAM, FMOD will stream out of the buffer whose pointer you passed in.  In this case, your own buffer should not be freed until you have finished with and released the stream.*/
    // FMOD_OPENMEMORY_POINT          0x10000000  /* "name_or_data" will be interpreted as a pointer to memory instead of filename for creating sounds.  Use FMOD_CREATESOUNDEXINFO to specify length.  This differs to FMOD_OPENMEMORY in that it uses the memory as is, without duplicating the memory into its own buffers.  For Wii/PSP FMOD_HARDWARE supports this flag for the GCADPCM/VAG formats.  On other platforms FMOD_SOFTWARE must be used, as sound hardware on the other platforms (ie PC) cannot access main ram.  Cannot be freed after open, only after Sound::release.   Will not work if the data is compressed and FMOD_CREATECOMPRESSEDSAMPLE is not used. */
    // FMOD_OPENRAW                   0x00001000  /* Will ignore file format and treat as raw pcm.  Use FMOD_CREATESOUNDEXINFO to specify format.  Requires at least defaultfrequency, numchannels and format to be specified before it will open.  Must be little endian data. */
    // FMOD_OPENONLY                  0x00002000  /* Just open the file, dont prebuffer or read.  Good for fast opens for info, or when sound::readData is to be used. */
    // FMOD_ACCURATETIME              0x00004000  /* For System::createSound - for accurate Sound::getLength/Channel::setPosition on VBR MP3, and MOD/S3M/XM/IT/MIDI files.  Scans file first, so takes longer to open. FMOD_OPENONLY does not affect this. */
    // FMOD_MPEGSEARCH                0x00008000  /* For corrupted / bad MP3 files.  This will search all the way through the file until it hits a valid MPEG header.  Normally only searches for 4k. */
    // FMOD_NONBLOCKING               0x00010000  /* For opening sounds and getting streamed subsounds (seeking) asyncronously.  Use Sound::getOpenState to poll the state of the sound as it opens or retrieves the subsound in the background. */
    // FMOD_UNIQUE                    0x00020000  /* Unique sound, can only be played one at a time */
    // FMOD_3D_HEADRELATIVE           0x00040000  /* Make the sound's position, velocity and orientation relative to the listener. */
    // FMOD_3D_WORLDRELATIVE          0x00080000  /* Make the sound's position, velocity and orientation absolute (relative to the world). (DEFAULT) */
    // FMOD_3D_INVERSEROLLOFF         0x00100000  /* This sound will follow the inverse rolloff model where mindistance = full volume, maxdistance = where sound stops attenuating, and rolloff is fixed according to the global rolloff factor.  (DEFAULT) */
    // FMOD_3D_LINEARROLLOFF          0x00200000  /* This sound will follow a linear rolloff model where mindistance = full volume, maxdistance = silence.  Rolloffscale is ignored. */
    // FMOD_3D_LINEARSQUAREROLLOFF    0x00400000  /* This sound will follow a linear-square rolloff model where mindistance = full volume, maxdistance = silence.  Rolloffscale is ignored. */
    // FMOD_3D_CUSTOMROLLOFF          0x04000000  /* This sound will follow a rolloff model defined by Sound::set3DCustomRolloff / Channel::set3DCustomRolloff.  */
    // FMOD_3D_IGNOREGEOMETRY         0x40000000  /* Is not affect by geometry occlusion.  If not specified in Sound::setMode, or Channel::setMode, the flag is cleared and it is affected by geometry again. */
    // FMOD_UNICODE                   0x01000000  /* Filename is double-byte unicode. */
    // FMOD_IGNORETAGS                0x02000000  /* Skips id3v2/asf/etc tag checks when opening a sound, to reduce seek/read overhead when opening files (helps with CD performance). */
    // FMOD_LOWMEM                    0x08000000  /* Removes some features from samples to give a lower memory overhead, like Sound::getName.  See remarks. */
    // FMOD_LOADSECONDARYRAM          0x20000000  /* Load sound into the secondary RAM of supported platform. On PS3, sounds will be loaded into RSX/VRAM. */
    // FMOD_VIRTUAL_PLAYFROMSTART     0x80000000  /* For sounds that start virtual (due to being quiet or low importance), instead of swapping back to audible, and playing at the correct offset according to time, this flag makes the sound play from the start. */
// To
    // FMOD1_DEFAULT                   0x00000000  /* Default for all modes listed below. FMOD1_LOOP_OFF, FMOD1_2D, FMOD1_3D_WORLDRELATIVE, FMOD1_3D_INVERSEROLLOFF */
    // FMOD1_LOOP_OFF                  0x00000001  /* For non looping sounds. (DEFAULT).  Overrides FMOD1_LOOP_NORMAL / FMOD1_LOOP_BIDI. */
    // FMOD1_LOOP_NORMAL               0x00000002  /* For forward looping sounds. */
    // FMOD1_LOOP_BIDI                 0x00000004  /* For bidirectional looping sounds. (only works on software mixed static sounds). */
    // FMOD1_2D                        0x00000008  /* Ignores any 3d processing. (DEFAULT). */
    // FMOD1_3D                        0x00000010  /* Makes the sound positionable in 3D.  Overrides FMOD1_2D. */
    // FMOD1_CREATESTREAM              0x00000080  /* Decompress at runtime, streaming from the source provided (ie from disk).  Overrides FMOD1_CREATESAMPLE and FMOD1_CREATECOMPRESSEDSAMPLE.  Note a stream can only be played once at a time due to a stream only having 1 stream buffer and file handle.  Open multiple streams to have them play concurrently. */
    // FMOD1_CREATESAMPLE              0x00000100  /* Decompress at loadtime, decompressing or decoding whole file into memory as the target sample format (ie PCM).  Fastest for playback and most flexible.  */
    // FMOD1_CREATECOMPRESSEDSAMPLE    0x00000200  /* Load MP2/MP3/IMAADPCM/Vorbis/AT9 or XMA into memory and leave it compressed.  Vorbis/AT9 encoding only supported in the FSB file format.  During playback the FMOD software mixer will decode it in realtime as a 'compressed sample'.  Overrides FMOD1_CREATESAMPLE.  If the sound data is not one of the supported formats, it will behave as if it was created with FMOD1_CREATESAMPLE and decode the sound into PCM. */
    // FMOD1_OPENUSER                  0x00000400  /* Opens a user created static sample or stream. Use FMOD1_CREATESOUNDEXINFO to specify format and/or read callbacks.  If a user created 'sample' is created with no read callback, the sample will be empty.  Use Sound::lock and Sound::unlock to place sound data into the sound if this is the case. */
    // FMOD1_OPENMEMORY                0x00000800  /* "name_or_data" will be interpreted as a pointer to memory instead of filename for creating sounds.  Use FMOD1_CREATESOUNDEXINFO to specify length.  If used with FMOD1_CREATESAMPLE or FMOD1_CREATECOMPRESSEDSAMPLE, FMOD duplicates the memory into its own buffers.  Your own buffer can be freed after open.  If used with FMOD1_CREATESTREAM, FMOD will stream out of the buffer whose pointer you passed in.  In this case, your own buffer should not be freed until you have finished with and released the stream.*/
    // FMOD1_OPENMEMORY_POINT          0x10000000  /* "name_or_data" will be interpreted as a pointer to memory instead of filename for creating sounds.  Use FMOD1_CREATESOUNDEXINFO to specify length.  This differs to FMOD1_OPENMEMORY in that it uses the memory as is, without duplicating the memory into its own buffers.  Cannot be freed after open, only after Sound::release.   Will not work if the data is compressed and FMOD1_CREATECOMPRESSEDSAMPLE is not used. */
    // FMOD1_OPENRAW                   0x00001000  /* Will ignore file format and treat as raw pcm.  Use FMOD1_CREATESOUNDEXINFO to specify format.  Requires at least defaultfrequency, numchannels and format to be specified before it will open.  Must be little endian data. */
    // FMOD1_OPENONLY                  0x00002000  /* Just open the file, dont prebuffer or read.  Good for fast opens for info, or when sound::readData is to be used. */
    // FMOD1_ACCURATETIME              0x00004000  /* For System::createSound - for accurate Sound::getLength/Channel::setPosition on VBR MP3, and MOD/S3M/XM/IT/MIDI files.  Scans file first, so takes longer to open. FMOD1_OPENONLY does not affect this. */
    // FMOD1_MPEGSEARCH                0x00008000  /* For corrupted / bad MP3 files.  This will search all the way through the file until it hits a valid MPEG header.  Normally only searches for 4k. */
    // FMOD1_NONBLOCKING               0x00010000  /* For opening sounds and getting streamed subsounds (seeking) asyncronously.  Use Sound::getOpenState to poll the state of the sound as it opens or retrieves the subsound in the background. */
    // FMOD1_UNIQUE                    0x00020000  /* Unique sound, can only be played one at a time */
    // FMOD1_3D_HEADRELATIVE           0x00040000  /* Make the sound's position, velocity and orientation relative to the listener. */
    // FMOD1_3D_WORLDRELATIVE          0x00080000  /* Make the sound's position, velocity and orientation absolute (relative to the world). (DEFAULT) */
    // FMOD1_3D_INVERSEROLLOFF         0x00100000  /* This sound will follow the inverse rolloff model where mindistance = full volume, maxdistance = where sound stops attenuating, and rolloff is fixed according to the global rolloff factor.  (DEFAULT) */
    // FMOD1_3D_LINEARROLLOFF          0x00200000  /* This sound will follow a linear rolloff model where mindistance = full volume, maxdistance = silence. */
    // FMOD1_3D_LINEARSQUAREROLLOFF    0x00400000  /* This sound will follow a linear-square rolloff model where mindistance = full volume, maxdistance = silence. */
    // FMOD1_3D_INVERSETAPEREDROLLOFF  0x00800000  /* This sound will follow the inverse rolloff model at distances close to mindistance and a linear-square rolloff close to maxdistance. */
    // FMOD1_3D_CUSTOMROLLOFF          0x04000000  /* This sound will follow a rolloff model defined by Sound::set3DCustomRolloff / Channel::set3DCustomRolloff.  */
    // FMOD1_3D_IGNOREGEOMETRY         0x40000000  /* Is not affect by geometry occlusion.  If not specified in Sound::setMode, or Channel::setMode, the flag is cleared and it is affected by geometry again. */
    //  /* Unused                              0x01000000  Used to be FMOD1_UNICODE */
    // FMOD1_IGNORETAGS                0x02000000  /* Skips id3v2/asf/etc tag checks when opening a sound, to reduce seek/read overhead when opening files (helps with CD performance). */
    // FMOD1_LOWMEM                    0x08000000  /* Removes some features from samples to give a lower memory overhead, like Sound::getName.  See remarks. */
    // FMOD1_LOADSECONDARYRAM          0x20000000  /* Load sound into the secondary RAM of supported platform. On PS3, sounds will be loaded into RSX/VRAM. */
    // FMOD1_VIRTUAL_PLAYFROMSTART     0x80000000  /* For sounds that start virtual (due to being quiet or low importance), instead of swapping back to audible, and playing at the correct offset according to time, this flag makes the sound play from the start. */
    return mode;
}

FMOD1_SPEAKER Speaker(FMOD_SPEAKER speaker)
{
// From
    //FMOD_SPEAKER_FRONT_LEFT,
    //FMOD_SPEAKER_FRONT_RIGHT,
    //FMOD_SPEAKER_FRONT_CENTER,
    //FMOD_SPEAKER_LOW_FREQUENCY,
    //FMOD_SPEAKER_BACK_LEFT,
    //FMOD_SPEAKER_BACK_RIGHT,
    //FMOD_SPEAKER_SIDE_LEFT,
    //FMOD_SPEAKER_SIDE_RIGHT,
    //FMOD_SPEAKER_MAX,                                       /* Maximum number of speaker types supported. */
    //FMOD_SPEAKER_MONO        = FMOD_SPEAKER_FRONT_LEFT,     /* For use with FMOD_SPEAKERMODE_MONO and Channel::SetSpeakerLevels.  Mapped to same value as FMOD_SPEAKER_FRONT_LEFT. */
    //FMOD_SPEAKER_NULL        = 65535,                       /* A non speaker.  Use this with ASIO mapping to ignore a speaker. */
    //FMOD_SPEAKER_SBL         = FMOD_SPEAKER_SIDE_LEFT,      /* For use with FMOD_SPEAKERMODE_7POINT1 on PS3 where the extra speakers are surround back inside of side speakers. */
    //FMOD_SPEAKER_SBR         = FMOD_SPEAKER_SIDE_RIGHT,     /* For use with FMOD_SPEAKERMODE_7POINT1 on PS3 where the extra speakers are surround back inside of side speakers. */
    //FMOD_SPEAKER_FORCEINT    = 65536                        /* Makes sure this enum is signed 32bit. */
// To
    //FMOD1_SPEAKER_FRONT_LEFT,
    //FMOD1_SPEAKER_FRONT_RIGHT,
    //FMOD1_SPEAKER_FRONT_CENTER,
    //FMOD1_SPEAKER_LOW_FREQUENCY,
    //FMOD1_SPEAKER_SURROUND_LEFT,
    //FMOD1_SPEAKER_SURROUND_RIGHT,
    //FMOD1_SPEAKER_BACK_LEFT,
    //FMOD1_SPEAKER_BACK_RIGHT,
    //FMOD1_SPEAKER_MAX,               /* Maximum number of speaker types supported. */
    //FMOD1_SPEAKER_FORCEINT = 65536   /* Makes sure this enum is signed 32bit. */
    if(speaker==FMOD_SPEAKER_BACK_LEFT) return FMOD1_SPEAKER_BACK_LEFT;
    if(speaker==FMOD_SPEAKER_BACK_RIGHT) return FMOD1_SPEAKER_BACK_RIGHT;
    if(speaker==FMOD_SPEAKER_SIDE_LEFT) return FMOD1_SPEAKER_SURROUND_LEFT;
    if(speaker==FMOD_SPEAKER_SIDE_RIGHT) return FMOD1_SPEAKER_SURROUND_RIGHT;
    return speaker;
}

FMOD1_SPEAKERMODE SpeakerMode(FMOD_SPEAKERMODE mode)
{
// From
    //FMOD_SPEAKERMODE_RAW,              /* There is no specific speakermode.  Sound channels are mapped in order of input to output.  Use System::setSoftwareFormat to specify speaker count. See remarks for more information. */
    //FMOD_SPEAKERMODE_MONO,             /* The speakers are monaural. */
    //FMOD_SPEAKERMODE_STEREO,           /* The speakers are stereo (DEFAULT). */
    //FMOD_SPEAKERMODE_QUAD,             /* 4 speaker setup.  This includes front left, front right, rear left, rear right.  */
    //FMOD_SPEAKERMODE_SURROUND,         /* 5 speaker setup.  This includes front left, front right, center, rear left, rear right. */
    //FMOD_SPEAKERMODE_5POINT1,          /* 5.1 speaker setup.  This includes front left, front right, center, rear left, rear right and a subwoofer. */
    //FMOD_SPEAKERMODE_7POINT1,          /* 7.1 speaker setup.  This includes front left, front right, center, rear left, rear right, side left, side right and a subwoofer. */
    //FMOD_SPEAKERMODE_SRS5_1_MATRIX,    /* Stereo compatible output, embedded with surround information. SRS 5.1/Prologic/Prologic2 decoders will split the signal into a 5.1 speaker set-up or SRS virtual surround will decode into a 2-speaker/headphone setup.  See remarks about limitations.*/
    //FMOD_SPEAKERMODE_DOLBY5_1_MATRIX,  /* Stereo compatible output, embedded with surround information. Dolby Pro Logic II decoders will split the signal into a 5.1 speaker set-up. */
    //FMOD_SPEAKERMODE_MYEARS,           /* Stereo output, but data is encoded using personalized HRTF algorithms.  See myears.net.au */
    //FMOD_SPEAKERMODE_MAX,              /* Maximum number of speaker modes supported. */
    //FMOD_SPEAKERMODE_FORCEINT = 65536  /* Makes sure this enum is signed 32bit. */
// To
    //FMOD1_SPEAKERMODE_DEFAULT,          /* Default speaker mode based on operating system/output mode.  Windows = control panel setting, Xbox = 5.1, PS3 = 7.1 etc. */
    //FMOD1_SPEAKERMODE_RAW,              /* There is no specific speakermode.  Sound channels are mapped in order of input to output.  Use System::setSoftwareFormat to specify speaker count. See remarks for more information. */
    //FMOD1_SPEAKERMODE_MONO,             /* The speakers are monaural. */
    //FMOD1_SPEAKERMODE_STEREO,           /* The speakers are stereo. */
    //FMOD1_SPEAKERMODE_QUAD,             /* 4 speaker setup.    This includes front left, front right, surround left, surround right.  */
    //FMOD1_SPEAKERMODE_SURROUND,         /* 5 speaker setup.    This includes front left, front right, center, surround left, surround right. */
    //FMOD1_SPEAKERMODE_5POINT1,          /* 5.1 speaker setup.  This includes front left, front right, center, surround left, surround right and an LFE speaker. */
    //FMOD1_SPEAKERMODE_7POINT1,          /* 7.1 speaker setup.  This includes front left, front right, center, surround left, surround right, back left, back right and an LFE speaker. */
    //FMOD1_SPEAKERMODE_MAX,              /* Maximum number of speaker modes supported. */
    //FMOD1_SPEAKERMODE_FORCEINT = 65536  /* Makes sure this enum is signed 32bit. */
    switch(mode)
    {
        case FMOD_SPEAKERMODE_RAW: return FMOD1_SPEAKERMODE_RAW;
        case FMOD_SPEAKERMODE_MONO: return FMOD1_SPEAKERMODE_MONO;
        case FMOD_SPEAKERMODE_STEREO: return FMOD1_SPEAKERMODE_STEREO;
        case FMOD_SPEAKERMODE_QUAD: return FMOD1_SPEAKERMODE_QUAD;
        case FMOD_SPEAKERMODE_SURROUND: return FMOD1_SPEAKERMODE_SURROUND;
        case FMOD_SPEAKERMODE_5POINT1: return FMOD1_SPEAKERMODE_5POINT1;
        case FMOD_SPEAKERMODE_7POINT1: return FMOD1_SPEAKERMODE_7POINT1;
        case FMOD_SPEAKERMODE_SRS5_1_MATRIX: return FMOD1_SPEAKERMODE_5POINT1;
        case FMOD_SPEAKERMODE_DOLBY5_1_MATRIX: return FMOD1_SPEAKERMODE_5POINT1;
        case FMOD_SPEAKERMODE_MYEARS: return FMOD1_SPEAKERMODE_STEREO;
    }
    return FMOD1_SPEAKERMODE_RAW;
}
FMOD_SPEAKERMODE SpeakerModeFrom(FMOD1_SPEAKERMODE mode)
{
    // the other way around
    switch(mode)
    {
        case FMOD1_SPEAKERMODE_RAW: return FMOD_SPEAKERMODE_RAW;
        case FMOD1_SPEAKERMODE_MONO: return FMOD_SPEAKERMODE_MONO;
        case FMOD1_SPEAKERMODE_STEREO: return FMOD_SPEAKERMODE_STEREO;
        case FMOD1_SPEAKERMODE_QUAD: return FMOD_SPEAKERMODE_QUAD;
        case FMOD1_SPEAKERMODE_SURROUND: return FMOD_SPEAKERMODE_SURROUND;
        case FMOD1_SPEAKERMODE_5POINT1: return FMOD_SPEAKERMODE_5POINT1;
        case FMOD1_SPEAKERMODE_7POINT1: return FMOD_SPEAKERMODE_7POINT1;
    }
    return FMOD_SPEAKERMODE_RAW;
}

FMOD1_DSP_TYPE DspType(FMOD_DSP_TYPE type)
{
    // From:
    //FMOD_DSP_TYPE_UNKNOWN,            /* This unit was created via a non FMOD plugin so has an unknown purpose. */
    //FMOD_DSP_TYPE_MIXER,              /* This unit does nothing but take inputs and mix them together then feed the result to the soundcard unit. */
    //FMOD_DSP_TYPE_OSCILLATOR,         /* This unit generates sine/square/saw/triangle or noise tones. */
    //FMOD_DSP_TYPE_LOWPASS,            /* This unit filters sound using a high quality, resonant lowpass filter algorithm but consumes more CPU time. */
    //FMOD_DSP_TYPE_ITLOWPASS,          /* This unit filters sound using a resonant lowpass filter algorithm that is used in Impulse Tracker, but with limited cutoff range (0 to 8060hz). */
    //FMOD_DSP_TYPE_HIGHPASS,           /* This unit filters sound using a resonant highpass filter algorithm. */
    //FMOD_DSP_TYPE_ECHO,               /* This unit produces an echo on the sound and fades out at the desired rate. */
    //FMOD_DSP_TYPE_FLANGE,             /* This unit produces a flange effect on the sound. */
    //FMOD_DSP_TYPE_DISTORTION,         /* This unit distorts the sound. */
    //FMOD_DSP_TYPE_NORMALIZE,          /* This unit normalizes or amplifies the sound to a certain level. */
    //FMOD_DSP_TYPE_PARAMEQ,            /* This unit attenuates or amplifies a selected frequency range. */
    //FMOD_DSP_TYPE_PITCHSHIFT,         /* This unit bends the pitch of a sound without changing the speed of playback. */
    //FMOD_DSP_TYPE_CHORUS,             /* This unit produces a chorus effect on the sound. */
    //FMOD_DSP_TYPE_VSTPLUGIN,          /* This unit allows the use of Steinberg VST plugins */
    //FMOD_DSP_TYPE_WINAMPPLUGIN,       /* This unit allows the use of Nullsoft Winamp plugins */
    //FMOD_DSP_TYPE_ITECHO,             /* This unit produces an echo on the sound and fades out at the desired rate as is used in Impulse Tracker. */
    //FMOD_DSP_TYPE_COMPRESSOR,         /* This unit implements dynamic compression (linked multichannel, wideband) */
    //FMOD_DSP_TYPE_SFXREVERB,          /* This unit implements SFX reverb */
    //FMOD_DSP_TYPE_LOWPASS_SIMPLE,     /* This unit filters sound using a simple lowpass with no resonance, but has flexible cutoff and is fast. */
    //FMOD_DSP_TYPE_DELAY,              /* This unit produces different delays on individual channels of the sound. */
    //FMOD_DSP_TYPE_TREMOLO,            /* This unit produces a tremolo / chopper effect on the sound. */
    //FMOD_DSP_TYPE_LADSPAPLUGIN,       /* This unit allows the use of LADSPA standard plugins. */
    //FMOD_DSP_TYPE_HIGHPASS_SIMPLE,    /* This unit filters sound using a simple highpass with no resonance, but has flexible cutoff and is fast. */
    //FMOD_DSP_TYPE_HARDWARE = 1000,    /* Offset that platform specific FMOD_HARDWARE DSPs will start at. */
    //FMOD_DSP_TYPE_FORCEINT = 65536    /* Makes sure this enum is signed 32bit. */
    // To:
    //FMOD1_DSP_TYPE_UNKNOWN,            /* This unit was created via a non FMOD plugin so has an unknown purpose. */
    //FMOD1_DSP_TYPE_MIXER,              /* This unit does nothing but take inputs and mix them together then feed the result to the soundcard unit. */
    //FMOD1_DSP_TYPE_OSCILLATOR,         /* This unit generates sine/square/saw/triangle or noise tones. */
    //FMOD1_DSP_TYPE_LOWPASS,            /* This unit filters sound using a high quality, resonant lowpass filter algorithm but consumes more CPU time. */
    //FMOD1_DSP_TYPE_ITLOWPASS,          /* This unit filters sound using a resonant lowpass filter algorithm that is used in Impulse Tracker, but with limited cutoff range (0 to 8060hz). */
    //FMOD1_DSP_TYPE_HIGHPASS,           /* This unit filters sound using a resonant highpass filter algorithm. */
    //FMOD1_DSP_TYPE_ECHO,               /* This unit produces an echo on the sound and fades out at the desired rate. */
    //FMOD1_DSP_TYPE_FADER,              /* This unit pans and scales the volume of a unit. */
    //FMOD1_DSP_TYPE_FLANGE,             /* This unit produces a flange effect on the sound. */
    //FMOD1_DSP_TYPE_DISTORTION,         /* This unit distorts the sound. */
    //FMOD1_DSP_TYPE_NORMALIZE,          /* This unit normalizes or amplifies the sound to a certain level. */
    //FMOD1_DSP_TYPE_LIMITER,            /* This unit limits the sound to a certain level.*/
    //FMOD1_DSP_TYPE_PARAMEQ,            /* This unit attenuates or amplifies a selected frequency range. */
    //FMOD1_DSP_TYPE_PITCHSHIFT,         /* This unit bends the pitch of a sound without changing the speed of playback. */
    //FMOD1_DSP_TYPE_CHORUS,             /* This unit produces a chorus effect on the sound. */
    //FMOD1_DSP_TYPE_VSTPLUGIN,          /* This unit allows the use of Steinberg VST plugins */
    //FMOD1_DSP_TYPE_WINAMPPLUGIN,       /* This unit allows the use of Nullsoft Winamp plugins */
    //FMOD1_DSP_TYPE_ITECHO,             /* This unit produces an echo on the sound and fades out at the desired rate as is used in Impulse Tracker. */
    //FMOD1_DSP_TYPE_COMPRESSOR,         /* This unit implements dynamic compression (linked multichannel, wideband) */
    //FMOD1_DSP_TYPE_SFXREVERB,          /* This unit implements SFX reverb */
    //FMOD1_DSP_TYPE_LOWPASS_SIMPLE,     /* This unit filters sound using a simple lowpass with no resonance, but has flexible cutoff and is fast. */
    //FMOD1_DSP_TYPE_DELAY,              /* This unit produces different delays on individual channels of the sound. */
    //FMOD1_DSP_TYPE_TREMOLO,            /* This unit produces a tremolo / chopper effect on the sound. */
    //FMOD1_DSP_TYPE_LADSPAPLUGIN,       /* Unsupported / Deprecated. */
    //FMOD1_DSP_TYPE_SEND,               /* This unit sends a copy of the signal to a return DSP anywhere in the DSP tree. */
    //FMOD1_DSP_TYPE_RETURN,             /* This unit receives signals from a number of send DSPs. */
    //FMOD1_DSP_TYPE_HIGHPASS_SIMPLE,    /* This unit filters sound using a simple highpass with no resonance, but has flexible cutoff and is fast. */
    //FMOD1_DSP_TYPE_PAN,                /* This unit pans the signal, possibly upmixing or downmixing as well. */
    //FMOD1_DSP_TYPE_THREE_EQ,           /* This unit is a three-band equalizer. */
    //FMOD1_DSP_TYPE_FFT,                /* This unit simply analyzes the signal and provides spectrum information back through getParameter. */
    //FMOD1_DSP_TYPE_LOUDNESS_METER,     /* This unit analyzes the loudness and true peak of the signal. */
    //FMOD1_DSP_TYPE_ENVELOPEFOLLOWER,   /* This unit tracks the envelope of the input/sidechain signal. Format to be publicly disclosed soon. */
    //FMOD1_DSP_TYPE_CONVOLUTIONREVERB,  /* This unit implements convolution reverb. */
    //FMOD1_DSP_TYPE_MAX,                /* Maximum number of pre-defined DSP types. */
    //FMOD1_DSP_TYPE_FORCEINT = 65536    /* Makes sure this enum is signed 32bit. */
    switch(type)
    {
        case FMOD_DSP_TYPE_UNKNOWN: return FMOD1_DSP_TYPE_UNKNOWN;
        case FMOD_DSP_TYPE_MIXER: return FMOD1_DSP_TYPE_MIXER;
        case FMOD_DSP_TYPE_OSCILLATOR: return FMOD1_DSP_TYPE_OSCILLATOR;
        case FMOD_DSP_TYPE_LOWPASS: return FMOD1_DSP_TYPE_LOWPASS;
        case FMOD_DSP_TYPE_ITLOWPASS: return FMOD1_DSP_TYPE_ITLOWPASS;
        case FMOD_DSP_TYPE_HIGHPASS: return FMOD1_DSP_TYPE_HIGHPASS;
        case FMOD_DSP_TYPE_ECHO: return FMOD1_DSP_TYPE_ECHO;
        case FMOD_DSP_TYPE_FLANGE: return FMOD1_DSP_TYPE_FLANGE;
        case FMOD_DSP_TYPE_DISTORTION: return FMOD1_DSP_TYPE_DISTORTION;
        case FMOD_DSP_TYPE_NORMALIZE: return FMOD1_DSP_TYPE_NORMALIZE;
        case FMOD_DSP_TYPE_PARAMEQ: return FMOD1_DSP_TYPE_PARAMEQ;
        case FMOD_DSP_TYPE_PITCHSHIFT: return FMOD1_DSP_TYPE_PITCHSHIFT;
        case FMOD_DSP_TYPE_CHORUS: return FMOD1_DSP_TYPE_CHORUS;
        case FMOD_DSP_TYPE_VSTPLUGIN: return FMOD1_DSP_TYPE_VSTPLUGIN;
        case FMOD_DSP_TYPE_WINAMPPLUGIN: return FMOD1_DSP_TYPE_WINAMPPLUGIN;
        case FMOD_DSP_TYPE_ITECHO: return FMOD1_DSP_TYPE_ITECHO;
        case FMOD_DSP_TYPE_COMPRESSOR: return FMOD1_DSP_TYPE_COMPRESSOR;
        case FMOD_DSP_TYPE_SFXREVERB: return FMOD1_DSP_TYPE_SFXREVERB;
        case FMOD_DSP_TYPE_LOWPASS_SIMPLE: return FMOD1_DSP_TYPE_LOWPASS_SIMPLE;
        case FMOD_DSP_TYPE_DELAY: return FMOD1_DSP_TYPE_DELAY;
        case FMOD_DSP_TYPE_TREMOLO: return FMOD1_DSP_TYPE_TREMOLO;
        case FMOD_DSP_TYPE_LADSPAPLUGIN: return FMOD1_DSP_TYPE_LADSPAPLUGIN;
        case FMOD_DSP_TYPE_HIGHPASS_SIMPLE: return FMOD1_DSP_TYPE_HIGHPASS_SIMPLE;
        case FMOD_DSP_TYPE_HARDWARE: return FMOD1_DSP_TYPE_UNKNOWN; //...
    }
    return FMOD1_DSP_TYPE_UNKNOWN;
}