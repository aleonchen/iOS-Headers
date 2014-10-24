//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CIReedSolomon : NSObject
{
    int _expTable[256];
    int _logTable[256];
    int _cachedGeneratorNum;
    int _memoryCapacity;
    CDStruct_84b23d7a *_cachedGenerators;
}

- (void)dealloc;
- (BOOL)encode:(int *)arg1 length:(int)arg2 bytes:(int)arg3;
- (CDStruct_84b23d7a *)buildGenerator:(int)arg1;
- (CDStruct_84b23d7a *)divide:(CDStruct_84b23d7a *)arg1 by:(CDStruct_84b23d7a *)arg2;
- (CDStruct_84b23d7a *)multiplyByMonomial:(CDStruct_84b23d7a *)arg1 degree:(int)arg2 coefficient:(int)arg3;
- (CDStruct_84b23d7a *)multiplyPoly:(CDStruct_84b23d7a *)arg1 with:(CDStruct_84b23d7a *)arg2;
- (CDStruct_84b23d7a *)addOrSubtractPoly:(CDStruct_84b23d7a *)arg1 with:(CDStruct_84b23d7a *)arg2;
- (CDStruct_84b23d7a *)copyPoly:(CDStruct_84b23d7a *)arg1;
- (int)polyCoefficient:(CDStruct_84b23d7a *)arg1 degree:(int)arg2;
- (void)clearPoly:(CDStruct_84b23d7a *)arg1;
- (BOOL)fillPoly:(CDStruct_84b23d7a *)arg1 coefficients:(int *)arg2 length:(int)arg3;
- (BOOL)isZero:(CDStruct_84b23d7a)arg1;
- (int *)coefficients:(CDStruct_84b23d7a)arg1;
- (int)Degree:(CDStruct_84b23d7a)arg1;
- (CDStruct_84b23d7a *)createMonomial:(int)arg1 coefficient:(int)arg2;
- (int)multiply:(int)arg1 with:(int)arg2;
- (int)inverse:(int)arg1;
- (int)Exp:(int)arg1;
- (int)addOrSubtract:(int)arg1 with:(int)arg2;
- (id)initReedSolomon;

@end
