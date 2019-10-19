//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWECollectionButton, AWEMusicModel, UIImageView, UILabel;
@protocol AWEFMMusicViewDelegate;

@interface AWEFMMusicView : UIView
{
    id <AWEFMMusicViewDelegate> _delegate;
    UIImageView *_coverImageView;
    UIImageView *_playImageView;
    UILabel *_songNameLabel;
    UILabel *_authorLabel;
    UILabel *_durationLabel;
    AWECollectionButton *_collectionButton;
    AWEMusicModel *_musicModel;
    unsigned long long _playerStatus;
}

@property(nonatomic) unsigned long long playerStatus; // @synthesize playerStatus=_playerStatus;
@property(retain, nonatomic) AWEMusicModel *musicModel; // @synthesize musicModel=_musicModel;
@property(retain, nonatomic) AWECollectionButton *collectionButton; // @synthesize collectionButton=_collectionButton;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak id <AWEFMMusicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupUI;
- (void)p_stopAnimation;
- (void)p_startAnimation;
- (void)configWithPlayerStatus:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)configWithCollectionSelected:(_Bool)arg1;
- (void)handleFavoriteStatusChangedNotification:(id)arg1;
- (void)configWithPlayerStatus:(unsigned long long)arg1;
- (void)configWithMusicModel:(id)arg1;
- (void)changeToAnotherModel:(id)arg1;
- (void)wholeViewDidTapp;
- (void)collectionBtnClicked:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
