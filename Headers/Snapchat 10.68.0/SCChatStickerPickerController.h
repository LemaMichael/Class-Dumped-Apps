//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStickerPickerController.h"

#import "SCBloopsPickerController-Protocol.h"

@class NSString, SCStickerPickerMenuView, UIView;
@protocol SCBloopsPickerView;

@interface SCChatStickerPickerController : SCStickerPickerController <SCBloopsPickerController>
{
    SCStickerPickerMenuView *_pickerMenuView;
}

@property(readonly, nonatomic) SCStickerPickerMenuView *pickerMenuView; // @synthesize pickerMenuView=_pickerMenuView;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView<SCBloopsPickerView> *bloopsPickerView;
- (long long)numberOfSuperCategories;
- (void)updateVisibleStickerCategoryCellCollectionViewAnimated:(_Bool)arg1 deltaContentOffset:(double)arg2 topMargin:(double)arg3;
- (void)setMenuDataSource:(id)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (id)initWithViewFrame:(struct CGRect)arg1 userSession:(id)arg2 bottomInset:(double)arg3 stickerPickerLogger:(id)arg4 menuDelegate:(id)arg5 bloopsDelegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

