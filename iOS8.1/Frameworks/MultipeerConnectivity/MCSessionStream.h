//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCPeerID, MCResourceDownloader, MCResourceProgressObserver, NSMutableData, NSObject<OS_dispatch_source>, NSProgress, NSString, NSURL;

@interface MCSessionStream : NSObject
{
    BOOL _sourceSuspended;
    BOOL _progressUnbounded;
    MCPeerID *_peerID;
    NSString *_name;
    unsigned int _streamID;
    int state;
    int _fd;
    NSObject<OS_dispatch_source> *_source;
    NSMutableData *_incomingBuffer;
    NSURL *_url;
    NSProgress *_progress;
    CDUnknownBlockType _completionHandler;
    MCResourceDownloader *_urlDownloader;
    MCResourceProgressObserver *_observer;
}

@property(retain, nonatomic) MCResourceProgressObserver *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) MCResourceDownloader *urlDownloader; // @synthesize urlDownloader=_urlDownloader;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) BOOL progressUnbounded; // @synthesize progressUnbounded=_progressUnbounded;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableData *incomingBuffer; // @synthesize incomingBuffer=_incomingBuffer;
@property(nonatomic) BOOL sourceSuspended; // @synthesize sourceSuspended=_sourceSuspended;
@property(nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(nonatomic) int fd; // @synthesize fd=_fd;
@property(nonatomic) int state; // @synthesize state;
@property(nonatomic) unsigned int streamID; // @synthesize streamID=_streamID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
- (void)dealloc;

@end

