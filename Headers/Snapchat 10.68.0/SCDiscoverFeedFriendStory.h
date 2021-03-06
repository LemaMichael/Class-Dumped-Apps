//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString, SCDiscoverFeedFriendStoryTypeData, SCStoriesStoryIdentifier, SCStoriesThumbnailMedia;

@interface SCDiscoverFeedFriendStory : NSObject <NSCopying>
{
    _Bool _hasUnviewedStories;
    _Bool _isStoryMuted;
    SCStoriesStoryIdentifier *_storyIdentifier;
    NSDate *_mostRecentUnviewedTimestamp;
    NSDate *_mostRecentViewedTimestamp;
    NSDate *_mostRecentStoryTimestamp;
    NSDate *_expirationDate;
    NSString *_displayName;
    SCStoriesThumbnailMedia *_thumbnail;
    SCDiscoverFeedFriendStoryTypeData *_typeData;
    long long _storyContentType;
    NSString *_mostRecentPosterUsername;
    NSString *_mostRecentPosterDisplayName;
}

@property(readonly, copy, nonatomic) NSString *mostRecentPosterDisplayName; // @synthesize mostRecentPosterDisplayName=_mostRecentPosterDisplayName;
@property(readonly, copy, nonatomic) NSString *mostRecentPosterUsername; // @synthesize mostRecentPosterUsername=_mostRecentPosterUsername;
@property(readonly, nonatomic) long long storyContentType; // @synthesize storyContentType=_storyContentType;
@property(readonly, copy, nonatomic) SCDiscoverFeedFriendStoryTypeData *typeData; // @synthesize typeData=_typeData;
@property(readonly, copy, nonatomic) SCStoriesThumbnailMedia *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) _Bool isStoryMuted; // @synthesize isStoryMuted=_isStoryMuted;
@property(readonly, nonatomic) _Bool hasUnviewedStories; // @synthesize hasUnviewedStories=_hasUnviewedStories;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSDate *mostRecentStoryTimestamp; // @synthesize mostRecentStoryTimestamp=_mostRecentStoryTimestamp;
@property(readonly, copy, nonatomic) NSDate *mostRecentViewedTimestamp; // @synthesize mostRecentViewedTimestamp=_mostRecentViewedTimestamp;
@property(readonly, copy, nonatomic) NSDate *mostRecentUnviewedTimestamp; // @synthesize mostRecentUnviewedTimestamp=_mostRecentUnviewedTimestamp;
@property(readonly, copy, nonatomic) SCStoriesStoryIdentifier *storyIdentifier; // @synthesize storyIdentifier=_storyIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryIdentifier:(id)arg1 mostRecentUnviewedTimestamp:(id)arg2 mostRecentViewedTimestamp:(id)arg3 mostRecentStoryTimestamp:(id)arg4 expirationDate:(id)arg5 hasUnviewedStories:(_Bool)arg6 isStoryMuted:(_Bool)arg7 displayName:(id)arg8 thumbnail:(id)arg9 typeData:(id)arg10 storyContentType:(long long)arg11 mostRecentPosterUsername:(id)arg12 mostRecentPosterDisplayName:(id)arg13;

@end

