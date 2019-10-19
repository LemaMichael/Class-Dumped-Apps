//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol AWESwitchRecordModeCollectionViewDelegate;

@interface AWESwitchRecordModeCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    _Bool _isTouching;
    id <AWESwitchRecordModeCollectionViewDelegate> _touchDelegate;
    long long _selectedIndex;
    CDUnknownBlockType _needKeepInitialContentOffsetBlock;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    struct CGPoint _initialContentOffset;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType needKeepInitialContentOffsetBlock; // @synthesize needKeepInitialContentOffsetBlock=_needKeepInitialContentOffsetBlock;
@property(nonatomic) struct CGPoint initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <AWESwitchRecordModeCollectionViewDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(nonatomic) _Bool isTouching; // @synthesize isTouching=_isTouching;
- (void).cxx_destruct;
- (void)longPressed:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
