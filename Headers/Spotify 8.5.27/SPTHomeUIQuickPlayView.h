//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class NSString, SPTHomeUIQuickPlayButton, SPTHomeUIQuickPlayTextView;

@interface SPTHomeUIQuickPlayView : UIView <GLUEStyleable>
{
    SPTHomeUIQuickPlayTextView *_textView;
    SPTHomeUIQuickPlayButton *_playButton;
}

@property(readonly, nonatomic) SPTHomeUIQuickPlayButton *playButton; // @synthesize playButton=_playButton;
@property(readonly, nonatomic) SPTHomeUIQuickPlayTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)addConstraints;
- (void)customizeAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

