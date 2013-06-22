/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/NSColorStub.h>

@interface NSColorStub (CPColorAdditions)
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;
+ (id)colorWithBGR:(unsigned long)arg1;
+ (id)colorWithSystemColorID:(int)arg1;
+ (id)stringForSystemColorID:(int)arg1;
+ (id)stringForColor:(id)arg1;
- (CDStruct_a06f635e)ttColor;
- (id)rgbColor;
- (id)solidColoredBitmap:(struct CGSize)arg1;
- (id)solidColoredPngImage;
- (unsigned long)toBGR;
- (id)colorWithTintValue:(double)arg1;
- (id)colorWithShadeValue:(double)arg1;
@end
