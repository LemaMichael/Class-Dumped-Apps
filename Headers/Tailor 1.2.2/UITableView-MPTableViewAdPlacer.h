//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface UITableView (MPTableViewAdPlacer)
- (id)mp_dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)mp_deselectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)mp_selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;
- (id)mp_indexPathsForSelectedRows;
- (id)mp_indexPathForSelectedRow;
- (void)mp_moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)mp_reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)mp_deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)mp_insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)mp_moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)mp_reloadSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)mp_deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)mp_insertSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)mp_endUpdates;
- (void)mp_beginUpdates;
- (void)mp_scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (id)mp_indexPathsForVisibleRows;
- (id)mp_visibleCells;
- (id)mp_cellForRowAtIndexPath:(id)arg1;
- (id)mp_indexPathsForRowsInRect:(struct CGRect)arg1;
- (id)mp_indexPathForCell:(id)arg1;
- (id)mp_indexPathForRowAtPoint:(struct CGPoint)arg1;
- (struct CGRect)mp_rectForRowAtIndexPath:(id)arg1;
- (void)mp_reloadData;
- (id)mp_dataSource;
- (void)mp_setDataSource:(id)arg1;
- (id)mp_delegate;
- (void)mp_setDelegate:(id)arg1;
- (id)mp_adPlacer;
- (void)mp_setAdPlacer:(id)arg1;
@end
