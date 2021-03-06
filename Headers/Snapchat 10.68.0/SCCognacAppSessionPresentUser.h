//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface SCCognacAppSessionPresentUser : NSObject
{
    NSString *_userId;
    NSString *_userName;
    NSString *_displayName;
    NSString *_nameInitials;
    NSString *_shortendDisplayName;
    NSString *_avatarId;
    NSString *_selfieId;
    UIColor *_presenceColor;
}

@property(readonly, nonatomic) UIColor *presenceColor; // @synthesize presenceColor=_presenceColor;
@property(readonly, copy, nonatomic) NSString *selfieId; // @synthesize selfieId=_selfieId;
@property(readonly, copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
@property(readonly, copy, nonatomic) NSString *shortendDisplayName; // @synthesize shortendDisplayName=_shortendDisplayName;
@property(readonly, copy, nonatomic) NSString *nameInitials; // @synthesize nameInitials=_nameInitials;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUserId:(id)arg1 userName:(id)arg2 displayName:(id)arg3 avatarId:(id)arg4 selfieId:(id)arg5 presenceColor:(id)arg6;

@end

