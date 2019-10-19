//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ELMStoreSubscriber.h"
#import "YTCollectionViewScrollObserverResponderProvider.h"
#import "YTDonationParamsProvider.h"
#import "YTRendererController.h"
#import "YTSystemNotificationsObserver.h"

@class GIMMe, NSString, UITapGestureRecognizer, YTDonationEngagementView, YTELMViewController, YTIDonationShelfRenderer, YTIElementRenderer, YTInnerTubeCollectionViewController;

@interface YTDonationEngagementPanelViewController : UIViewController <YTSystemNotificationsObserver, ELMStoreSubscriber, YTCollectionViewScrollObserverResponderProvider, YTDonationParamsProvider, YTRendererController>
{
    YTIDonationShelfRenderer *_model;
    id <YTInnerTubeUIService> _innerTubeService;
    UITapGestureRecognizer *_gestureRecognizer;
    YTInnerTubeCollectionViewController *_collectionViewController;
    NSString *_displayStateStoreIdentifier;
    _Bool _isRotating;
    int _privacyState;
    int _shelfType;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    unsigned long long _selectedAmount;
    YTELMViewController *_elementsVC;
    YTIElementRenderer *_elementRenderer;
}

@property(retain, nonatomic) YTIElementRenderer *elementRenderer; // @synthesize elementRenderer=_elementRenderer;
@property(retain, nonatomic) YTELMViewController *elementsVC; // @synthesize elementsVC=_elementsVC;
@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(nonatomic) int shelfType; // @synthesize shelfType=_shelfType;
@property(nonatomic) int privacyState; // @synthesize privacyState=_privacyState;
@property(nonatomic) unsigned long long selectedAmount; // @synthesize selectedAmount=_selectedAmount;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)dismissKeyboard;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)addDonationAmountQueryParam:(id)arg1;
- (void)didTapDonateButton:(id)arg1;
- (void)storeDidUpdateAtKey:(id)arg1 withPreviousBytes:(id)arg2 newBytes:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)removeScrollObserver:(id)arg1;
- (void)addScrollObserver:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) YTDonationEngagementView *view; // @dynamic view;

@end
