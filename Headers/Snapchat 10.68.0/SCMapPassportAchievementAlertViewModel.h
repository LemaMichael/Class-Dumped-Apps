//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCMapPassportAchievementAlertViewModel : SCComposerMarshallableObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_bitmojiStickerId;
    NSString *_doneButtonTitle;
}

@property(copy, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(copy, nonatomic) NSString *bitmojiStickerId; // @synthesize bitmojiStickerId=_bitmojiStickerId;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 bitmojiStickerId:(id)arg3 doneButtonTitle:(id)arg4;

@end

