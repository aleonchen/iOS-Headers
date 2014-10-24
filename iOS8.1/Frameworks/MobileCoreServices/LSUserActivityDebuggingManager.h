//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUserDefaults;

@interface LSUserActivityDebuggingManager : NSObject
{
    struct __asl_object_s *_client;
    NSUserDefaults *_userDefaults;
}

+ (id)hexDataDump:(id)arg1;
+ (void)log:(int)arg1 format:(id)arg2;
+ (id)sharedDebugManager;
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property struct __asl_object_s *client; // @synthesize client=_client;
- (void)logCommon:(unsigned int)arg1 format:(id)arg2 args:(char *)arg3;
- (BOOL)shouldLogCommon:(unsigned int)arg1;
- (void)log:(int)arg1 file:(const char *)arg2 line:(long)arg3 format:(id)arg4;
- (void)log:(int)arg1 format:(id)arg2;
- (void)log:(int)arg1 format:(id)arg2 args:(char *)arg3 file:(const char *)arg4 line:(long)arg5;
- (void)log:(int)arg1 format:(id)arg2 args:(char *)arg3;
- (BOOL)shouldLog:(int)arg1;
- (BOOL)logFileEnabled;
@property(readonly) BOOL loggingEnabled;
- (id)init;

@end
