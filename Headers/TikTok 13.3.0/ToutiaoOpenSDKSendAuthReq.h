//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ToutiaoOpenSDKBaseReq.h"

@class NSOrderedSet, NSString;

@interface ToutiaoOpenSDKSendAuthReq : ToutiaoOpenSDKBaseReq
{
    NSOrderedSet *_permissions;
    NSOrderedSet *_additionalPermissions;
    NSString *_state;
}

@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSOrderedSet *additionalPermissions; // @synthesize additionalPermissions=_additionalPermissions;
@property(retain, nonatomic) NSOrderedSet *permissions; // @synthesize permissions=_permissions;
- (void).cxx_destruct;
- (void)syncPermissions;

@end

