//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorPosterize : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputLevels;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputLevels; // @synthesize inputLevels;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (BOOL)_isIdentity;
- (id)_kernel;
- (void)setDefaults;

@end
