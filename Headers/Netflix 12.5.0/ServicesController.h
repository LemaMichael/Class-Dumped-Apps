//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataBrokerDataProviderProtocol-Protocol.h"
#import "LocalizerLoggerDelegate-Protocol.h"
#import "MdxUiServiceDelegate-Protocol.h"
#import "NFUIPlaybackManagerDelegate-Protocol.h"

@class ActionIDController, NSString, UserSettings;
@protocol DataBrokerDataProviderProtocol, NFUIPlaybackPlayerProviderProtocol, NFUIPlaybackValidatorProtocol;

@interface ServicesController : NSObject <NFUIPlaybackManagerDelegate, MdxUiServiceDelegate, LocalizerLoggerDelegate, DataBrokerDataProviderProtocol>
{
    id <DataBrokerDataProviderProtocol> _delegate;
    id <NFUIPlaybackValidatorProtocol> _playbackValidator;
    ActionIDController *_actionIDController;
    UserSettings *_userSettings;
    id <NFUIPlaybackPlayerProviderProtocol> _playbackPlayerProvider;
}

+ (id)services;
@property(retain, nonatomic) id <NFUIPlaybackPlayerProviderProtocol> playbackPlayerProvider; // @synthesize playbackPlayerProvider=_playbackPlayerProvider;
@property(retain, nonatomic) UserSettings *userSettings; // @synthesize userSettings=_userSettings;
@property(retain, nonatomic) ActionIDController *actionIDController; // @synthesize actionIDController=_actionIDController;
@property(retain, nonatomic) id <NFUIPlaybackValidatorProtocol> playbackValidator; // @synthesize playbackValidator=_playbackValidator;
@property(nonatomic) __weak id <DataBrokerDataProviderProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)objectContext;
- (void)localizer:(id)arg1 logDebug:(id)arg2;
- (void)localizer:(id)arg1 logInfo:(id)arg2;
- (void)localizer:(id)arg1 logError:(id)arg2;
- (_Bool)enableLoggingInLocalizer:(id)arg1;
- (double)mdxUiServiceAppLaunchTime:(id)arg1;
- (void)mdxUiService:(id)arg1 showTargetMenuWithDelegate:(id)arg2 sender:(id)arg3;
- (void)mdxUiService:(id)arg1 didJoinPlaySession:(id)arg2;
- (void)mdxUiService:(id)arg1 downloadJSSource:(id)arg2 forceRemote:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)mdxUiService:(id)arg1 connection:(id)arg2 refreshCredentials:(CDUnknownBlockType)arg3;
- (void)mdxUiService:(id)arg1 presentAlertController:(id)arg2;
- (void)mdxUiService:(id)arg1 connection:(id)arg2 handlePinVerificationWithVideoId:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (_Bool)mdxUiService:(id)arg1 connection:(id)arg2 isSkipIntroEnabled:(id)arg3;
- (_Bool)mdxUiService:(id)arg1 connection:(id)arg2 isContentPreviewPinVerified:(id)arg3;
- (_Bool)mdxUiService:(id)arg1 connection:(id)arg2 isPinVerified:(id)arg3;
- (_Bool)mdxUiService:(id)arg1 connection:(id)arg2 isPostPlayEnabled:(id)arg3;
- (id)mdxUiServiceActiveProfileId:(id)arg1;
- (void)mdxUiService:(id)arg1 didStartWithMdxVersion:(id)arg2;
- (_Bool)mdxUiService:(id)arg1 isDownloadEnabled:(id)arg2;
- (id)mdxUiServiceMdxConfigurationOptions:(id)arg1;
- (id)mdxUiServiceMdxVersionInfo:(id)arg1;
- (_Bool)mdxUiServiceEnabled:(id)arg1;
- (void)playbackManager:(id)arg1 validatePlayback:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)playbackManager:(id)arg1 playerForPlaybackRequest:(id)arg2;
- (void)configureDelegates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
