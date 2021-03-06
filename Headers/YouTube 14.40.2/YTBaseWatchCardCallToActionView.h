//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "YTResponder.h"
#import "YTReusableView.h"
#import "YTThumbnailMapping.h"

@class NSString, UIButton;

@interface YTBaseWatchCardCallToActionView : UIControl <YTReusableView, YTResponder, YTThumbnailMapping>
{
    UIButton *_actionButton;
    id <YTResponder> _parentResponder;
    unsigned long long _reuseIndex;
}

@property(nonatomic) unsigned long long reuseIndex; // @synthesize reuseIndex=_reuseIndex;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)didPressActionButton;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)navigateWithEndpoint:(id)arg1;
- (void)setActionButtonTitle:(id)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

