//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class UIView;

@interface YTWatchOverlayAddToLongPressedResponderEvent : YTResponderEvent
{
    UIView *_fromView;
}

+ (id)eventFromView:(id)arg1 firstResponder:(id)arg2;
@property(readonly, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1 firstResponder:(id)arg2;

@end
