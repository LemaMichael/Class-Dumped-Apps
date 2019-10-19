//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseCreatePostViewController.h"

#import "ELMStoreSubscriber-Protocol.h"
#import "YTCollectionConfigurationResponderProvider-Protocol.h"
#import "YTUserMentionsViewControllerDelegate-Protocol.h"

@class NSString, UIViewController, YTELMViewControllerWrapper, YTIPostCreationDialogElementRenderer;
@protocol ELMContext, ELMController, YTUserMentionViewControllerProtocol;

@interface YTElementsCreatePostViewController : YTBaseCreatePostViewController <YTCollectionConfigurationResponderProvider, YTUserMentionsViewControllerDelegate, ELMStoreSubscriber>
{
    YTIPostCreationDialogElementRenderer *_renderer;
    id <ELMContext> _elementsContext;
    UIViewController<YTUserMentionViewControllerProtocol> *_userMentionsVC;
    NSString *_searchedText;
    long long _mentionStartLocation;
    _Bool _logShowingSuggestedUsers;
    YTELMViewControllerWrapper *_contentViewController;
    id <ELMController> _postButtonController;
    id <ELMController> _closeButtonController;
}

@property(readonly, nonatomic) id <ELMController> closeButtonController; // @synthesize closeButtonController=_closeButtonController;
@property(readonly, nonatomic) id <ELMController> postButtonController; // @synthesize postButtonController=_postButtonController;
@property(readonly, nonatomic) YTELMViewControllerWrapper *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (id)loggingPropertiesWithController:(id)arg1;
- (_Bool)isPollOptionFilled:(id)arg1;
- (_Bool)isPollOptionValid:(id)arg1;
- (void)userMentionChipDataDidChange:(id)arg1;
- (void)suggestedUserMentionFlowDidStart;
- (void)postCreationDialogContentTextDidChange:(id)arg1;
- (void)postCreationDialogStateDidChange:(id)arg1;
- (id)elementsContext;
- (id)controllerFromElementData:(id)arg1;
- (id)bytesWithExtensionNumber:(int)arg1;
- (id)elementsConfiguration;
- (_Bool)shouldBlacklistElements;
- (_Bool)shouldEnableElements;
- (id)postButton;
- (id)closeButton;
- (void)resetUserMentionLocation;
- (void)suggestedUserMentionWasSelected:(id)arg1 channelId:(id)arg2 suggestedRenderer:(id)arg3;
- (void)storeDidUpdateAtKey:(id)arg1 withPreviousBytes:(id)arg2 newBytes:(id)arg3;
- (id)pollAttachmentLogData;
- (id)videoAttachmentLogData;
- (id)imageAttachmentLogData;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)viewWillLayoutSubviews;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
