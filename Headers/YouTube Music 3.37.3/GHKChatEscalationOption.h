//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GHKBaseEscalationOption.h"

@class GHKChatAvailability, NSString;

@interface GHKChatEscalationOption : GHKBaseEscalationOption
{
    NSString *_chatPoolID;
    NSString *_caseID;
    GHKChatAvailability *_availability;
}

@property(retain, nonatomic) GHKChatAvailability *availability; // @synthesize availability=_availability;
@property(copy, nonatomic) NSString *caseID; // @synthesize caseID=_caseID;
@property(copy, nonatomic) NSString *chatPoolID; // @synthesize chatPoolID=_chatPoolID;
- (void).cxx_destruct;
- (id)init;

@end
