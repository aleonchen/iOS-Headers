/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString, OADBackground, OADTableStyle, PDAnimation, PDTransition;

@interface PDSlideBase : NSObject
{
    NSString *mName;
    NSArray *mDrawables;
    OADBackground *mBackground;
    PDAnimation *mAnimation;
    PDTransition *mTransition;
    OADTableStyle *mDefaultTableStyle;
    unsigned int mIsHidden:1;
    unsigned int mIsDoneWithContent:1;
}

+ (int)inheritedPlaceholderType:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)name;
- (void)setName:(id)arg1;
- (id)drawables;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3;
- (void)setDrawables:(id)arg1 defaultTextListStyle:(id)arg2;
- (id)background;
- (void)setBackground:(id)arg1;
- (id)animation;
- (id)transition;
- (void)setTransition:(id)arg1;
- (id)defaultTheme;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(BOOL)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentSlideBase;
- (id)colorScheme;
- (id)fontScheme;
- (id)colorMap;
- (id)styleMatrix;
- (BOOL)isHidden;
- (void)setIsHidden:(BOOL)arg1;
- (id)defaultTableStyle;
- (void)setDefaultTableStyle:(id)arg1;
- (void)doneWithContent;
- (id)drawingTheme;
- (BOOL)hasPpt10Animations;
- (BOOL)hasPpt9Animations;
- (void)generatePpt9Animations:(id)arg1;

@end
