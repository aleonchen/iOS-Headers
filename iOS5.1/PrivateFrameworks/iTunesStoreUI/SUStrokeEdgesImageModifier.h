/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUImageModifier.h>

@class UIColor;

@interface SUStrokeEdgesImageModifier : SUImageModifier
{
    struct UIEdgeInsets _edgeInsets;
    BOOL _fitToImage;
    UIColor *_strokeColor;
    BOOL _strokeCurrentPath;
}

@property(nonatomic) BOOL strokeCurrentPath; // @synthesize strokeCurrentPath=_strokeCurrentPath;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) BOOL fitToImage; // @synthesize fitToImage=_fitToImage;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

