//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GIMMe, YTIPlayerOverlayVideoInteractions_Interaction, YTIVideoInteractionPopUpRenderer;

@interface YTReelInteractiveStickerView : UIView
{
    struct UIEdgeInsets kSafeZoneInsets;
    GIMMe *_gimme;
    YTIPlayerOverlayVideoInteractions_Interaction *_renderer;
    YTIVideoInteractionPopUpRenderer *_popUpRenderer;
    id <YTReelInteractiveStickerViewDelegate> _stickerDelegate;
}

@property(nonatomic) __weak id <YTReelInteractiveStickerViewDelegate> stickerDelegate; // @synthesize stickerDelegate=_stickerDelegate;
@property(readonly, nonatomic) YTIVideoInteractionPopUpRenderer *popUpRenderer; // @synthesize popUpRenderer=_popUpRenderer;
@property(retain, nonatomic) YTIPlayerOverlayVideoInteractions_Interaction *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isTouchRegionExcluded:(struct CGPoint)arg1 inView:(id)arg2;
- (void)didTapSticker:(id)arg1;
- (void)didTapViewChannelA11yCustomAction;
- (void)setPopUpRenderer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

