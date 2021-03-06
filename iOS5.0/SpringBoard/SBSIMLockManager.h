/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "RadiosPreferencesDelegate-Protocol.h"

@class NSString, RadiosPreferences, SBSIMLockAlertItem, SBSIMLockEntryAlert;

@interface SBSIMLockManager : NSObject <RadiosPreferencesDelegate>
{
    BOOL _isInitialUpdate;
    BOOL _isBrickedDevice;
    int _status;
    SBSIMLockAlertItem *_currentAlert;
    SBSIMLockEntryAlert *_lockEntryAlert;
    NSString *_languageCode;
    RadiosPreferences *_radiosPrefs;
    BOOL _hasHadSIMWhileNotBricked;
    BOOL _wasActivated;
    BOOL _neededUIM;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (BOOL)_hopelesslyPUKLocked;
- (int)_CTToSBSIMStatus:(struct __CFString *)arg1;
- (int)_statusFromCT;
- (void)lockEntryAlertDismissed:(id)arg1;
- (void)alertItemDismissed:(id)arg1;
- (BOOL)_shouldSuppressAlert;
- (void)_displayLaunched:(id)arg1;
- (void)repopAlert;
- (void)attemptUnlock;
- (void)_updateToStatus:(int)arg1;
- (void)_tryToUpdateStatus;
- (void)airplaneModeChanged;
- (void)_handlePromptForUnlock;
- (void)_tearDownAlertAndUpdateStatus;
- (void)_updateSIMStatus:(struct __CFString *)arg1 withOptions:(struct __CFDictionary *)arg2;
- (int)pinLockAttemptsRemaining;
- (int)pukLockAttemptsRemaining;
- (void)_initialUpdate;
- (void)_activationDidChange;
- (void)_telephonyDidRestart;
- (void)_postponementDidChange;
- (void)registerForAlerts;
- (int)status;
- (id)languageCode;

@end

