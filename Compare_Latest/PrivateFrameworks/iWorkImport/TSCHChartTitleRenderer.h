//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHRenderer.h>

__attribute__((visibility("hidden")))
@interface TSCHChartTitleRenderer : TSCHRenderer
{
}

- (struct CGRect)frameForEditingTextForSelectionPath:(id)arg1;
- (BOOL)canEditTextForSelectionPath:(id)arg1;
- (void)addSelection:(id)arg1 toCGPath:(struct CGPath *)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 selection:(id)arg2;
- (BOOL)canRenderSelectionPath:(id)arg1;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)p_drawTitle:(struct CGContext *)arg1 rangePtr:(struct _NSRange *)arg2;
- (void)useEditedString:(id)arg1;

@end
