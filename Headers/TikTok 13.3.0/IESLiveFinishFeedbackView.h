//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LiveRoomModel, UIButton;
@protocol IESLiveContainerRouter, IESLiveEnvironment, IESLiveTracker, IESLiveURLSchemaHandler;

@interface IESLiveFinishFeedbackView : UIView
{
    LiveRoomModel *_roomModel;
    UIButton *_feedbackBtn;
    id <IESLiveTracker> _tracker;
    id <IESLiveContainerRouter> _containerRouter;
    id <IESLiveEnvironment> _liveEnvironment;
    id <IESLiveURLSchemaHandler> _schemaHandler;
}

@property(retain, nonatomic) id <IESLiveURLSchemaHandler> schemaHandler; // @synthesize schemaHandler=_schemaHandler;
@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(retain, nonatomic) id <IESLiveContainerRouter> containerRouter; // @synthesize containerRouter=_containerRouter;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) UIButton *feedbackBtn; // @synthesize feedbackBtn=_feedbackBtn;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (void)openVigoFeedbackViewController;
- (void)openMTFeedbackViewController;
- (id)appName;
- (void)openFeedbackViewController;
- (void)setupFeedbackInfo;
- (void)setupFeedbackButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithRoom:(id)arg1;

@end
