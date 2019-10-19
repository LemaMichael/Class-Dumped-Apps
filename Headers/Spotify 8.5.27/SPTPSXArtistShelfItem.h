//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFollowShelfItem-Protocol.h"

@class NSString, NSURL;
@protocol GLUEImageLoader;

@interface SPTPSXArtistShelfItem : NSObject <SPTFollowShelfItem>
{
    _Bool _following;
    NSURL *_uri;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    id <GLUEImageLoader> _imageLoader;
    NSString *_followerCount;
    NSString *_dismissUri;
}

@property(readonly, copy, nonatomic) NSString *dismissUri; // @synthesize dismissUri=_dismissUri;
@property(readonly, copy, nonatomic) NSString *followerCount; // @synthesize followerCount=_followerCount;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic, getter=isFollowing) _Bool following; // @synthesize following=_following;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)initWithDictionary:(id)arg1 imageLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
