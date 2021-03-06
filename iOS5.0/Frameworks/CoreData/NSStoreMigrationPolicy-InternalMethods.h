/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSStoreMigrationPolicy.h>

@interface NSStoreMigrationPolicy (InternalMethods)
+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)arg1;
- (void)dealloc;
- (void)setPersistentStoreCoordinator:(id)arg1 sourceURL:(id)arg2 configuration:(id)arg3 metadata:(id)arg4 options:(id)arg5;
- (id)persistentStoreCoordinator;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (id)sourceURL;
- (void)setSourceURL:(id)arg1;
- (id)sourceType;
- (id)sourceConfiguration;
- (void)setSourceConfiguration:(id)arg1;
- (id)sourceMetadata;
- (void)setSourceMetadata:(id)arg1;
- (id)sourceOptions;
- (void)setSourceOptions:(id)arg1;
- (id)sourceModel;
- (void)setSourceModel:(id)arg1;
- (id)destinationModel;
- (id)mappingModel;
- (void)setMappingModel:(id)arg1;
- (id)destinationURL;
- (void)setDestinationURL:(id)arg1;
- (id)destinationType;
- (void)setDestinationType:(id)arg1;
- (id)destinationConfiguration;
- (void)setDestinationConfiguration:(id)arg1;
- (id)destinationOptions;
- (void)setDestinationOptions:(id)arg1;
- (id)migrationManager;
- (void)setMigrationManager:(id)arg1;
- (id)mappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id *)arg3;
- (id)destinationURLForMigration:(id)arg1 sourceURL:(id)arg2 sourceMetadata:(id)arg3 error:(id *)arg4;
- (id)destinationTypeForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id *)arg3;
- (id)destinationConfigurationForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id *)arg3;
- (id)destinationOptionsForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id *)arg3;
- (void)willPerformMigrationWithManager:(id)arg1;
- (BOOL)migrateStoreAtURL:(id)arg1 toURL:(id)arg2 storeType:(id)arg3 options:(id)arg4 withManager:(id)arg5 error:(id *)arg6;
- (void)didPerformMigrationWithManager:(id)arg1;
- (void)handleMigrationError:(id)arg1 inManager:(id)arg2;
- (id)addMigratedStoreToCoordinator:(id)arg1 withType:(id)arg2 configuration:(id)arg3 URL:(id)arg4 options:(id)arg5 error:(id *)arg6;
- (void)setResourceBundles:(id)arg1;
- (id)resourceBundles;
- (id)_gatherDataAndPerformMigration:(id *)arg1;
@end

