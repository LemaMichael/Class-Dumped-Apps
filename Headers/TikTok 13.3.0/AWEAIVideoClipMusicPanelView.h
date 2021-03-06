//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAIVideoClipMusicSelectView, AWEVideoPublishViewModel, UIButton, UILabel;

@interface AWEAIVideoClipMusicPanelView : UIView
{
    _Bool _showing;
    CDUnknownBlockType _showHandler;
    CDUnknownBlockType _dismissHandler;
    CDUnknownBlockType _didSelectMusicHandler;
    CDUnknownBlockType _enterMusicLibraryHandler;
    UILabel *_titleLabel;
    UIButton *_confirmButton;
    AWEAIVideoClipMusicSelectView *_musicSelectView;
    AWEVideoPublishViewModel *_publishModel;
}

@property(retain, nonatomic) AWEVideoPublishViewModel *publishModel; // @synthesize publishModel=_publishModel;
@property(retain, nonatomic) AWEAIVideoClipMusicSelectView *musicSelectView; // @synthesize musicSelectView=_musicSelectView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(copy, nonatomic) CDUnknownBlockType enterMusicLibraryHandler; // @synthesize enterMusicLibraryHandler=_enterMusicLibraryHandler;
@property(copy, nonatomic) CDUnknownBlockType didSelectMusicHandler; // @synthesize didSelectMusicHandler=_didSelectMusicHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(copy, nonatomic) CDUnknownBlockType showHandler; // @synthesize showHandler=_showHandler;
- (void).cxx_destruct;
- (void)undoSelection;
- (void)updateWithMusicList:(id)arg1 playingMusic:(id)arg2;
- (void)dismiss;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)show;
- (void)confirmButtonClicked:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 publishModel:(id)arg2;
- (void)dealloc;

@end

