//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPOIDetailCellViewController.h"

@class AWEPOIDetailStore, NSString, UIView;

@interface AWEPOIDetailViewMoreCommentsCellViewController : AWEPOIDetailCellViewController
{
    UIView *_viewMoreView;
    NSString *_poiID;
    AWEPOIDetailStore *_store;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) AWEPOIDetailStore *store; // @synthesize store=_store;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(retain, nonatomic) UIView *viewMoreView; // @synthesize viewMoreView=_viewMoreView;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
