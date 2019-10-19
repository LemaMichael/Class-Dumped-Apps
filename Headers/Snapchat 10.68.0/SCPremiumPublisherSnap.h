//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSString, SCPremiumPublisherTile;

@interface SCPremiumPublisherSnap : NSObject <NSCopying, NSCoding>
{
    _Bool _viewed;
    _Bool _mediaTypeImage;
    int _adType;
    NSString *_snapURL;
    NSString *_hashValue;
    NSString *_snapId;
    NSString *_snapType;
    NSData *_adPlacementMetadata;
    SCPremiumPublisherTile *_tile;
    long long _sequence;
}

@property(readonly, nonatomic) _Bool mediaTypeImage; // @synthesize mediaTypeImage=_mediaTypeImage;
@property(readonly, nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(readonly, nonatomic) _Bool viewed; // @synthesize viewed=_viewed;
@property(readonly, copy, nonatomic) SCPremiumPublisherTile *tile; // @synthesize tile=_tile;
@property(readonly, copy, nonatomic) NSData *adPlacementMetadata; // @synthesize adPlacementMetadata=_adPlacementMetadata;
@property(readonly, nonatomic) int adType; // @synthesize adType=_adType;
@property(readonly, copy, nonatomic) NSString *snapType; // @synthesize snapType=_snapType;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) NSString *hashValue; // @synthesize hashValue=_hashValue;
@property(readonly, copy, nonatomic) NSString *snapURL; // @synthesize snapURL=_snapURL;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapURL:(id)arg1 hashValue:(id)arg2 snapId:(id)arg3 snapType:(id)arg4 adType:(int)arg5 adPlacementMetadata:(id)arg6 tile:(id)arg7 viewed:(_Bool)arg8 sequence:(long long)arg9 mediaTypeImage:(_Bool)arg10;
- (id)initWithCoder:(id)arg1;

@end
