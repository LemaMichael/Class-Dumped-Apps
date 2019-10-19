//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSNumber, NSString;

@interface AWETXBanRecommendUserModel : MTLModel <MTLJSONSerializing>
{
    _Bool _isAddressBookFriend;
    NSString *_userName;
    NSString *_userID;
    AWEURLModel *_avatarThumbURL;
    AWEURLModel *_avatarMediumURL;
    AWEURLModel *_avatarLargerURL;
    NSNumber *_recommendScore;
    NSString *_recommendReason;
}

+ (id)avatarMediumJSONAdapter;
+ (id)avatarLargerJSONAdapter;
+ (id)avatarThumbJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isAddressBookFriend; // @synthesize isAddressBookFriend=_isAddressBookFriend;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSNumber *recommendScore; // @synthesize recommendScore=_recommendScore;
@property(retain, nonatomic) AWEURLModel *avatarLargerURL; // @synthesize avatarLargerURL=_avatarLargerURL;
@property(retain, nonatomic) AWEURLModel *avatarMediumURL; // @synthesize avatarMediumURL=_avatarMediumURL;
@property(retain, nonatomic) AWEURLModel *avatarThumbURL; // @synthesize avatarThumbURL=_avatarThumbURL;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
