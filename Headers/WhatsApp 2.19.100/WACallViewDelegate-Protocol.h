//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WACallView, WAUserJID;

@protocol WACallViewDelegate <NSObject>
- (_Bool)callViewDidGetSelectedByVoiceOver:(WACallView *)arg1;
- (void)callView:(WACallView *)arg1 didCancellCallToParticipantJID:(WAUserJID *)arg2;
@end
