//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTCellularPlanClientDelegate.h"

@class NSData, NSMutableArray, NSString, NSXPCConnection;

@interface CTCellularPlanManager : NSObject <CTCellularPlanClientDelegate>
{
    NSMutableArray *_subscriptionCompletions;
    struct dispatch_queue_s *_queue;
    NSString *_lastSessionId;
    NSData *_cookieData;
    NSXPCConnection *_connection;
}

+ (id)sharedManager;
- (void)dealloc;
- (void)subscriptionDetailsRequestDidFail:(id)arg1;
- (void)subscriptionDetailsForCompletion:(id)arg1;
- (void)subscriptionDetailsDidUpdate:(id)arg1;
- (void)getCurrentPlanType:(CDUnknownBlockType)arg1;
- (void)openInternalUrlId:(int)arg1;
- (void)getDeviceInfo:(CDUnknownBlockType)arg1;
- (void)setUserInPurchaseFlow:(BOOL)arg1;
- (void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(BOOL)arg2;
- (void)setActivePlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startPurchaseWithPlanId:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startPurchaseWithPlanId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_subscriptionDetailsWithCompletion:(CDUnknownBlockType)arg1 andServerSync:(BOOL)arg2;
- (void)subscriptionDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (void)plansForRenewalWithCompletion:(CDUnknownBlockType)arg1;
- (void)plansWithCompletion:(CDUnknownBlockType)arg1 latitude:(id)arg2 longitude:(id)arg3;
- (void)plansWithCompletion:(CDUnknownBlockType)arg1;
- (void)_plansForRenewal:(BOOL)arg1 completion:(CDUnknownBlockType)arg2 latitude:(id)arg3 longitude:(id)arg4;
- (void)setIMEIPrefix:(id)arg1;
- (void)getIMEIPrefix:(CDUnknownBlockType)arg1;
- (void)connectionSettings:(CDUnknownBlockType)arg1;
- (void)isNewDataPlanCapable:(CDUnknownBlockType)arg1;
- (id)init;
- (void)_connect_sync;
- (void)_ensureConnected_sync;
- (void)_reconnect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
