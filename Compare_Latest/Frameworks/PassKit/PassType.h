//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PassType : SQLiteEntity
{
}

+ (id)anyInDatabase:(id)arg1 withPassTypeID:(id)arg2;
+ (id)_passTypeIDPredicate:(id)arg1;
+ (id)insertPassTypeWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;
+ (id)_insertionDictionaryWithPassTypeID:(id)arg1 teamID:(id)arg2;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)databaseTable;
- (void)updateFrequencyScore:(double)arg1;
- (void)updateLastUpdateDate:(id)arg1;
- (void)updateLastPushDate:(id)arg1;
- (id)teamID;
- (id)passTypeID;
- (double)frequencyScore;
- (id)lastUpdateDate;
- (id)lastPushDate;
- (id)initWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;

@end
