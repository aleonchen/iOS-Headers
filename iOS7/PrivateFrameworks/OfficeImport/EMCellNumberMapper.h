/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class EDStyle;

// Not exported
@interface EMCellNumberMapper : CMMapper
{
    double edValue;
    EDStyle *edStyle;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)insertRedSpanIfNegativeAt:(id)arg1;
- (id)formatValueAsNumber;
- (id)initWithDoubleValue:(double)arg1 style:(id)arg2 parent:(id)arg3;

@end

