//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTLoginRecoverAccountViewModel;

@protocol SPTLoginRecoverAccountViewModelDelegate <NSObject>
- (void)viewModel:(SPTLoginRecoverAccountViewModel *)arg1 shouldShowKeyboard:(_Bool)arg2;
- (void)viewModel:(SPTLoginRecoverAccountViewModel *)arg1 didFinishLoadingDataWithError:(NSError *)arg2;
- (void)viewModelDidFinishLoadingDataWithSuccess:(SPTLoginRecoverAccountViewModel *)arg1;
@end

