/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSExternalRefCountedData : NSObject
{
    int _cd_rc;
    int _externalReferenceCount;
    struct _externalRefFlags_st {
        unsigned int _invalidToOnes:1;
        unsigned int _hasTemporaryID:1;
        unsigned int _backgroundDealloc:1;
        unsigned int _reservedFlags:1;
        unsigned int _virtualfk_count:14;
        unsigned int _ordkey_count:14;
    } _externalRefFlags;
    id _toManyMap;
    double _birth;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned int)arg1 andTimestamp:(double)arg2;
- (id)retain;
- (void)release;
- (unsigned int)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (unsigned int)options;
- (void)incrementRefCount;
- (int)decrementRefCount;
- (int)externalReferenceCount;
- (void)incrementExternalReferenceCount:(int)arg1;
- (id)relationshipCaches;
- (void)setRelationshipCaches:(id)arg1;
- (unsigned int)optionsForKey:(id)arg1;
- (id)relatedIDsForKey:(id)arg1;
- (double)timestampForKey:(id)arg1;
- (void)setRelatedIDs:(id)arg1 forKey:(id)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;

@end

