//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSerengetiContextProviding-Protocol.h"

@class User;

@interface SCSerengetiSnapContextProvider : NSObject <SCSerengetiContextProviding>
{
    User *_user;
}

- (void).cxx_destruct;
- (id)configuration;
- (id)userAgent;
- (id)userId;
- (id)username;
- (id)userDisplayName;
- (id)initWithUser:(id)arg1;

@end

