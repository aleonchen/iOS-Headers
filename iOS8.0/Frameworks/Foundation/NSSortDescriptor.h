//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _sortDescriptorFlags;
    NSString *_key;
    SEL _selector;
    id _selectorOrBlock;
}

+ (BOOL)supportsSecureCoding;
+ (id)_defaultSelectorName;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(CDUnknownBlockType)arg3;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2;
+ (void)initialize;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_isEqualToSortDescriptor:(id)arg1;
@property(readonly, retain) id reversedSortDescriptor;
- (int)compareObject:(id)arg1 toObject:(id)arg2;
- (id)description;
- (id)_selectorName;
- (void)_setSelectorName:(id)arg1;
@property(readonly) CDUnknownBlockType comparator;
@property(readonly) SEL selector;
@property(readonly) BOOL ascending;
- (void)_setAscending:(BOOL)arg1;
@property(readonly, copy) NSString *key;
- (void)_setKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_disallowEvaluation;
- (void)allowEvaluation;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(CDUnknownBlockType)arg3;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

