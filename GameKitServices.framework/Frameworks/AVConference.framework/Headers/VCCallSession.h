/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

#import <AVConference/LoopbackSocketTunnelDelegate.h>
#import <AVConference/VCCallSession.h>
#import <AVConference/AVConference-Structs.h>
#import <AVConference/XXUnknownSuperclass.h>

@class LoopbackSocketTunnel, TCPTunnelClient, TimingCollection, VCCallLinkCongestionDetector, VCCallInfo, VCCapabilities, NSString, NSData, NSArray, NSObject, GKRingBuffer;
@protocol VideoConferenceRealTimeChannel, VCCallSessionDelegate, VideoConferenceChannelQualityDelegate;

__attribute__((visibility("hidden")))
@interface VCCallSession : XXUnknownSuperclass {
@private
	NSObject<VCCallSessionDelegate> *delegate;	// 4 = 0x4
	VCCallInfo *localCallInfo;	// 8 = 0x8
	VCCallInfo *remoteCallInfo;	// 12 = 0xc
	tagHANDLE *rtpHandle;	// 16 = 0x10
	tagHANDLE *rtpVideo;	// 20 = 0x14
	tagHANDLE *encodeHandle;	// 24 = 0x18
	tagHANDLE *decodeHandle;	// 28 = 0x1c
	int numEncodedBytes;	// 32 = 0x20
	int numBufferBytesAvailable;	// 36 = 0x24
	BOOL didUseICE;	// 40 = 0x28
	tagCONNRESULT connectionResult;	// 44 = 0x2c
	int state;	// 324 = 0x144
	int audioBundle;	// 328 = 0x148
	int payload;	// 332 = 0x14c
	int videoPayload;	// 336 = 0x150
	int sampleRate;	// 340 = 0x154
	int samplesPerFrame;	// 344 = 0x158
	tagHANDLE *hAUIO;	// 348 = 0x15c
	tagHANDLE *hSIP;	// 352 = 0x160
	double lastReceivedAudio;	// 356 = 0x164
	BOOL launchedShutdownThread;	// 364 = 0x16c
	BOOL isAudioRunning;	// 365 = 0x16d
	BOOL isWaitingForICEResult;	// 366 = 0x16e
	BOOL didSend200OK;	// 367 = 0x16f
	float remoteParticipantVolume;	// 368 = 0x170
	NSObject<VideoConferenceRealTimeChannel> *rtChannel;	// 372 = 0x174
	LoopbackSocketTunnel *tunnel;	// 376 = 0x178
	opaque_pthread_mutex_t mutex;	// 380 = 0x17c
	BOOL useLoopback;	// 424 = 0x1a8
	BOOL receivedSIPInvite;	// 425 = 0x1a9
	char *remoteSDP;	// 428 = 0x1ac
	char *localSDP;	// 432 = 0x1b0
	BOOL szRemoteRTPIP[48];	// 436 = 0x1b4
	int iRemoteRTPPort;	// 484 = 0x1e4
	int iRemoteRTCPPort;	// 488 = 0x1e8
	VCCapabilities *caps;	// 492 = 0x1ec
	tagHANDLE *hMediaQueue;	// 496 = 0x1f0
	tagHANDLE *hAFRC;	// 500 = 0x1f4
	GKRingBuffer *ringBuf;	// 504 = 0x1f8
	unsigned lastReceived;	// 508 = 0x1fc
	char *bundleBuffer;	// 512 = 0x200
	int bundledPackets;	// 516 = 0x204
	int packetsPerBundle;	// 520 = 0x208
	int canUseSpecialAACBundle;	// 524 = 0x20c
	int preferredAudioCodec;	// 528 = 0x210
	int preferredAACELDBitRate;	// 532 = 0x214
	int audioTxBitrate;	// 536 = 0x218
	int audioPayloadBitrate;	// 540 = 0x21c
	int audioHeaderBitrate;	// 544 = 0x220
	int audioBundleHeaderBitrate;	// 548 = 0x224
	BOOL useSBR;	// 552 = 0x228
	BOOL canBundleAudio;	// 553 = 0x229
	BOOL useControlByte;	// 554 = 0x22a
	BOOL useUEP;	// 555 = 0x22b
	BOOL _localFeaturesString[1600];	// 556 = 0x22c
	BOOL _matchedFeaturesString[1600];	// 2156 = 0x86c
	unsigned char inputMeter;	// 3756 = 0xeac
	int packetsSinceLastRTCPReport;	// 3760 = 0xeb0
	BOOL audioIsPaused;	// 3764 = 0xeb4
	BOOL videoIsPaused;	// 3765 = 0xeb5
	unsigned long videoPauseSeq;	// 3768 = 0xeb8
	unsigned long audioPauseSeq;	// 3772 = 0xebc
	opaque_pthread_mutex_t pauseLock;	// 3776 = 0xec0
	dispatch_queue_s *videoQueue;	// 3820 = 0xeec
	int audioTimeStampDelta;	// 3824 = 0xef0
	NSArray *mutedPeers;	// 3828 = 0xef4
	int bandwidthUpstream;	// 3832 = 0xef8
	int bandwidthDownstream;	// 3836 = 0xefc
	BOOL allowAudioRecording;	// 3840 = 0xf00
	int aacBlockSize;	// 3844 = 0xf04
	BOOL fInitialBandwidthDetection;	// 3848 = 0xf08
	int carrierBitrateCap;	// 3852 = 0xf0c
	AudioStreamBasicDescription encodedFormat;	// 3856 = 0xf10
	BOOL shouldDoEncoding;	// 3896 = 0xf38
	double lastReceivedPacketTimestamp;	// 3900 = 0xf3c
	BOOL isAttemptingRelay;	// 3908 = 0xf44
	int relayState;	// 3912 = 0xf48
	BOOL allowsRelay;	// 3916 = 0xf4c
	BOOL requiresWifi;	// 3917 = 0xf4d
	BOOL useCompressedConnectionData;	// 3918 = 0xf4e
	int natType;	// 3920 = 0xf50
	unsigned lastSentAudioSampleTime;	// 3924 = 0xf54
	dispatch_source_s *pausedAudioHeartBeat;	// 3928 = 0xf58
	TCPTunnelClient *_tcpTunnelClient;	// 3932 = 0xf5c
	TimingCollection *perfTimers;	// 3936 = 0xf60
	double packetLossRate;	// 3940 = 0xf64
	double timeLastCheckedNetworkConditions;	// 3948 = 0xf6c
	double timeLastKnowGoodNetworkConditions;	// 3956 = 0xf74
	double networkConditionsTimeoutInSeconds;	// 3964 = 0xf7c
	NSString *peerCN;	// 3972 = 0xf84
	NSString *sessionID;	// 3976 = 0xf88
	unsigned roundTripTime;	// 3980 = 0xf8c
	float packetLateAndMissingRatio;	// 3984 = 0xf90
	float callerPreEmptiveTimeoutInSecs;	// 3988 = 0xf94
	int sampleLogCount;	// 3992 = 0xf98
	double timeSinceLastReportedNoPackets;	// 3996 = 0xf9c
	double noRemotePacketsTimeout;	// 4004 = 0xfa4
	BOOL didAttemptSIPInvite;	// 4012 = 0xfac
	NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;	// 4016 = 0xfb0
	BOOL shouldTimeoutPackets;	// 4020 = 0xfb4
	opaque_pthread_mutex_t srtpLock;	// 4024 = 0xfb8
	BOOL didPrepareSRTP;	// 4068 = 0xfe4
	BOOL useAFRC;	// 4069 = 0xfe5
	VCCallLinkCongestionDetector *congestionDetector;	// 4072 = 0xfe8
	BOOL shouldSendAudio;	// 4076 = 0xfec
	BOOL isRemoteDevice4x;	// 4077 = 0xfed
	BOOL isGKVoiceChat;	// 4078 = 0xfee
	int signalStrength;	// 4080 = 0xff0
	int signalRaw;	// 4084 = 0xff4
	int signalGrade;	// 4088 = 0xff8
	bool bBWEstOperatingModeInitialized;	// 4092 = 0xffc
	bool bBWEstNewBWEstModeEnabled;	// 4093 = 0xffd
	bool bBWEstFakeLargeFrameModeEnabled;	// 4094 = 0xffe
	bool bBWEstActiveProbingSenderLog;	// 4095 = 0xfff
	bool bBWEstPeerIsOnIOS;	// 4096 = 0x1000
	CGSize localScreenPortraitAspectRatio;	// 4100 = 0x1004
	CGSize localScreenLandscapeAspectRatio;	// 4108 = 0x100c
	CGSize remoteScreenPortraitAspectRatio;	// 4116 = 0x1014
	CGSize remoteScreenLandscapeAspectRatio;	// 4124 = 0x101c
	BOOL isStarted;	// 4132 = 0x1024
	NSData *srtpKeyBytes;	// 4136 = 0x1028
	BOOL isInitiator;	// 4140 = 0x102c
	BOOL sentClientSuccessfulDidStart;	// 4141 = 0x102d
	double videoThrottlingTimeout;	// 4144 = 0x1030
}
@property(retain, nonatomic) VCCallInfo *localCallInfo;	// G=0x5ffb1; S=0x627f9; @synthesize
@property(retain, nonatomic) VCCallInfo *remoteCallInfo;	// G=0x5ffa1; S=0x627d1; @synthesize
@property(assign) tagHANDLE *rtpHandle;	// G=0x5ff81; S=0x5ff91; @synthesize
@property(assign) tagCONNRESULT connectionResult;	// G=0x6512d; S=0x64f99; @synthesize
@property(assign) int state;	// G=0x5ff61; S=0x5ff71; @synthesize
@property(assign) BOOL didUseICE;	// G=0x5ff41; S=0x5ff51; @synthesize
@property(assign) int audioBundle;	// G=0x5ff21; S=0x5ff31; @synthesize
@property(assign) int videoPayload;	// G=0x5ff01; S=0x5ff11; @synthesize
@property(assign) int payload;	// G=0x5fee1; S=0x5fef1; @synthesize
@property(assign) int sampleRate;	// G=0x5fec1; S=0x5fed1; @synthesize
@property(assign) int samplesPerFrame;	// G=0x5fea1; S=0x5feb1; @synthesize
@property(retain) NSObject<VCCallSessionDelegate> *delegate;	// G=0x626d9; S=0x627ad; @synthesize
@property(readonly, assign) BOOL isAudioRunning;	// G=0x5fe91; @synthesize
@property(assign) BOOL isWaitingForICEResult;	// G=0x5fe71; S=0x5fe81; @synthesize
@property(assign) BOOL receivedSIPInvite;	// G=0x5fe51; S=0x5fe61; @synthesize
@property(assign) NSObject<VideoConferenceRealTimeChannel> *rtChannel;	// G=0x5fe31; S=0x5fe41; @synthesize
@property(assign) tagHANDLE *encodeHandle;	// G=0x5fe11; S=0x5fe21; @synthesize
@property(assign) tagHANDLE *decodeHandle;	// G=0x5fdf1; S=0x5fe01; @synthesize
@property(assign) int numEncodedBytes;	// G=0x5fdd1; S=0x5fde1; @synthesize
@property(assign) int numBufferBytesAvailable;	// G=0x5fdb1; S=0x5fdc1; @synthesize
@property(assign) tagHANDLE *hMediaQueue;	// G=0x5fd91; S=0x5fda1; @synthesize
@property(assign) tagHANDLE *hAFRC;	// G=0x5fd71; S=0x5fd81; @synthesize
@property(retain, nonatomic) GKRingBuffer *ringBuf;	// G=0x5fd61; S=0x62785; @synthesize
@property(assign) unsigned lastReceived;	// G=0x5fd41; S=0x5fd51; @synthesize
@property(readonly, assign) char *bundleBuffer;	// G=0x5fd31; @synthesize
@property(assign) int bundledPackets;	// G=0x5fd11; S=0x5fd21; @synthesize
@property(assign) int packetsPerBundle;	// G=0x5fd01; S=0x66405; @synthesize
@property(assign, nonatomic) BOOL canBundleAudio;	// G=0x5fce1; S=0x5fcf1; @synthesize
@property(assign) int preferredAudioCodec;	// G=0x5fcc1; S=0x5fcd1; @synthesize
@property(assign) BOOL useControlByte;	// G=0x5fca1; S=0x5fcb1; @synthesize
@property(assign) BOOL useUEP;	// G=0x5fc81; S=0x5fc91; @synthesize
@property(assign) unsigned char inputMeter;	// G=0x5fc61; S=0x5fc71; @synthesize
@property(assign, nonatomic) BOOL useCompressedConnectionData;	// G=0x5fc41; S=0x5fc51; @synthesize
@property(assign) int bandwidthUpstream;	// G=0x5fc21; S=0x5fc31; @synthesize
@property(assign) int bandwidthDownstream;	// G=0x5fc01; S=0x5fc11; @synthesize
@property(retain, nonatomic) NSArray *mutedPeers;	// G=0x5fbf1; S=0x6275d; @synthesize
@property(readonly, assign) int audioHeaderBitrate;	// G=0x5fbe1; @synthesize
@property(readonly, assign) int audioBundleHeaderBitrate;	// G=0x5fbd1; @synthesize
@property(readonly, assign) BOOL videoIsPaused;	// G=0x5fbc1; @synthesize
@property(readonly, assign) BOOL audioIsPaused;	// G=0x5fbb1; @synthesize
@property(assign) BOOL isGKVoiceChat;	// G=0x5fb91; S=0x5fba1; @synthesize
@property(assign, nonatomic) BOOL requiresWifi;	// G=0x5fb71; S=0x5fb81; @synthesize
@property(assign, nonatomic) int natType;	// G=0x5fb51; S=0x5fb61; @synthesize
@property(assign, nonatomic) unsigned lastSentAudioSampleTime;	// G=0x5fb31; S=0x5fb41; @synthesize
@property(assign) int audioTimeStampDelta;	// G=0x5fb11; S=0x5fb21; @synthesize
@property(copy, nonatomic) NSString *peerCN;	// G=0x5fb01; S=0x62739; @synthesize
@property(assign, nonatomic) double packetLossRate;	// G=0x5fad5; S=0x5faed; @synthesize
@property(assign, nonatomic) double networkConditionsTimeoutInSeconds;	// G=0x5faa9; S=0x5fac1; @synthesize
@property(assign, nonatomic) unsigned roundTripTime;	// G=0x5fa89; S=0x5fa99; @synthesize
@property(assign, nonatomic) int signalStrength;	// G=0x5fa69; S=0x5fa79; @synthesize
@property(assign, nonatomic) int signalRaw;	// G=0x5fa49; S=0x5fa59; @synthesize
@property(assign, nonatomic) int signalGrade;	// G=0x5fa29; S=0x5fa39; @synthesize
@property(assign) NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;	// G=0x5fa19; S=0x60631; @synthesize
@property(assign, nonatomic) float packetLateAndMissingRatio;	// G=0x5f9f9; S=0x5fa09; @synthesize
@property(copy, nonatomic) NSString *sessionID;	// G=0x5f9e9; S=0x62715; @synthesize
@property(assign) BOOL shouldTimeoutPackets;	// G=0x5f9c9; S=0x5f9d9; @synthesize
@property(assign, nonatomic) BOOL useAFRC;	// G=0x5f9b9; S=0x5f829; @synthesize
@property(assign, nonatomic) BOOL shouldSendAudio;	// G=0x5f9a9; S=0x66501; @synthesize
@property(assign) CGSize localScreenPortraitAspectRatio;	// G=0x65189; S=0x65155; @synthesize
@property(assign) CGSize localScreenLandscapeAspectRatio;	// G=0x651e1; S=0x651ad; @synthesize
@property(assign) CGSize remoteScreenPortraitAspectRatio;	// G=0x65239; S=0x65205; @synthesize
@property(assign) CGSize remoteScreenLandscapeAspectRatio;	// G=0x65291; S=0x6525d; @synthesize
@property(assign, nonatomic) BOOL isStarted;	// G=0x5f989; S=0x5f999; @synthesize
@property(retain) NSData *srtpKeyBytes;	// G=0x626c1; S=0x626f1; @synthesize
@property(readonly, assign, nonatomic) double networkQuality;	// G=0x5f839; 
@property(readonly, assign, nonatomic) BOOL isCaller;	// G=0x5f94d; 
+ (id)keyPathsForValuesAffectingNetworkQuality;	// 0x60a69
- (id)init;	// 0x645f1
// declared property setter: - (void)setUseAFRC:(BOOL)afrc;	// 0x5f829
- (BOOL)isBetterForIncomingSIPThanOtherSession:(id)incomingSIPThanOtherSession;	// 0x60525
- (void)handleCellDowngrade:(BOOL)downgrade;	// 0x605e9
- (void)pullLocalCellCondition;	// 0x67c09
- (void)sendCellCondition:(BOOL)condition;	// 0x67b2d
// declared property setter: - (void)setQualityDelegate:(id)delegate;	// 0x60631
// declared property getter: - (double)networkQuality;	// 0x5f839
- (void)updateLastReceivedPacketWithTimestamp:(double)timestamp;	// 0x672a5
- (void)updateLastReceivedPacket:(BOOL)packet;	// 0x67261
- (BOOL)handshakeComplete:(SSLContextRef)complete withError:(CFErrorRef *)error;	// 0x66c69
- (void)dealloc;	// 0x668c9
- (void)timeoutUnfinishedConnection;	// 0x66845
- (int)encodeAudio:(void *)audio numInputBytes:(int)bytes outputBytes:(void *)bytes3 numOutputBytes:(int)bytes4;	// 0x667ad
- (BOOL)bundleAudio:(void *)audio numInputBytes:(int)bytes;	// 0x666ad
// declared property getter: - (BOOL)isCaller;	// 0x5f94d
- (BOOL)startConnectionWithParticipantID:(id)participantID callID:(int)anId usingBlob:(id)blob isCaller:(BOOL)caller capabilities:(id)capabilities doEncoding:(BOOL)encoding error:(id *)error;	// 0x607e9
- (BOOL)updateRTCPReport;	// 0x665d9
- (int)rtcpDescriptor;	// 0x66565
- (BOOL)disconnect:(id)disconnect didRemoteCancel:(BOOL)cancel;	// 0x62905
- (BOOL)createConnectionDataForParticipantID:(id)participantID pCallID:(int *)anId error:(id *)error;	// 0x60861
// declared property setter: - (void)setShouldSendAudio:(BOOL)sendAudio;	// 0x66501
// declared property setter: - (void)setPacketsPerBundle:(int)bundle;	// 0x66405
- (BOOL)isCallOngoing;	// 0x5f95d
- (BOOL)setPauseAudio:(BOOL)audio force:(BOOL)force error:(id *)error;	// 0x661a9
- (BOOL)setPauseAudio:(BOOL)audio error:(id *)error;	// 0x6090d
- (BOOL)setPauseVideo:(BOOL)video force:(BOOL)force error:(id *)error;	// 0x66149
- (BOOL)setPauseVideo:(BOOL)video error:(id *)error;	// 0x6092d
- (BOOL)stillWantsToRelay;	// 0x6094d
- (void)processRelayRequestResponseDict:(id)dict didOriginateRequest:(BOOL)request;	// 0x65909
- (void)processRelayUpdateDict:(id)dict didOriginateRequest:(BOOL)request;	// 0x65321
- (void)processCancelRelayRequest:(id)request didOriginateRequest:(BOOL)request2;	// 0x62a7d
- (void)updateVideoThrottleDuration:(double)duration;	// 0x652b5
// declared property getter: - (id)srtpKeyBytes;	// 0x626c1
// declared property setter: - (void)setSrtpKeyBytes:(id)bytes;	// 0x626f1
// declared property getter: - (BOOL)isStarted;	// 0x5f989
// declared property setter: - (void)setIsStarted:(BOOL)started;	// 0x5f999
// declared property getter: - (CGSize)remoteScreenLandscapeAspectRatio;	// 0x65291
// declared property setter: - (void)setRemoteScreenLandscapeAspectRatio:(CGSize)ratio;	// 0x6525d
// declared property getter: - (CGSize)remoteScreenPortraitAspectRatio;	// 0x65239
// declared property setter: - (void)setRemoteScreenPortraitAspectRatio:(CGSize)ratio;	// 0x65205
// declared property getter: - (CGSize)localScreenLandscapeAspectRatio;	// 0x651e1
// declared property setter: - (void)setLocalScreenLandscapeAspectRatio:(CGSize)ratio;	// 0x651ad
// declared property getter: - (CGSize)localScreenPortraitAspectRatio;	// 0x65189
// declared property setter: - (void)setLocalScreenPortraitAspectRatio:(CGSize)ratio;	// 0x65155
// declared property getter: - (BOOL)shouldSendAudio;	// 0x5f9a9
// declared property getter: - (BOOL)useAFRC;	// 0x5f9b9
// declared property getter: - (BOOL)shouldTimeoutPackets;	// 0x5f9c9
// declared property setter: - (void)setShouldTimeoutPackets:(BOOL)timeoutPackets;	// 0x5f9d9
// declared property getter: - (id)sessionID;	// 0x5f9e9
// declared property setter: - (void)setSessionID:(id)anId;	// 0x62715
// declared property getter: - (float)packetLateAndMissingRatio;	// 0x5f9f9
// declared property setter: - (void)setPacketLateAndMissingRatio:(float)ratio;	// 0x5fa09
// declared property getter: - (id)qualityDelegate;	// 0x5fa19
// declared property getter: - (int)signalGrade;	// 0x5fa29
// declared property setter: - (void)setSignalGrade:(int)grade;	// 0x5fa39
// declared property getter: - (int)signalRaw;	// 0x5fa49
// declared property setter: - (void)setSignalRaw:(int)raw;	// 0x5fa59
// declared property getter: - (int)signalStrength;	// 0x5fa69
// declared property setter: - (void)setSignalStrength:(int)strength;	// 0x5fa79
// declared property getter: - (unsigned)roundTripTime;	// 0x5fa89
// declared property setter: - (void)setRoundTripTime:(unsigned)time;	// 0x5fa99
// declared property getter: - (double)networkConditionsTimeoutInSeconds;	// 0x5faa9
// declared property setter: - (void)setNetworkConditionsTimeoutInSeconds:(double)seconds;	// 0x5fac1
// declared property getter: - (double)packetLossRate;	// 0x5fad5
// declared property setter: - (void)setPacketLossRate:(double)rate;	// 0x5faed
// declared property getter: - (id)peerCN;	// 0x5fb01
// declared property setter: - (void)setPeerCN:(id)cn;	// 0x62739
// declared property getter: - (int)audioTimeStampDelta;	// 0x5fb11
// declared property setter: - (void)setAudioTimeStampDelta:(int)delta;	// 0x5fb21
// declared property getter: - (unsigned)lastSentAudioSampleTime;	// 0x5fb31
// declared property setter: - (void)setLastSentAudioSampleTime:(unsigned)time;	// 0x5fb41
// declared property getter: - (int)natType;	// 0x5fb51
// declared property setter: - (void)setNatType:(int)type;	// 0x5fb61
// declared property getter: - (BOOL)requiresWifi;	// 0x5fb71
// declared property setter: - (void)setRequiresWifi:(BOOL)wifi;	// 0x5fb81
// declared property getter: - (BOOL)isGKVoiceChat;	// 0x5fb91
// declared property setter: - (void)setIsGKVoiceChat:(BOOL)chat;	// 0x5fba1
// declared property getter: - (BOOL)audioIsPaused;	// 0x5fbb1
// declared property getter: - (BOOL)videoIsPaused;	// 0x5fbc1
// declared property getter: - (int)audioBundleHeaderBitrate;	// 0x5fbd1
// declared property getter: - (int)audioHeaderBitrate;	// 0x5fbe1
// declared property getter: - (id)mutedPeers;	// 0x5fbf1
// declared property setter: - (void)setMutedPeers:(id)peers;	// 0x6275d
// declared property getter: - (int)bandwidthDownstream;	// 0x5fc01
// declared property setter: - (void)setBandwidthDownstream:(int)downstream;	// 0x5fc11
// declared property getter: - (int)bandwidthUpstream;	// 0x5fc21
// declared property setter: - (void)setBandwidthUpstream:(int)upstream;	// 0x5fc31
// declared property getter: - (BOOL)useCompressedConnectionData;	// 0x5fc41
// declared property setter: - (void)setUseCompressedConnectionData:(BOOL)data;	// 0x5fc51
// declared property getter: - (unsigned char)inputMeter;	// 0x5fc61
// declared property setter: - (void)setInputMeter:(unsigned char)meter;	// 0x5fc71
// declared property getter: - (BOOL)useUEP;	// 0x5fc81
// declared property setter: - (void)setUseUEP:(BOOL)uep;	// 0x5fc91
// declared property getter: - (BOOL)useControlByte;	// 0x5fca1
// declared property setter: - (void)setUseControlByte:(BOOL)byte;	// 0x5fcb1
// declared property getter: - (int)preferredAudioCodec;	// 0x5fcc1
// declared property setter: - (void)setPreferredAudioCodec:(int)codec;	// 0x5fcd1
// declared property getter: - (BOOL)canBundleAudio;	// 0x5fce1
// declared property setter: - (void)setCanBundleAudio:(BOOL)audio;	// 0x5fcf1
// declared property getter: - (int)packetsPerBundle;	// 0x5fd01
// declared property getter: - (int)bundledPackets;	// 0x5fd11
// declared property setter: - (void)setBundledPackets:(int)packets;	// 0x5fd21
// declared property getter: - (char *)bundleBuffer;	// 0x5fd31
// declared property getter: - (unsigned)lastReceived;	// 0x5fd41
// declared property setter: - (void)setLastReceived:(unsigned)received;	// 0x5fd51
// declared property getter: - (id)ringBuf;	// 0x5fd61
// declared property setter: - (void)setRingBuf:(id)buf;	// 0x62785
// declared property getter: - (tagHANDLE *)hAFRC;	// 0x5fd71
// declared property setter: - (void)setHAFRC:(tagHANDLE *)hafrc;	// 0x5fd81
// declared property getter: - (tagHANDLE *)hMediaQueue;	// 0x5fd91
// declared property setter: - (void)setHMediaQueue:(tagHANDLE *)queue;	// 0x5fda1
// declared property getter: - (int)numBufferBytesAvailable;	// 0x5fdb1
// declared property setter: - (void)setNumBufferBytesAvailable:(int)available;	// 0x5fdc1
// declared property getter: - (int)numEncodedBytes;	// 0x5fdd1
// declared property setter: - (void)setNumEncodedBytes:(int)bytes;	// 0x5fde1
// declared property getter: - (tagHANDLE *)decodeHandle;	// 0x5fdf1
// declared property setter: - (void)setDecodeHandle:(tagHANDLE *)handle;	// 0x5fe01
// declared property getter: - (tagHANDLE *)encodeHandle;	// 0x5fe11
// declared property setter: - (void)setEncodeHandle:(tagHANDLE *)handle;	// 0x5fe21
// declared property getter: - (id)rtChannel;	// 0x5fe31
// declared property setter: - (void)setRtChannel:(id)channel;	// 0x5fe41
// declared property getter: - (BOOL)receivedSIPInvite;	// 0x5fe51
// declared property setter: - (void)setReceivedSIPInvite:(BOOL)invite;	// 0x5fe61
// declared property getter: - (BOOL)isWaitingForICEResult;	// 0x5fe71
// declared property setter: - (void)setIsWaitingForICEResult:(BOOL)iceresult;	// 0x5fe81
// declared property getter: - (BOOL)isAudioRunning;	// 0x5fe91
// declared property getter: - (id)delegate;	// 0x626d9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x627ad
// declared property getter: - (int)samplesPerFrame;	// 0x5fea1
// declared property setter: - (void)setSamplesPerFrame:(int)frame;	// 0x5feb1
// declared property getter: - (int)sampleRate;	// 0x5fec1
// declared property setter: - (void)setSampleRate:(int)rate;	// 0x5fed1
// declared property getter: - (int)payload;	// 0x5fee1
// declared property setter: - (void)setPayload:(int)payload;	// 0x5fef1
// declared property getter: - (int)videoPayload;	// 0x5ff01
// declared property setter: - (void)setVideoPayload:(int)payload;	// 0x5ff11
// declared property getter: - (int)audioBundle;	// 0x5ff21
// declared property setter: - (void)setAudioBundle:(int)bundle;	// 0x5ff31
// declared property getter: - (BOOL)didUseICE;	// 0x5ff41
// declared property setter: - (void)setDidUseICE:(BOOL)useICE;	// 0x5ff51
// declared property getter: - (int)state;	// 0x5ff61
// declared property setter: - (void)setState:(int)state;	// 0x5ff71
// declared property getter: - (tagCONNRESULT)connectionResult;	// 0x6512d
// declared property setter: - (void)setConnectionResult:(tagCONNRESULT)result;	// 0x64f99
// declared property getter: - (tagHANDLE *)rtpHandle;	// 0x5ff81
// declared property setter: - (void)setRtpHandle:(tagHANDLE *)handle;	// 0x5ff91
// declared property getter: - (id)remoteCallInfo;	// 0x5ffa1
// declared property setter: - (void)setRemoteCallInfo:(id)info;	// 0x627d1
// declared property getter: - (id)localCallInfo;	// 0x5ffb1
// declared property setter: - (void)setLocalCallInfo:(id)info;	// 0x627f9
@end

@interface VCCallSession (PrivateMethods)
- (void)connectionResultFromSIP:(tagSIPCallbackData *)sip;	// 0x6bdd5
- (void)setupDTLSDefaults;	// 0x63e71
- (BOOL)startConnectionWithParticipantID:(id)participantID callID:(int)anId usingBlob:(id)blob isCaller:(BOOL)caller capabilities:(id)capabilities doEncoding:(BOOL)encoding useRelay:(BOOL)relay error:(id *)error;	// 0x6c20d
- (SecIdentity *)retreiveIdentity;	// 0x6c9b9
- (void)notifyDelegateAndEndCall:(int)call didRemoteCancel:(BOOL)cancel error:(id)error;	// 0x687c9
- (int)calculateSIPEndAction:(BOOL)action currentState:(int)state error:(id)error;	// 0x61935
- (void)reportDashboardEndResult;	// 0x67cc1
- (void)cleanupMedia;	// 0x6ca8d
- (void)startPausedHeartbeat;	// 0x6cd41
- (void)stopPausedHeartbeat;	// 0x6ce99
- (BOOL)createConnectionDataForParticipantID:(id)participantID pCallID:(int *)anId error:(id *)error useRelay:(BOOL)relay;	// 0x6cf09
- (void)sendTimings;	// 0x67da5
- (void)remoteBitrateStateUpdate:(BOOL)update withSequence:(unsigned long)sequence;	// 0x6815d
- (void)remotePauseDidChangeToState:(BOOL)remotePause withSequence:(unsigned long)sequence forVideo:(BOOL)video;	// 0x681cd
- (void)processSIPMessage:(char *)message msgOut:(char *)anOut optional:(void *)optional confIndex:(int *)index;	// 0x6d6b9
- (void)lock;	// 0x6aaa5
- (void)unlock;	// 0x6aab9
- (void)resetState;	// 0x62c3d
- (void)inviteeICEResultTimer:(float)timer shouldBailIfRelay:(BOOL)relay;	// 0x69125
- (BOOL)createSDP:(int *)sdp audioPayloadCount:(int)count videoPayloadTypes:(int *)types videoPayloadCount:(int)count4 maxBandwidth:(int)bandwidth imageSizesSend:(imageTag *)send imageSendCount:(int)count7 imageSizesRecv:(imageTag *)recv imageRecvCount:(int)count9 sdp:(char *)sdp10 numSDPBytes:(int *)bytes error:(id *)error;	// 0x6df95
- (int)handleIncomingWithCallID:(int)callID msgIn:(const char *)anIn msgOut:(char *)anOut optional:(void *)optional confIndex:(int *)index error:(id *)error;	// 0x6e991
- (BOOL)getForcedPayload:(int *)payload;	// 0x6be9d
- (void)getAllPayloadsForAudio:(int **)audio count:(int *)count;	// 0x6e5bd
- (void)getAllPayloadsForVideo:(int **)video count:(int *)count;	// 0x6e62d
- (BOOL)sendSIPInviteWithError:(id *)error;	// 0x6ef51
- (BOOL)is3GCall;	// 0x5ffc1
- (void)launchDeadlineExitTimer;	// 0x69399
- (BOOL)createRTPHandles:(id *)handles;	// 0x6f821
- (BOOL)createMediaQueueHandle:(id *)handle;	// 0x6f9d5
- (BOOL)startRTPWithError:(id *)error;	// 0x6fb35
- (BOOL)negotiatePayloadWithError:(id *)error;	// 0x6fca5
- (BOOL)negotiateMaxBandwidth:(int *)bandwidth;	// 0x62d7d
- (BOOL)chooseVideoPayload:(int *)payload count:(int)count;	// 0x61c49
- (BOOL)setRTPDestinationWithError:(id *)error;	// 0x70a41
- (BOOL)setRTPPayloadWithError:(id *)error;	// 0x70b85
- (BOOL)setupCallerRTPChannelWithError:(id *)error;	// 0x62e71
- (BOOL)sipConnectWithError:(id *)error;	// 0x6e691
- (void)stopAudioIOProc:(id)proc;	// 0x70d2d
- (void)stopAudio;	// 0x61d19
- (BOOL)startAudio:(id *)audio;	// 0x63fc1
- (BOOL)setupAudioCookies;	// 0x70e19
- (BOOL)setupAudioEncoder;	// 0x70eb9
- (void)calculateAudioTxBitrate;	// 0x63119
- (void)setupAACELDBitrate;	// 0x711ed
- (void)setAudioBitrate:(int)bitrate;	// 0x71399
- (BOOL)allocateBundleBuffer;	// 0x6c189
- (BOOL)startVideo:(BOOL)video error:(id *)error;	// 0x631c5
- (BOOL)stopVideo:(BOOL)video error:(id *)error;	// 0x63781
- (void)getVideoSettings:(int)settings width:(int *)width height:(int *)height framerate:(int *)framerate bitRate:(int *)rate;	// 0x61d59
- (BOOL)startMediaQueue:(id *)queue;	// 0x714bd
- (BOOL)stopMediaQueue:(id *)queue;	// 0x71535
- (BOOL)startAFRC:(id *)afrc;	// 0x71559
- (BOOL)stopAFRC:(id *)afrc;	// 0x71a8d
- (void)setupAACELDPayload;	// 0x620b9
- (BOOL)setupAudioCodec;	// 0x621a9
- (BOOL)choosePayload:(int *)payload count:(int)count;	// 0x63921
- (void)shutdownVoiceChatFromRemoteSIPSignal:(int)remoteSIPSignal;	// 0x68989
- (void)sipConnectThreadProc:(id)proc;	// 0x71ab9
- (unsigned)getAudioRTPID;	// 0x726e1
- (unsigned)getVideoRTPID;	// 0x72761
- (void)stopLoopback;	// 0x62435
- (void)stopLoopbackProc:(id)proc;	// 0x727d5
- (void)doSipEndProc:(id)proc;	// 0x624b5
- (void)doSipEndAction:(int)action callID:(int)anId error:(id)error;	// 0x72931
- (unsigned)connectionType;	// 0x6255d
- (void)notifyDelegateSessionStarted;	// 0x68c1d
- (BOOL)doBandwidthDetection:(tagHANDLE *)detection error:(id *)error;	// 0x72aa5
- (void)initiateRelayRequest;	// 0x68c8d
- (id)createInitiateRelayDictionary;	// 0x72d65
- (id)createRelayUpdateDictionary:(id)dictionary;	// 0x73045
- (long)Conference_SetBWEstMode:(bool)mode bFakeLargeFrameMode:(bool)mode2;	// 0x73409
- (void)setLocalIdentityForKeyExchange;	// 0x73559
- (void)logIdentity:(SecIdentity *)identity;	// 0x736bd
- (char *)localFeaturesString;	// 0x7385d
- (BOOL)setMatchedFeaturesString:(char *)string remoteFeaturesString:(char *)string2;	// 0x73985
- (char *)matchedFeaturesString;	// 0x60059
- (BOOL)findFeatureString:(char *)string value:(char *)value withPrefix:(char *)prefix;	// 0x73c95
- (void)adjustBitrateForConnectionType;	// 0x6266d
- (unsigned)maxBitrateForConnectionType;	// 0x63cf1
- (void)logConnectionSuccess;	// 0x68da9
@end

@interface VCCallSession (Callbacks)
- (unsigned)connectionResultCallback:(tagCONNRESULT *)callback didReceiveICEPacket:(BOOL)packet didUseRelay:(BOOL)relay;	// 0x69bf5
- (int)sipCallback:(int)callback callID:(int)anId msgIn:(const char *)anIn msgOut:(char *)anOut optional:(void *)optional confIndex:(int *)index;	// 0x6aacd
@end

@interface VCCallSession (Loopback) <LoopbackSocketTunnelDelegate>
- (void)setupLoopback;	// 0x694b5
- (void)receivedRealTimeData:(id)data fromParticipantID:(id)participantID;	// 0x69a39
- (BOOL)createTCPTunnelForParticipantID:(id)participantID relayDictionary:(id)dictionary didOriginateRequest:(BOOL)request relayType:(unsigned char)type error:(id *)error;	// 0x60ad1
- (void)deleteTCPTunnel;	// 0x615b5
- (void)loopbackSocketTunnel:(id)tunnel receivedData:(id)data from:(tagIPPORT *)from;	// 0x61619
- (id)description;	// 0x61689
- (void)resetLoopback;	// 0x61721
@end
