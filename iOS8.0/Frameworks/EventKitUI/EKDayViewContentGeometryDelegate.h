//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUIKSingleDayTimelineGeometryDelegate.h"

@class EKDayViewContent, NSString;

@interface EKDayViewContentGeometryDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate>
{
    EKDayViewContent *_dayViewContent;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) __weak EKDayViewContent *dayViewContent; // @synthesize dayViewContent=_dayViewContent;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect displayedRect;
@property(readonly, nonatomic) BOOL originIsUpperLeft;
- (struct CGPoint)pointForDate:(double)arg1;
- (double)dateForPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) float timeWidth;
@property(readonly, nonatomic) float topPadding;
@property(readonly, nonatomic) float hourHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

