/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSAttributedString, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface UIButton : UIControl <NSCoding>
{
    struct __CFDictionary *_contentLookup;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
    UIImageView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleView;
    BOOL _initialized;
    struct {
        unsigned int reversesTitleShadowWhenHighlighted:1;
        unsigned int adjustsImageWhenHighlighted:1;
        unsigned int adjustsImageWhenDisabled:1;
        unsigned int autosizeToFit:1;
        unsigned int disabledDimsImage:1;
        unsigned int showsTouchWhenHighlighted:1;
        unsigned int buttonType:8;
        unsigned int shouldHandleScrollerMouseEvent:1;
    } _buttonFlags;
    NSArray *_contentConstraints;
}

+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultNormalTitleColor;
+ (id)buttonWithType:(int)arg1;
+ (id)_defaultContentForType:(int)arg1 andState:(unsigned int)arg2;
@property(copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints; // @synthesize _contentConstraints;
@property(retain, nonatomic) UIColor *tintColor;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)viewForBaselineLayout;
- (void)updateConstraints;
- (id)_viewForBaselineLayout;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)_titleRectForContentRect:(struct CGRect)arg1 calculatePositionForEmptyTitle:(BOOL)arg2;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) NSAttributedString *currentAttributedTitle;
@property(readonly, nonatomic) UIImage *currentBackgroundImage;
@property(readonly, nonatomic) UIImage *currentImage;
@property(readonly, nonatomic) UIColor *currentTitleShadowColor;
@property(readonly, nonatomic) UIColor *currentTitleColor;
@property(readonly, nonatomic) NSString *currentTitle;
- (id)attributedTitleForState:(unsigned int)arg1;
- (id)backgroundImageForState:(unsigned int)arg1;
- (id)imageForState:(unsigned int)arg1;
- (id)titleShadowColorForState:(unsigned int)arg1;
- (id)titleColorForState:(unsigned int)arg1;
- (id)titleForState:(unsigned int)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setContentVerticalAlignment:(int)arg1;
- (void)setContentHorizontalAlignment:(int)arg1;
@property(readonly, nonatomic) UIImageView *imageView;
@property(readonly, nonatomic) UILabel *titleLabel;
- (BOOL)_likelyToHaveTitle;
- (BOOL)_canHaveTitle;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @dynamic imageEdgeInsets;
@property(nonatomic) BOOL showsTouchWhenHighlighted;
@property(nonatomic) BOOL adjustsImageWhenDisabled; // @dynamic adjustsImageWhenDisabled;
@property(nonatomic) BOOL adjustsImageWhenHighlighted; // @dynamic adjustsImageWhenHighlighted;
@property(nonatomic) BOOL reversesTitleShadowWhenHighlighted; // @dynamic reversesTitleShadowWhenHighlighted;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @dynamic titleEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @dynamic contentEdgeInsets;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) int buttonType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)_invalidateContentConstraints;
@property(nonatomic) struct CGSize titleShadowOffset;
@property(nonatomic) int lineBreakMode;
@property(retain, nonatomic) UIFont *font;
- (void)_titleAttributesChanged;
- (int)_buttonType;
- (void)_setButtonType:(int)arg1;
- (void)_setupTitleView;
- (void)_setupImageView;
- (id)_setupBackgroundView;
- (id)image;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)_titleView;
- (id)_imageView;
- (id)_backgroundView;
- (void)_setTitleShadowOffset:(struct CGSize)arg1;
- (struct CGSize)_titleShadowOffset;
- (void)_setLineBreakMode:(int)arg1;
- (int)_lineBreakMode;
- (void)_setFont:(id)arg1;
- (id)_font;
- (void)_setLetterpressStyle:(id)arg1 forState:(unsigned int)arg2;
- (void)crossfadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned int)arg2;
- (struct CGPoint)pressFeedbackPosition;
- (void)setShowPressFeedback:(BOOL)arg1;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (BOOL)autosizesToFit;
- (void)setAutosizesToFit:(BOOL)arg1;
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (id)_letterpressStyleForState:(unsigned int)arg1;
- (id)_attributedTitleForState:(unsigned int)arg1;
- (id)_shadowColorForState:(unsigned int)arg1;
- (id)_titleColorForState:(unsigned int)arg1;
- (id)_titleForState:(unsigned int)arg1;
- (id)_backgroundForState:(unsigned int)arg1 usesBackgroundForNormalState:(char *)arg2;
- (id)_imageForState:(unsigned int)arg1 usesImageForNormalState:(char *)arg2;
- (void)_takeContentFromArchivableContent:(id)arg1 overrides:(id)arg2;
- (id)_archivableContent:(id *)arg1;
- (id)_contentForState:(unsigned int)arg1;
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTitle:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setBackground:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setContent:(id)arg1 forState:(unsigned int)arg2;
- (id)_scriptingInfo;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (unsigned long long)defaultAccessibilityTraits;
- (BOOL)isAccessibilityElementByDefault;

@end
