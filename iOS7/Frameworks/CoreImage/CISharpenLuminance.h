/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISharpenLuminance : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSharpness;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputSharpness; // @synthesize inputSharpness;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;
- (_Bool)_isIdentity;
- (void)setDefaults;

@end
