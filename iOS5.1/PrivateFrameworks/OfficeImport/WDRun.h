/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WDParagraph;

@interface WDRun : NSObject
{
    WDParagraph *mParagraph;
}

- (int)runType;
- (id)paragraph;
- (id)init;
- (id)initWithParagraph:(id)arg1;
- (void)dealloc;
- (BOOL)isEmpty;
- (void)clearProperties;

@end
