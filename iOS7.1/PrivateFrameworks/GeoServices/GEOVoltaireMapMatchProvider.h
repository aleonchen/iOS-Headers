//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireMapMatchProvider : NSObject <PBRequesterDelegate>
{
    GEORequester *_requester;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _finishedHandler;
    BOOL _cancelled;
}

+ (void)setUsePersistentConnection:(BOOL)arg1;
+ (id)providerURL;
@property(retain, nonatomic) GEORequester *requester; // @synthesize requester=_requester;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterDidCancel:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)cancelRequest;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

