//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCDiscoverFeedSectionLayoutStyle;

@interface SCDiscoverFeedSectionLayout : NSObject <NSCopying>
{
    _Bool _shouldShowHeader;
    float _topInset;
    float _leftInset;
    float _bottomInset;
    float _rightInset;
    long long _secondaryAction;
    SCDiscoverFeedSectionLayoutStyle *_layoutStyle;
}

@property(readonly, copy, nonatomic) SCDiscoverFeedSectionLayoutStyle *layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(readonly, nonatomic) float rightInset; // @synthesize rightInset=_rightInset;
@property(readonly, nonatomic) float bottomInset; // @synthesize bottomInset=_bottomInset;
@property(readonly, nonatomic) float leftInset; // @synthesize leftInset=_leftInset;
@property(readonly, nonatomic) float topInset; // @synthesize topInset=_topInset;
@property(readonly, nonatomic) long long secondaryAction; // @synthesize secondaryAction=_secondaryAction;
@property(readonly, nonatomic) _Bool shouldShowHeader; // @synthesize shouldShowHeader=_shouldShowHeader;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShouldShowHeader:(_Bool)arg1 secondaryAction:(long long)arg2 topInset:(float)arg3 leftInset:(float)arg4 bottomInset:(float)arg5 rightInset:(float)arg6 layoutStyle:(id)arg7;

@end
