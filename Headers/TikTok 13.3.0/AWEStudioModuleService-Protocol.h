//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWEAwemeModel, AWEChallengeModel, AWEGoodsOrderShareModel, AWEMusicModel, AWEPOIInfoModel, AWEPlayer, AWEPostGoodsSeedingModel, AWEPublishBaseTask, AWETaskModel, AWEVideoPublishViewModel, AWEVideoSegmentedClipViewControllerModel, HTSVideoData, IESEffectModel, IESVideoAddEdgeData, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL, UIApplication, UIImage, UINavigationController, UIViewController;
@protocol AWEModernStickerPicker;

@protocol AWEStudioModuleService <HTSService>
+ (void)setBindToutiaoAlertShowCount;
+ (long long)bindToutiaoAlertShowCount;
+ (void)setSyncToToutiao:(_Bool)arg1;
+ (_Bool)syncToToutiao;
- (void)benchmarkForScene:(unsigned long long)arg1;
- (void)fetchBenchmarkConfig;
- (void)uploadVideoWithURL:(NSURL *)arg1 parameters:(NSDictionary *)arg2 completion:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)clearAllEditBackUpsInService;
- (void)preloadInitializationEffectPlatformManager;
- (void)recordForVideoDownload:(NSString *)arg1 status:(long long)arg2 code:(long long)arg3;
- (void)mvShareActionWithAwemeModel:(AWEAwemeModel *)arg1 mvId:(NSString *)arg2 trackParams:(NSMutableDictionary *)arg3;
- (void)addOrRemoveShareChannelForMVWithAwemeModel:(AWEAwemeModel *)arg1;
- (NSDictionary *)videoPublishExtraModelToDic;
- (void)setupVideoPublishExtraModelWithParam:(NSDictionary *)arg1;
- (void)removeStickerUnlockAlertKey;
- (void)confirmAbandonFailedTask;
- (void)loadmoreFriendsWithCount:(long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchFriendsWithCount:(long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (_Bool)hasMoreFriends;
- (_Bool)shouldUseOnlineEffectChannel;
- (void)ensureLoginRequirementsForVideoRecording:(void (^)(_Bool))arg1 withTrackerInformation:(NSDictionary *)arg2;
- (void)ensureLoginRequirementsForVideoRecording:(void (^)(_Bool))arg1;
- (NSURL *)localVideoStorageURLWithAwemeID:(NSString *)arg1;
- (void)startVideoWithPushData:(NSDictionary *)arg1;
- (void)processToGifWithVideoUrl:(NSURL *)arg1 gifSize:(struct CGSize)arg2 needAddWaterMark:(_Bool)arg3 completion:(void (^)(NSURL *, NSError *))arg4;
- (void)retryPublishVideoWithTaskV2:(AWEPublishBaseTask *)arg1;
- (void)fetchLocalURLForMusic:(AWEMusicModel *)arg1 withProgress:(void (^)(float))arg2 completion:(void (^)(NSURL *, NSError *))arg3;
- (UIImage *)generateLifeStoryWaterImageWithSize:(struct CGSize)arg1;
- (void)stopAddWatermarkTask;
- (void)addWatermarkWithTaskType:(unsigned long long)arg1 options:(long long)arg2 srcFilePath:(NSURL *)arg3 aweme:(AWEAwemeModel *)arg4 edgeData:(IESVideoAddEdgeData *)arg5 canDirectAddVideoheader:(_Bool)arg6 outputSize:(struct CGSize)arg7 needSaveToAlbum:(_Bool)arg8 removeSourceFile:(_Bool)arg9 progressBlock:(void (^)(double))arg10 complete:(void (^)(NSURL *, NSURL *, NSError *))arg11;
- (void)decideShouldCreateNewRecorderControllerWithNavigationController:(UINavigationController *)arg1 completion:(void (^)(UIViewController *))arg2;
- (UIViewController *)storyControllerWithPublishModel:(AWEVideoPublishViewModel *)arg1 slideInParams:(NSDictionary *)arg2;
- (UIViewController<AWEModernStickerPicker> *)stickerPickerWithPanelType:(long long)arg1 delegate:(id)arg2;
- (void)prefetchTranscodeParam;
- (void)prefetchStudioResource;
- (void)clearStudioCache;
- (void)recoveryBackUpIfNeed;
- (_Bool)isRecordingStory;
- (void)exitRecorder;
- (_Bool)isInsideRecorder;
- (void)startVideoClipViewControllerWithModel:(AWEVideoSegmentedClipViewControllerModel *)arg1 extraDict:(NSDictionary *)arg2;
- (void)createVideoWithResultOfStarAtlasJSB:(NSDictionary *)arg1;
- (void)createVideoWithStarAtlasOrderID:(NSNumber *)arg1 channel:(NSNumber *)arg2;
- (void)createVideoWithCharityID:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
- (void)createVideoWithPoiModel:(AWEPOIInfoModel *)arg1 withInfo:(NSDictionary *)arg2 completion:(void (^)(void))arg3;
- (void)createStickerVideoWithStickerIDArray:(NSArray *)arg1 musicModel:(AWEMusicModel *)arg2 referString:(NSString *)arg3 trackInfo:(NSDictionary *)arg4 strictlyApplyFirst:(_Bool)arg5 completion:(void (^)(NSError *, _Bool, NSArray *))arg6;
- (void)createVideoWithStickerID:(NSString *)arg1 referString:(NSString *)arg2 extraInfo:(NSDictionary *)arg3 prioritized:(_Bool)arg4 completion:(void (^)(NSError *, _Bool, NSArray *))arg5;
- (void)createVideoWithStickerID:(NSString *)arg1 referString:(NSString *)arg2 extraInfo:(NSDictionary *)arg3 completion:(void (^)(NSError *, _Bool, NSArray *))arg4;
- (void)createVideoWithStickerID:(NSString *)arg1 referString:(NSString *)arg2 completion:(void (^)(NSError *, _Bool, NSArray *))arg3;
- (void)createVideoWithStickerID:(NSString *)arg1 completion:(void (^)(NSError *, _Bool, NSArray *))arg2;
- (void)createFirstTimeBoostStickerVideoWithAweme:(AWEAwemeModel *)arg1 info:(NSDictionary *)arg2 downloadedModel:(IESEffectModel *)arg3 downloadedEffects:(NSArray *)arg4;
- (void)createMVVideoWithChallenge:(AWEChallengeModel *)arg1 mvID:(NSString *)arg2 info:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)createMVVideoWithMVID:(NSString *)arg1 info:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)createMVVideoWithAweme:(AWEAwemeModel *)arg1 withInfo:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)createStickerVideoWithAweme:(AWEAwemeModel *)arg1 withInfo:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)createStickerVideoWithAweme:(AWEAwemeModel *)arg1 completion:(void (^)(NSError *))arg2;
- (void)createReactVideoWithSource:(AWEAwemeModel *)arg1 isReactOrigin:(_Bool)arg2 enterFrom:(NSString *)arg3;
- (void)createDuetVideoWithAweme:(AWEAwemeModel *)arg1 enterFrom:(NSString *)arg2;
- (void)createVideoWithTask:(AWETaskModel *)arg1 info:(NSDictionary *)arg2;
- (void)createVideoWithChallenge:(AWEChallengeModel *)arg1 fromChallengeDetail:(_Bool)arg2 info:(NSDictionary *)arg3;
- (void)createVideoWithMusic:(AWEMusicModel *)arg1 withInfo:(NSDictionary *)arg2;
- (void)createVideoWithMusic:(AWEMusicModel *)arg1 groupID:(NSString *)arg2 enterFrom:(long long)arg3;
- (void)createVideoWithMusic:(AWEMusicModel *)arg1 groupID:(NSString *)arg2;
- (void)createStoryVideoWithInfo:(NSDictionary *)arg1 fromShake:(_Bool)arg2;
- (void)createVideoWithGoodsSeed:(AWEPostGoodsSeedingModel *)arg1 additionInfo:(NSDictionary *)arg2;
- (void)createVideoWithOrderShare:(AWEGoodsOrderShareModel *)arg1 additionInfo:(NSDictionary *)arg2;
- (void)createVideoWithOrderShare:(AWEGoodsOrderShareModel *)arg1;
- (void)createVideoFromMusicWithInfo:(NSDictionary *)arg1;
- (void)createVideoFromMusicWithRefer:(NSString *)arg1;
- (void)createVideoFromAlbumWithRefer:(NSString *)arg1;
- (_Bool)isInRecordTask;
- (_Bool)canStartVideoFlow;
- (AWEPublishBaseTask *)createTaskWithInfo:(AWEVideoPublishViewModel *)arg1 player:(AWEPlayer *)arg2;
- (void)addTask:(AWEPublishBaseTask *)arg1;
- (_Bool)hasTaskExecuting;
- (void)fetchDraftCoverWithhCompletion:(void (^)(UIImage *, NSError *))arg1;
- (long long)draftCount;
- (void)saveDraftWithPublishViewModel:(AWEVideoPublishViewModel *)arg1 video:(HTSVideoData *)arg2 backup:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
@end

