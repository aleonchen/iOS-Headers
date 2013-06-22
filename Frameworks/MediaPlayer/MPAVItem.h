/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAsset, AVPlayerItem, MPAVController, MPAlternateTextTrack, MPAlternateTracks, MPImageCache, MPMediaItem, MPQueueFeeder, MPRadioAdTrack, NSArray, NSData, NSObject<OS_dispatch_queue>, NSString, NSURL, RadioAudioClip, RadioTrack;

@interface MPAVItem : NSObject
{
    AVAsset *_asset;
    NSObject<OS_dispatch_queue> *_assetQueue;
    AVPlayerItem *_avPlayerItem;
    BOOL _didAttemptToLoadAsset;
    BOOL _isAssetLoaded;
    MPQueueFeeder *_feeder;
    MPAVController *_player;
    float _soundCheckVolumeNormalization;
    NSArray *_chapterTimeMarkers;
    NSArray *_artworkTimeMarkers;
    NSArray *_urlTimeMarkers;
    NSArray *_closedCaptionTimeMarkers;
    MPAlternateTracks *_alternateTracks;
    double _cachedDuration;
    double _cachedPlayableDuration;
    NSArray *_cachedSeekableTimeRanges;
    double _seekableTimeRangesCacheTime;
    unsigned int _type;
    float _defaultPlaybackRate;
    unsigned int _indexInQueueFeeder;
    unsigned int _advancedDuringPlayback:1;
    unsigned int _handledFinishTime:1;
    unsigned int _hasPlayedThisSession:1;
    unsigned int _wasCountedAsSkipped:1;
    unsigned int _isStreamable:2;
    unsigned int _watchingAttributes:1;
    unsigned int _lyricsAvailable:1;
    unsigned int _timeMarkersNeedLoading:1;
    BOOL _hasPostedNaturalSizeChange;
    BOOL _limitReadAhead;
    float _loudnessInfoVolumeNormalization;
}

+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (id)URLFromPath:(id)arg1;
+ (void)setDefaultScaleMode:(unsigned int)arg1;
+ (unsigned int)defaultScaleMode;
@property(nonatomic) float loudnessInfoVolumeNormalization; // @synthesize loudnessInfoVolumeNormalization=_loudnessInfoVolumeNormalization;
@property(retain, nonatomic) NSArray *urlTimeMarkers; // @synthesize urlTimeMarkers=_urlTimeMarkers;
@property(nonatomic) float soundCheckVolumeNormalization; // @synthesize soundCheckVolumeNormalization=_soundCheckVolumeNormalization;
@property(nonatomic) __weak MPAVController *player; // @synthesize player=_player;
@property BOOL isAssetLoaded; // @synthesize isAssetLoaded=_isAssetLoaded;
@property(nonatomic) unsigned int indexInQueueFeeder; // @synthesize indexInQueueFeeder=_indexInQueueFeeder;
@property(nonatomic) float defaultPlaybackRate; // @synthesize defaultPlaybackRate=_defaultPlaybackRate;
@property(nonatomic) __weak MPQueueFeeder *feeder; // @synthesize feeder=_feeder;
@property(retain, nonatomic) NSArray *chapterTimeMarkers; // @synthesize chapterTimeMarkers=_chapterTimeMarkers;
@property(retain, nonatomic) NSArray *artworkTimeMarkers; // @synthesize artworkTimeMarkers=_artworkTimeMarkers;
@property(readonly, nonatomic) MPAlternateTracks *alternateTracks; // @synthesize alternateTracks=_alternateTracks;
- (void).cxx_destruct;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (void)reevaluateType;
- (id)localeForAssetTrack:(id)arg1;
- (void)_checkAllowsBlockingDurationCall;
- (void)setupPlaybackInfo;
- (void)setupEQPresetWithDefaultPreset:(int)arg1;
- (void)_clearAsset;
- (id)blockForDirectAVControllerNotificationReferencingItem:(SEL)arg1;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (void)_loadAssetProperties;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (id)_seekableTimeRanges;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_captionAppearanceSettingsChanged;
- (void)_itemAttributeAvailableKey:(id)arg1;
@property(readonly, nonatomic) double timeOfSeekableEnd;
@property(readonly, nonatomic) double timeOfSeekableStart;
@property(readonly, nonatomic) double playableDurationIfAvailable;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double durationIfAvailable;
- (double)_durationFromExternalMetadataIfAvailable;
@property(readonly, nonatomic) BOOL durationIsValid;
@property(readonly, nonatomic) double durationFromExternalMetadata;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(copy, nonatomic) NSString *videoID;
@property(readonly, nonatomic) NSString *localizedPositionInPlaylistString;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
@property(readonly, nonatomic) unsigned long long persistentID;
@property(readonly, nonatomic) float userRating;
@property(readonly, nonatomic) unsigned int type;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (id)closedCaptionTimeMarkerForTime:(double)arg1;
- (id)urlTimeMarkerForTime:(double)arg1;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2;
@property(retain, nonatomic) NSArray *closedCaptionTimeMarkers;
- (void)_loadTimeMarkersAsync;
- (void)_loadTimeMarkersBlocking;
@property(readonly, nonatomic) BOOL useEmbeddedChapterData;
- (id)titlesForTime:(double)arg1;
@property(readonly, nonatomic) NSArray *timedMetadataIfAvailable;
- (id)imageCacheRequestWithSize:(struct CGSize)arg1 time:(double)arg2 usePlaceholderAsFallback:(BOOL)arg3;
- (id)imageCacheRequestWithSize:(struct CGSize)arg1 time:(double)arg2;
@property(readonly, nonatomic) MPImageCache *imageCache;
- (void)_realoadEmbeddedTimeMarkers;
@property(readonly, nonatomic) BOOL supportsTrackInfo;
@property(readonly, nonatomic) BOOL supportsShare;
@property(readonly, nonatomic) BOOL supportsSkip;
@property(readonly, nonatomic) BOOL supportsLikeOrBan;
@property(readonly, nonatomic) BOOL supportsHistory;
@property(readonly, nonatomic) BOOL supportsAddStation;
@property(readonly, nonatomic) BOOL supportsRewindAndFastForward15Seconds;
@property(retain, nonatomic) MPAlternateTextTrack *selectedAlternateTextTrack;
- (void)setLimitReadAhead:(BOOL)arg1;
- (void)setOverrideDuration:(double)arg1;
@property(nonatomic) BOOL hasPlayedThisSession;
- (float)scanIntervalForLevel:(unsigned int)arg1 paused:(BOOL)arg2;
@property(nonatomic) CDStruct_1b6d18a9 forwardPlaybackEndTime;
- (void)replaceOutOfBandAlternateTextTracksWithArray:(id)arg1;
@property(readonly, nonatomic) struct CGSize presentationSize;
- (float)playbackRateForLevel:(unsigned int)arg1 direction:(int)arg2 paused:(BOOL)arg3;
@property(readonly, nonatomic) NSURL *podcastURL;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) NSString *mainTitle;
@property(readonly, nonatomic) BOOL allowsEQ;
@property(readonly, nonatomic) int customAVEQPreset;
- (BOOL)limitReadAhead;
@property(readonly, nonatomic, getter=isStreamable) BOOL streamable;
@property(readonly, nonatomic, getter=isAlwaysLive) BOOL alwaysLive;
@property(readonly, nonatomic) BOOL isAd;
- (id)inBandAlternateTextTracks;
@property(readonly, nonatomic) BOOL hasDisplayableText;
@property(readonly, nonatomic) BOOL hasDataForItemArtwork;
- (unsigned int)alternatesCountForTypes:(unsigned int)arg1;
- (BOOL)hasAlternatesForTypes:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *lyrics;
@property(readonly, nonatomic) NSString *displayableText;
@property(readonly, nonatomic) BOOL displayableTextLoaded;
@property(readonly, nonatomic) double currentTimeDisplayOverride;
@property(readonly, nonatomic) unsigned int countForQueueFeeder;
@property(readonly, nonatomic) NSString *genre;
@property(readonly, nonatomic, getter=isExplicitTrack) BOOL explicitTrack;
- (BOOL)isAssetURLValid;
- (BOOL)isPlaceholderForItem:(id)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
@property(readonly, nonatomic) unsigned int discCount;
@property(readonly, nonatomic) unsigned int discNumber;
@property(readonly, nonatomic) NSString *composer;
@property(readonly, nonatomic) BOOL canSeedGenius;
@property(readonly, nonatomic) NSString *artworkMIMEType;
@property(readonly, nonatomic) NSData *artworkImageData;
@property(readonly, nonatomic) unsigned int albumTrackCount;
@property(readonly, nonatomic) unsigned int albumTrackNumber;
@property(readonly, nonatomic) NSString *albumArtist;
@property(readonly, nonatomic) NSString *artist;
@property(readonly, nonatomic) NSString *album;
- (id)url;
- (id)path;
- (double)durationInSeconds;
- (double)_durationInSeconds;
- (BOOL)userSkippedPlayback;
- (void)setUserSkippedPlayback:(BOOL)arg1;
- (void)setUserAdvancedDuringPlayback:(BOOL)arg1;
- (void)setSubtitleTrackID:(int)arg1;
- (int)subtitleTrackID;
- (void)setRating:(float)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
@property(nonatomic) double playbackCheckpointCurrentTime;
- (void)notePlaybackFinishedByHittingEnd;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)resetBookkeeping;
@property(readonly, nonatomic) int status;
- (void)setPlayerItem:(id)arg1;
@property(readonly, nonatomic) AVPlayerItem *playerItem;
@property(readonly, nonatomic) AVAsset *asset;
- (void)_loadAssetAndPlayerItem;
- (void)loadAssetAndPlayerItem;
- (void)flushNowPlayingCaches;
- (void)dealloc;
- (void)_releaseAllTimeMarkers;
- (id)initWithAsset:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)init;
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned int)arg1;
@property(readonly, nonatomic) MPMediaItem *mediaItem;
- (id)_plistKeyForMPMediaItemProperty:(id)arg1;
@property(readonly, nonatomic) RadioTrack *radioTrack;
@property(readonly, nonatomic) BOOL isRadioItem;
- (void)getStationDictionaryForDerivedStationUsingArtist:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(id)arg2;
@property(readonly, nonatomic) MPRadioAdTrack *adTrack;
@property(readonly, nonatomic) BOOL wasDownloadedThisSession;
@property(readonly, nonatomic) BOOL isStreamingQuality;
@property(readonly, nonatomic) RadioAudioClip *audioClip;
- (BOOL)MPSPWD_prioritizeDownloadSession;

@end
