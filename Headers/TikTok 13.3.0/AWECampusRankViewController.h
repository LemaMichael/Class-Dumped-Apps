//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEWebViewController.h"

#import "BTDRouterViewControllerProtocol-Protocol.h"

@class NSString;

@interface AWECampusRankViewController : AWEWebViewController <BTDRouterViewControllerProtocol>
{
    _Bool _isAppear;
    _Bool _hasCampusChanged;
    NSString *_schoolPoiId;
    long long _schoolType;
}

+ (void)__awe__codeRunnerRun_28;
@property(nonatomic) long long schoolType; // @synthesize schoolType=_schoolType;
@property(copy, nonatomic) NSString *schoolPoiId; // @synthesize schoolPoiId=_schoolPoiId;
@property(nonatomic) _Bool hasCampusChanged; // @synthesize hasCampusChanged=_hasCampusChanged;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
- (void).cxx_destruct;
- (_Bool)hideLoadingIndicator;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishLogin;
- (void)didFinishUpdateAwemeUser;
- (void)invokeCampusChangedEvent;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

