//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewFeatureInfoStickerSendActionHandler-Protocol.h"

@class SCLazy, SCUserSession;

@interface SCPreviewFeatureSnapRequestStickerSendActionHandler : NSObject <SCPreviewFeatureInfoStickerSendActionHandler>
{
    SCUserSession *_userSession;
    SCLazy *_customStoriesDataMutator;
    SCLazy *_customStoriesDataFetcher;
}

- (void).cxx_destruct;
- (void)_createCustomStoryWithRequestText:(id)arg1 usernames:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleSendingActionWithUsernames:(id)arg1 stickerView:(id)arg2 completionPerformer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)infoStickerType;
- (id)initWithUserSession:(id)arg1 customStoriesDataMutator:(id)arg2 customStoriesDataFetcher:(id)arg3;

@end

