/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSMutableArray;

@interface SKUIStoreDialogController : NSObject <UIAlertViewDelegate>
{
    NSMutableArray *_alerts;
    NSMutableArray *_dialogs;
}

- (void).cxx_destruct;
- (void)_performActionForDialog:(id)arg1 buttonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)presentDialog:(id)arg1;
- (id)init;

@end

