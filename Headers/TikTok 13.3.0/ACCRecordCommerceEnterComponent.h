//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCRecordCommerceEnterComponentProtocol-Protocol.h"
#import "ACCRecordRootComponentMessageProtocol-Protocol.h"
#import "ACCRecordToolBarComponentMessage-Protocol.h"
#import "ACCStickerComponentMessageProtocol-Protocol.h"

@class AWEAnimatedButton, NSString, UILabel;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCRecordButtonComponentProtocol, ACCRecordRootComponentProtocol, ACCRecordSpeedControlComponentProtocol, ACCRecordToolBarComponentProtocol, ACCStickerComponentProtocol;

@interface ACCRecordCommerceEnterComponent : NSObject <ACCRecordCommerceEnterComponentProtocol, ACCStickerComponentMessageProtocol, ACCRecordToolBarComponentMessage, ACCRecordRootComponentMessageProtocol>
{
    _Bool _commerceEnterShowOfPause;
    id <ACCComponentBusProtocol> _componentBus;
    AWEAnimatedButton *_commerceEnterButton;
    UILabel *_commerceEnterLabel;
    NSString *_lastCommerceEnterEffectID;
    NSObject *_observer;
    id <ACCRecordRootComponentProtocol> _rootComponent;
    id <ACCStickerComponentProtocol> _stickerComponent;
    id <ACCRecordSpeedControlComponentProtocol> _speedComponent;
    id <ACCRecordToolBarComponentProtocol> _toolbarComponent;
    id <ACCRecordButtonComponentProtocol> _recordComponent;
}

@property(readonly, nonatomic) __weak id <ACCRecordButtonComponentProtocol> recordComponent; // @synthesize recordComponent=_recordComponent;
@property(readonly, nonatomic) __weak id <ACCRecordToolBarComponentProtocol> toolbarComponent; // @synthesize toolbarComponent=_toolbarComponent;
@property(readonly, nonatomic) __weak id <ACCRecordSpeedControlComponentProtocol> speedComponent; // @synthesize speedComponent=_speedComponent;
@property(readonly, nonatomic) __weak id <ACCStickerComponentProtocol> stickerComponent; // @synthesize stickerComponent=_stickerComponent;
@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(retain, nonatomic) NSObject *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSString *lastCommerceEnterEffectID; // @synthesize lastCommerceEnterEffectID=_lastCommerceEnterEffectID;
@property(nonatomic) _Bool commerceEnterShowOfPause; // @synthesize commerceEnterShowOfPause=_commerceEnterShowOfPause;
@property(retain, nonatomic) UILabel *commerceEnterLabel; // @synthesize commerceEnterLabel=_commerceEnterLabel;
@property(retain, nonatomic) AWEAnimatedButton *commerceEnterButton; // @synthesize commerceEnterButton=_commerceEnterButton;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (void)clickCommerceEnterAction:(id)arg1;
- (void)msg_makeNormalRecordComponentsFadeDisappear:(_Bool)arg1 showSwapCameraBtn:(_Bool)arg2 triggerByPanel:(_Bool)arg3;
- (void)msg_makeNormalRecordComponentsDisappear:(_Bool)arg1 exceptToolbar:(_Bool)arg2;
- (void)msg_didClickSpeedControlButton:(id)arg1;
- (void)msg_stickerPanelDidDismiss;
- (void)addObservers;
- (void)dealloc;
- (void)containerViewControllerPostDidLoad;
- (void)containerViewControllerDidLoad;
- (void)trackCommerceEnterPendentWithForce:(_Bool)arg1;
- (void)updateCommerceEnterButtonDisplay;
- (void)commerceEnterButtonHidden:(_Bool)arg1;
- (void)updateCommerceEnterWithText:(id)arg1;
- (id)autoInjectComponentDictionaryOfrecordComponent;
- (id)autoInjectComponentDictionaryOftoolbarComponent;
- (id)autoInjectComponentDictionaryOfspeedComponent;
- (id)autoInjectComponentDictionaryOfstickerComponent;
- (id)autoInjectComponentDictionaryOfrootComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end

