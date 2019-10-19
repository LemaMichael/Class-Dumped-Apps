//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSArray, YTIButtonRenderer, YTIFormattedString, YTIIcon, YTIPhonebookContactSectionTitleRenderer, YTIPhonebookInviteTokenData;

@interface YTPhonebookDataSourceSection : NSObject
{
    GIMMe *_gimme;
    NSArray *_contacts;
    YTIPhonebookContactSectionTitleRenderer *_titleRenderer;
    YTIPhonebookInviteTokenData *_tokenData;
    YTIButtonRenderer *_buttonRenderer;
    YTIFormattedString *_invitedText;
    YTIIcon *_defaultIcon;
}

@property(retain, nonatomic) YTIIcon *defaultIcon; // @synthesize defaultIcon=_defaultIcon;
@property(retain, nonatomic) YTIFormattedString *invitedText; // @synthesize invitedText=_invitedText;
@property(retain, nonatomic) YTIButtonRenderer *buttonRenderer; // @synthesize buttonRenderer=_buttonRenderer;
@property(retain, nonatomic) YTIPhonebookInviteTokenData *tokenData; // @synthesize tokenData=_tokenData;
@property(retain, nonatomic) YTIPhonebookContactSectionTitleRenderer *titleRenderer; // @synthesize titleRenderer=_titleRenderer;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)contact:(unsigned long long)arg1;
- (id)init;
- (id)initWithDataSourceSection:(id)arg1 filterPredicate:(id)arg2;
- (id)initWithSectionRenderer:(id)arg1;

@end
