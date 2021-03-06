//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface WDShading : NSObject <NSCopying>
{
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;
+ (id)nullShading;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setBackground:(id)arg1;
- (id)background;
- (void)setForeground:(id)arg1;
- (id)foreground;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)setShading:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToShading:(id)arg1;
- (void)dealloc;
- (id)init;

@end

