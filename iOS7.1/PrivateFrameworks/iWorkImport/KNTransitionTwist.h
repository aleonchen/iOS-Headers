//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNFrameAnimator.h"

@class NSArray, TSDGLDataBuffer, TSDGLMotionBlurEffect, TSDGLShader;

__attribute__((visibility("hidden")))
@interface KNTransitionTwist : KNAnimationEffect <KNFrameAnimator>
{
    TSDGLMotionBlurEffect *_motionBlurEffect;
    TSDGLShader *_colorShader;
    TSDGLShader *_velocityShader;
    TSDGLDataBuffer *_colorDataBuffer;
    TSDGLDataBuffer *_velocityDataBuffer;
    NSArray *_colorBufferAttributes;
    NSArray *_velocityBufferAttributes;
    unsigned int _colorPositionAttributeIndex;
    unsigned int _colorTexCoordAttributeIndex;
    unsigned int _colorNormalAttributeIndex;
    unsigned int _velocityPositionAttributeIndex;
    unsigned int _velocityPrevPositionAttributeIndex;
    int _numPoints;
    float _twistyness;
    BOOL _shouldDrawMotionBlur;
}

+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)p_drawTwistWithVelocity:(BOOL)arg1 percent:(float)arg2 texture:(id)arg3 oldTexture:(id)arg4;
- (void)update:(id)arg1 withPercent:(float)arg2 direction:(unsigned int)arg3;
- (float)fx:(float)arg1 withPercent:(float)arg2;
- (void)drawGrid:(id)arg1;
- (void)createArrays:(id)arg1;
- (void)dealloc;
- (void)p_teardown;
- (id)initWithAnimationContext:(id)arg1;

@end
