//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol SCPullToRefreshDelegate;

@interface SCPullToRefresh : NSObject
{
    NSArray *_items;
    long long _state;
    double _triggerOffset;
    double _shookOffset;
    id <SCPullToRefreshDelegate> _delegate;
}

+ (id)loadingSpinnerPullToRefresh;
+ (id)defaultPullToRefresh;
@property(nonatomic) __weak id <SCPullToRefreshDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double shookOffset; // @synthesize shookOffset=_shookOffset;
@property(nonatomic) double triggerOffset; // @synthesize triggerOffset=_triggerOffset;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)itemForItemType:(long long)arg1;
@property(readonly, nonatomic) double defaultItemHeight;
- (void)setState:(long long)arg1;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)pullingOffsetDidChange:(double)arg1 isTracking:(_Bool)arg2;
- (id)initWithPullToRefreshItems:(id)arg1;

@end

