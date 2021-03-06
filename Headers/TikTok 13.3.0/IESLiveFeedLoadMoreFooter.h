//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshAutoFooter.h"

@class NSDictionary, UITapGestureRecognizer, UIView;
@protocol IESLiveFeedViewFactory, IESLiveRefreshView;

@interface IESLiveFeedLoadMoreFooter : MJRefreshAutoFooter
{
    _Bool _isShowingOnScreen;
    CDUnknownBlockType _noMoreDataClickBlock;
    CDUnknownBlockType _showStateChangeBlock;
    UITapGestureRecognizer *_tapGesture;
    CDUnknownBlockType _paramsRefreshingBlock;
    NSDictionary *_refreshingParams;
    UIView<IESLiveRefreshView> *_loading;
    id <IESLiveFeedViewFactory> _feedFactory;
}

+ (id)footerWithRefreshingParamsBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) id <IESLiveFeedViewFactory> feedFactory; // @synthesize feedFactory=_feedFactory;
@property(retain, nonatomic) UIView<IESLiveRefreshView> *loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSDictionary *refreshingParams; // @synthesize refreshingParams=_refreshingParams;
@property(copy, nonatomic) CDUnknownBlockType paramsRefreshingBlock; // @synthesize paramsRefreshingBlock=_paramsRefreshingBlock;
@property(nonatomic) _Bool isShowingOnScreen; // @synthesize isShowingOnScreen=_isShowingOnScreen;
@property(nonatomic) __weak UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(copy, nonatomic) CDUnknownBlockType showStateChangeBlock; // @synthesize showStateChangeBlock=_showStateChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType noMoreDataClickBlock; // @synthesize noMoreDataClickBlock=_noMoreDataClickBlock;
- (void).cxx_destruct;
- (void)handleTapInView:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (void)prepare;
- (void)beginRefreshingWithParams:(id)arg1;

@end

