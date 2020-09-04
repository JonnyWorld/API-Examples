#pragma once
#define INFO_LEN 255
//main dialog
extern wchar_t commonGroupDoc[INFO_LEN];
extern wchar_t commonDocumentWebsite[INFO_LEN];
extern wchar_t commonFAQWebsite[INFO_LEN];
extern wchar_t commonRegisterWebsite[INFO_LEN];
extern wchar_t commonDemoWebsite[INFO_LEN];

extern wchar_t commonBasicScene[INFO_LEN];
extern wchar_t commonAdvanceScene[INFO_LEN];
//agora enum
extern wchar_t agoraRoleBroadcaster[INFO_LEN];
extern wchar_t agoraRoleAudience[INFO_LEN];


//common ctrl
extern wchar_t commonCtrlChannel[INFO_LEN];
extern wchar_t commonCtrlJoinChannel[INFO_LEN];
extern wchar_t commonCtrlLeaveChannel[INFO_LEN];
extern wchar_t commonCtrlClientRole[INFO_LEN];
//scene list
extern wchar_t basicLiveBroadcasting[INFO_LEN];
extern wchar_t advancedRtmpInject[INFO_LEN];
extern wchar_t advancedRtmpStreaming[INFO_LEN];
extern wchar_t advancedVideoMetadata[INFO_LEN];
extern wchar_t advancedCustomEncrypt[INFO_LEN];

extern wchar_t advancedScreenCap[INFO_LEN];
extern wchar_t advancedAudioProfile[INFO_LEN];
extern wchar_t advancedAudioMixing[INFO_LEN];
extern wchar_t advancedBeauty[INFO_LEN];
extern wchar_t advancedBeautyAudio[INFO_LEN];
extern wchar_t advancedCustomVideoCapture[INFO_LEN];
extern wchar_t advancedOriginalVideo[INFO_LEN];
extern wchar_t advancedCustomAudioCapture[INFO_LEN];
extern wchar_t advancedOriginalAudio[INFO_LEN];
extern wchar_t advancedMediaPlayer[INFO_LEN];

//live broadcasting
extern wchar_t liveCtrlPersons[INFO_LEN];
//rtmp streaming
extern wchar_t rtmpStreamingCtrlPublishUrl[INFO_LEN];
extern wchar_t rtmpStreamingCtrlAdd[INFO_LEN];
extern wchar_t rtmpStreamingCtrlRemove[INFO_LEN];
extern wchar_t rtmpStreamingCtrlTransCoding[INFO_LEN];
extern wchar_t rtmpStreamingCtrlRemoveAll[INFO_LEN];
//rtmp Inject
extern wchar_t rtmpInjectCtrlUrl[INFO_LEN];
extern wchar_t rtmpInjectCtrlInject[INFO_LEN];
extern wchar_t rtmpInjectCtrlRemove[INFO_LEN];
//rtmp stream state changed
extern wchar_t agoraRtmpStateIdle[INFO_LEN];
extern wchar_t agoraRtmpStateConnecting[INFO_LEN];
extern wchar_t agoraRtmpStateRunning[INFO_LEN];
extern wchar_t agoraRtmpStateRunningSuccess[INFO_LEN];
extern wchar_t agoraRtmpStateRecovering[INFO_LEN];
extern wchar_t agoraRtmpStateInvalidArg[INFO_LEN];
extern wchar_t agoraRtmpStateEncrypted[INFO_LEN];
extern wchar_t agoraRtmpStateConnTimeout[INFO_LEN];
extern wchar_t agoraRtmpStateInrealErr[INFO_LEN];
extern wchar_t agoraRtmpStateServerErr[INFO_LEN];
extern wchar_t agoraRtmpStateTooOften[INFO_LEN];
extern wchar_t agoraRtmpStateReachLimit[INFO_LEN];
extern wchar_t agoraRtmpStateNotAuth[INFO_LEN];
extern wchar_t agoraRtmpStateNotFound[INFO_LEN];
extern wchar_t agoraRtmpStateNotSupported[INFO_LEN];

// inject status
extern wchar_t agoraInjectStartSucc[INFO_LEN];
extern wchar_t agoraInjectExist[INFO_LEN];
extern wchar_t agoraInjectStartUnAuth[INFO_LEN];
extern wchar_t agoraInjectStartTimeout[INFO_LEN];
extern wchar_t agoraInjectStartFailed[INFO_LEN];
extern wchar_t agoraInjectStopSuccess[INFO_LEN];
extern wchar_t agoraInjectNotFound[INFO_LEN];
extern wchar_t agoraInjectStopUnAuth[INFO_LEN];

extern wchar_t agoraInjectStopTimeout[INFO_LEN];
extern wchar_t agoraInjectStopFailed[INFO_LEN];
extern wchar_t agoraInjectBroken[INFO_LEN];

//video SEI
extern wchar_t videoSEIInformation[INFO_LEN];
extern wchar_t metadataCtrlSendSEI[INFO_LEN];
extern wchar_t metadataCtrlBtnSend[INFO_LEN];
extern wchar_t metadataCtrlBtnClear[INFO_LEN];

//custom encrypt
extern wchar_t customEncryptCtrlEncrypt[INFO_LEN];
extern wchar_t customEncryptCtrlSetEncrypt[INFO_LEN];
extern wchar_t customEncryptCtrlCancelEncrypt[INFO_LEN];

//screen share
extern wchar_t screenShareCtrlScreenCap[INFO_LEN];
extern wchar_t screenShareCtrlStartCap[INFO_LEN];
extern wchar_t screenShareCtrlEndCap[INFO_LEN];

extern wchar_t  screenShareCtrlScreen[INFO_LEN];
extern wchar_t  screenShareCtrlShareSCreen[INFO_LEN];
extern wchar_t  screenShareCtrlStopShare[INFO_LEN];
extern wchar_t  screenShareCtrlGeneralSettings[INFO_LEN];
extern wchar_t  screenShareCtrlFPS[INFO_LEN];
extern wchar_t  screenShareCtrlBitrate[INFO_LEN];
extern wchar_t  screenShareCtrlShareCursor[INFO_LEN];
extern wchar_t  screenShareCtrlUpdateCaptureParam[INFO_LEN];



extern wchar_t screenCtrlRectInfo[INFO_LEN];
extern wchar_t virtualScreenCtrlRectInfo[INFO_LEN];
extern wchar_t screenCtrlCustomRectInfo[INFO_LEN];

//beauty
extern wchar_t beautyCtrlLighteningContrastLevel[INFO_LEN];
extern wchar_t beautyCtrlLightening[INFO_LEN];
extern wchar_t beautyCtrlSmoothness[INFO_LEN];
extern wchar_t beautyCtrlRedness[INFO_LEN];
extern wchar_t beautyCtrlEnable[INFO_LEN];

//beauty audio
extern wchar_t beautyAudioCtrlSetAudioChange[INFO_LEN];
extern wchar_t beautyAudioCtrlUnSetAudioChange[INFO_LEN];
extern wchar_t beautyAudioCtrlChange[INFO_LEN];


//set audio profile
extern wchar_t audioProfileCtrlProfile[INFO_LEN];
extern wchar_t audioProfileCtrlScenario[INFO_LEN];
extern wchar_t audioProfileCtrlSetAudioProfile[INFO_LEN];
extern wchar_t audioProfileCtrlUnSetAudioProfile[INFO_LEN];

//audio mixing
extern wchar_t audioMixingCtrlMixingPath[INFO_LEN]; 
extern wchar_t audioMixingCtrlRepeatTimes[INFO_LEN];
extern wchar_t audioMixingCtrlSetAudioMixing[INFO_LEN];
extern wchar_t audioMixingCtrlUnSetAudioMixing[INFO_LEN];
extern wchar_t audioMixingCtrlOnlyLocal[INFO_LEN]; 
extern wchar_t audioMixingCtrlReplaceMicroPhone[INFO_LEN];


//custom video capture
extern wchar_t customVideoCaptureCtrlCaptureVideoDevice[INFO_LEN];
extern wchar_t customVideoCaptureCtrlSetExternlCapture[INFO_LEN];
extern wchar_t customVideoCaptureCtrlCancelExternlCapture[INFO_LEN];


//original video process
extern wchar_t OriginalVideoCtrlProc[INFO_LEN];
extern wchar_t OriginalVideoCtrlSetProc[INFO_LEN];
extern wchar_t OriginalVideoCtrlUnSetProc[INFO_LEN];


//custom audio capture
extern wchar_t customAudioCaptureCtrlCaptureAudioDeivce[INFO_LEN];
extern wchar_t customAudioCaptureCtrlSetExternlCapture[INFO_LEN];
extern wchar_t customAudioCaptureCtrlCancelExternlCapture[INFO_LEN];

//original audio process
extern wchar_t OriginalAudioCtrlProc[INFO_LEN];
extern wchar_t OriginalAudioCtrlSetProc[INFO_LEN];
extern wchar_t OriginalAudioCtrlUnSetProc[INFO_LEN];

//media player
extern wchar_t MeidaPlayerCtrlVideoSource[INFO_LEN];
extern wchar_t MeidaPlayerCtrlOpen[INFO_LEN];
extern wchar_t MeidaPlayerCtrlClose[INFO_LEN];
extern wchar_t MeidaPlayerCtrlPause[INFO_LEN];
extern wchar_t MeidaPlayerCtrlPlay[INFO_LEN];
extern wchar_t MeidaPlayerCtrlAttachPlayer[INFO_LEN];
extern wchar_t MeidaPlayerCtrlDettachPlayer[INFO_LEN];
extern wchar_t MeidaPlayerCtrlPublishVideo[INFO_LEN];
extern wchar_t MeidaPlayerCtrlUnPublishVideo[INFO_LEN];
extern wchar_t MeidaPlayerCtrlPublishAudio[INFO_LEN];
extern wchar_t MeidaPlayerCtrlUnPublishAudio[INFO_LEN];

//

extern wchar_t MultiCameara[INFO_LEN];
extern wchar_t ScreenCapturer[INFO_LEN];
extern void InitKeyInfomation();
