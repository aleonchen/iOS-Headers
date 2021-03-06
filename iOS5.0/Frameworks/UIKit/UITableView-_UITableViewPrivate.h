/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@interface UITableView (_UITableViewPrivate) <UIGestureRecognizerDelegate>
- (void)_setHeaderAndFooterViewsFloat:(BOOL)arg1;
- (BOOL)_headerAndFooterViewsFloat;
- (void)_setSectionIndexTrackingBackgroundColor:(id)arg1;
- (id)_sectionIndexTrackingBackgroundColor;
- (void)_setSectionIndexColor:(id)arg1;
- (id)_sectionIndexColor;
- (int)_sectionForFooterView:(id)arg1;
- (int)_sectionForHeaderView:(id)arg1;
- (id)_defaultBackgroundView;
- (void)_scrollToTopHidingTableHeaderIfNecessary:(BOOL)arg1;
- (void)_scrollToTopHidingTableHeader:(BOOL)arg1;
- (BOOL)_scrollToTop;
- (void)setDeleteConfirmationIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)deleteConfirmationIndexPath;
- (void)_sendDidEndEditingForIndexPath:(id)arg1;
- (void)_sendWillBeginEditingForIndexPath:(id)arg1;
- (void)_validateSectionHeadersAndFooters;
- (void)_validateCells;
- (void)_languageChanged;
- (BOOL)_shouldDisplayTopSeparator;
- (BOOL)_hasSwipeToDeleteRow;
- (void)_updateShowScrollIndicatorsFlag;
- (void)flashScrollIndicators;
- (void)_sectionIndexChanged:(id)arg1;
- (void)_accessoryButtonAction:(id)arg1;
- (BOOL)_canEditRowAtIndexPath:(id)arg1;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateWithItems:(id)arg1 updateSupport:(id)arg2;
- (void)_reuseFooterView:(id)arg1 forSection:(int)arg2;
- (void)_reuseHeaderView:(id)arg1 forSection:(int)arg2;
- (void)_reuseTableViewCell:(id)arg1;
- (id)_newSectionViewWithFrame:(struct CGRect)arg1 forSection:(int)arg2 isHeader:(BOOL)arg3;
- (id)_reorderingSupport;
- (BOOL)_canMoveRowAtIndexPath:(id)arg1;
- (int)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1;
- (id)_titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
- (int)_editingStyleForRowAtIndexPath:(id)arg1;
- (id)_tableViewCellForContentView:(id)arg1;
- (void)_addContentSubview:(id)arg1 atBack:(BOOL)arg2;
- (void)_adjustExtraSeparators;
- (BOOL)_shouldDisplayExtraSeparatorsAtOffset:(float *)arg1;
- (struct _NSRange)_visibleGlobalRowsInRect:(struct CGRect)arg1;
- (void)_updateVisibleCellsNow:(BOOL)arg1;
- (void)_updateVisibleHeadersAndFootersNow:(BOOL)arg1;
- (void)_updateTableHeadersAndFootersNow:(BOOL)arg1;
- (void)_updateVisibleCellsImmediatelyIfNecessary;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withFrames:(BOOL)arg2;
- (void)_endCellAnimationsWithContext:(id)arg1;
- (void)_setupCellAnimations;
- (void)_updateIndex;
- (void)_updateIndexTitles:(id)arg1;
- (void)_updateIndexFrameSuppressingChangeNotification:(BOOL)arg1;
- (void)_updateIndexFrame;
- (void)_updateBackgroundView;
- (void)_updateBackgroundViewFrame;
- (void)_updateContentSize;
- (void)_setDrawsTopShadowInGroupedSections:(BOOL)arg1;
- (BOOL)_drawsTopShadowInGroupedSections;
- (float)heightForTableHeaderViewHiding;
- (float)heightForAutohidingTableHeaderView;
- (void)_setHeightForTableHeaderViewHiding:(float)arg1;
- (void)_adjustTableHeaderAndFooterViews;
- (void)setSectionBorderColor:(id)arg1;
- (id)sectionBorderColor;
- (id)multiselectCheckmarkColor;
- (void)setMultiselectCheckmarkColor:(id)arg1;
- (id)tableHeaderBackgroundColor;
- (void)setTableHeaderBackgroundColor:(id)arg1;
- (void)setCountString:(id)arg1;
- (void)setCountStringInsignificantRowCount:(unsigned int)arg1;
- (void)_setRowCount:(int)arg1;
- (unsigned int)_countStringRowCount;
- (void)_resumeReloads;
- (void)_suspendReloads;
- (void)_adjustReusableTableCells;
- (void)_adjustCountLabel;
- (void)_scheduleAdjustExtraSeparators;
- (void)_updateRowData;
- (void)_ensureRowDataIsLoaded;
- (float)_animationDuration;
- (void)_setDisplaysCellContentStringsOnTapAndHold:(BOOL)arg1;
- (BOOL)_displaysCellContentStringsOnTapAndHold;
- (void)setUsesGestureRecognizers:(BOOL)arg1;
- (void)_updateTableViewGestureRecognizersForEditing;
- (void)_removeTableViewGestureRecognizers;
- (void)_installTableViewGestureRecognizers;
- (id)_swipeGestureRecognizer;
- (void)_scroll;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3;
@end

