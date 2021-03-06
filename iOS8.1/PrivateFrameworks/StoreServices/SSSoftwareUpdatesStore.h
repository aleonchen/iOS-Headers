//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SSUpdatesDatabase, SSXPCConnection;

@interface SSSoftwareUpdatesStore : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    SSXPCConnection *_connection;
    SSUpdatesDatabase *_database;
    BOOL _didMigration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    void *_mobileCoreServices;
    BOOL _useLocalRead;
    BOOL _useLocalWrite;
}

+ (id)databasePath;
- (void)_readUsingSessionBlock:(CDUnknownBlockType)arg1;
- (BOOL)_migrateReadOnlyDatabase;
- (id)_copyUpdatesWithSession:(id)arg1 predicate:(id)arg2;
- (id)_copyUpdates;
- (id)updateWithItemIdentifier:(long long)arg1;
- (void)showApplicationBadgeForPendingUpdates;
- (void)removeUpdateBulletins;
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

