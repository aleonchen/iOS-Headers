/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput : AVCaptureOutput
{
    AVCaptureFileOutputInternal *_fileOutputInternal;
}

+ (void)initialize;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) NSURL *outputFileURL;
@property(readonly, nonatomic, getter=isRecording) BOOL recording;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;
- (BOOL)isRecordingPaused;
- (void)pauseRecording;
- (void)resumeRecording;
- (BOOL)pausesRecordingOnInterruption;
- (void)setPausesRecordingOnInterruption:(BOOL)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recordedDuration;
@property(readonly, nonatomic) long long recordedFileSize;
@property(nonatomic) CDStruct_1b6d18a9 maxRecordedDuration;
@property(nonatomic) long long maxRecordedFileSize;
@property(nonatomic) long long minFreeDiskSpaceLimit;

@end
