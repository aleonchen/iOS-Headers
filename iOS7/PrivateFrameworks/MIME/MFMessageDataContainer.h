/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface MFMessageDataContainer : NSObject
{
    NSData *_data;
    _Bool _partial;
    _Bool _incomplete;
}

- (void)dealloc;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 partial:(_Bool)arg2 incomplete:(_Bool)arg3;

@end

