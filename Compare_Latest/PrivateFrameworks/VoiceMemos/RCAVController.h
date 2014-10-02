//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVController.h"

@interface RCAVController : AVController
{
    BOOL _hasInitializedRouteControllerSettings;
    BOOL _audioRouteNeedsReactivationFromSuspension;
    BOOL _resetVoiceMemoSettingsEnabledValue;
}

+ (void)recreateSharedAVInstance;
+ (void)_controllerConnectionInvalidatedNotification:(id)arg1;
+ (id)sharedController;
- (void)_reactivateAudioCategoryFromSuspension;
- (void)_deactivateAudioCategoryIfSuspended;
- (void)_switchBackToOutputRouteCategoryIgnoringApplicationState:(BOOL)arg1;
- (void)switchBackToOutputRouteCategory;
- (void)initializeOutputRouteCategory;

@end
