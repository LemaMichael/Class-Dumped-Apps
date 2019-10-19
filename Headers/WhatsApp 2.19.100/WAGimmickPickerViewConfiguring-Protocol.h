//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout, UIColor, UIView;

@protocol WAGimmickPickerViewConfiguring
@property(readonly, copy, nonatomic) NSString *pagingCollectionViewCellReuseIdentifier;
@property(readonly, nonatomic) long long numberOfSectionsInPagingCollectionView;
@property(readonly, nonatomic) NSIndexPath *currentCategory;
@property(readonly, nonatomic) long long numberOfCategorySections;
@property(readonly, nonatomic) UIColor *GIFButtonTintColor;
@property(readonly, nonatomic) UIColor *stickerButtonTintColor;
@property(readonly, nonatomic) NSString *accessibilityLabelForLeftButton;
@property(readonly, nonatomic) NSString *accessibilityLabelForRightButton;
@property(readonly, nonatomic) _Bool shouldShowLeftButton;
@property(readonly, nonatomic) _Bool shouldShowRightButtonUpdateIndicator;
@property(readonly, nonatomic) _Bool shouldShowRightButton;
@property(readonly, nonatomic) NSString *configurationIdentifier;
- (long long)numberOfItemsInPagingCollectionViewSection:(long long)arg1;
- (void)contentCollectionView:(UICollectionView *)arg1 didLongPressAtIndexPath:(NSIndexPath *)arg2;
- (UIView *)contentCollectionViewBackgroundViewForCategory:(NSIndexPath *)arg1;
- (void)contentCollectionViewDidEndDisplaying:(UICollectionView *)arg1;
- (void)configureContentCollectionView:(UICollectionView *)arg1;
- (UICollectionViewFlowLayout *)collectionViewLayoutForCategoryCollectionView;
- (_Bool)userScrolledToCategory:(NSIndexPath *)arg1;
@end
