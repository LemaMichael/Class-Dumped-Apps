//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEGeneralActivityView;

@interface AWEDoubleColumnGeneralSearchCommonCollectionViewCell : UICollectionViewCell
{
    AWEGeneralActivityView *_activityView;
}

+ (double)cellHeightWithModel:(id)arg1;
+ (id)identifier;
@property(retain, nonatomic) AWEGeneralActivityView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)configUI;
- (void)configureWithModel:(id)arg1 keyword:(id)arg2 logPassback:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

