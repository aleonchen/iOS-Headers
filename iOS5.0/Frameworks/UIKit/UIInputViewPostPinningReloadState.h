/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIResponder;

@interface UIInputViewPostPinningReloadState : NSObject
{
    UIResponder *_responderPreventedFromSettingInputViews;
}

+ (id)stateWithResponder:(id)arg1;
@property(retain, nonatomic) UIResponder *responderToReload; // @synthesize responderToReload=_responderPreventedFromSettingInputViews;
- (void)dealloc;

@end

