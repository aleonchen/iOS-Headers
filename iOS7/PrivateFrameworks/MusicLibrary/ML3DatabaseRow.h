/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3DatabaseResult;

@interface ML3DatabaseRow : NSObject
{
    ML3DatabaseResult *_parentResult;
}

@property(readonly, nonatomic) ML3DatabaseResult *parentResult; // @synthesize parentResult=_parentResult;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)arrayRepresentation;
- (id)dictionaryRepresentation;
- (id)valueForColumnIndex:(unsigned long long)arg1;
- (id)valueForColumnName:(id)arg1;
- (void)getBlobBytes:(const void **)arg1 outLength:(int *)arg2 forColumnIndex:(unsigned long long)arg3;
- (void)getBlobBytes:(const void **)arg1 outLength:(int *)arg2 forColumnName:(id)arg3;
- (id)numberForColumnIndex:(unsigned long long)arg1;
- (id)numberForColumnName:(id)arg1;
- (id)stringForColumnIndex:(unsigned long long)arg1;
- (id)stringForColumnName:(id)arg1;
- (long long)int64ForColumnIndex:(unsigned long long)arg1;
- (long long)int64ForColumnName:(id)arg1;
- (int)intForColumnIndex:(unsigned long long)arg1;
- (int)intForColumnName:(id)arg1;
- (double)doubleForColumnIndex:(unsigned long long)arg1;
- (double)doubleForColumnName:(id)arg1;
- (id)dataForColumnIndex:(unsigned long long)arg1;
- (id)dataForColumnName:(id)arg1;
- (unsigned long long)columnCount;
- (id)initWithParentResult:(id)arg1;
- (id)init;

@end

