//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol SPTYourLibraryMusicSongsHeaderViewModel;

@protocol SPTYourLibraryMusicSongsHeaderViewModelActionDelegate <NSObject>
- (void)songsHeaderViewModel:(id <SPTYourLibraryMusicSongsHeaderViewModel>)arg1 presentSortingFilterPicker:(UIViewController *)arg2;
- (void)didEndFilteringSongsHeaderViewModel:(id <SPTYourLibraryMusicSongsHeaderViewModel>)arg1;
- (void)willStartFilteringSongsHeaderViewModel:(id <SPTYourLibraryMusicSongsHeaderViewModel>)arg1;
- (void)songsHeaderViewModel:(id <SPTYourLibraryMusicSongsHeaderViewModel>)arg1 interactionType:(unsigned long long)arg2;
- (void)songsHeaderViewModel:(id <SPTYourLibraryMusicSongsHeaderViewModel>)arg1 textFilter:(NSString *)arg2;
- (void)playActionForSongsHeaderViewModel:(id <SPTYourLibraryMusicSongsHeaderViewModel>)arg1;
@end

