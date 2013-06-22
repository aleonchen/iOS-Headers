/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKAnnotationView.h>

#import "MKCountdownTimerObserver-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface MKAlternateRouteAnnotationView : MKAnnotationView <MKCountdownTimerObserver>
{
    UIImageView *_imageView;
    UILabel *_label;
    int _orientation;
    BOOL _routeSelected;
    float _stretch;
}

+ (unsigned int)_selectedZIndex;
+ (unsigned int)_zIndex;
+ (id)_imageForType:(int)arg1 routeSelected:(BOOL)arg2;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void)updateCountdowns;
- (void)_updateAnchorPoint;
- (void)_layoutLabel;
@property(retain, nonatomic) NSString *title;
- (struct CGRect)frameForAlternateOrientation:(int)arg1;
- (unsigned int)_orientationCount;
@property(readonly, nonatomic) float significantArea;
- (struct CGRect)_significantFrame;
- (struct CGRect)significantFrameForOrientation:(int)arg1;
- (struct CGRect)_significantBounds;
- (void)setRouteSelected:(BOOL)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)initWithRoute:(id)arg1;
- (void)_updateCalloutOffset;
- (struct CGRect)_bubbleFrameForType:(int)arg1;

@end
