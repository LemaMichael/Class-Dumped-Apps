//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTIPlayerResponse, YTIWatchEndpointSupportedOnesieConfig;

@protocol YTWatchEndpointProtocol <NSObject>
@property(readonly, nonatomic) YTIWatchEndpointSupportedOnesieConfig *watchEndpointSupportedOnesieConfig;
@property(readonly, nonatomic) _Bool hasWatchEndpointSupportedOnesieConfig;
@property(readonly, nonatomic) YTIPlayerResponse *playerResponse;
@property(readonly, nonatomic) _Bool hasPlayerResponse;
@property(readonly, nonatomic, getter=isMDXPreviewDisabled) _Bool MDXPreviewDisabled;
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
@property(readonly, nonatomic) NSString *playerParams;
@property(readonly, nonatomic) _Bool hasPlayerParams;
@property(readonly, nonatomic) NSString *params;
@property(readonly, nonatomic) _Bool hasParams;
@property(readonly, nonatomic) float endTimeSeconds;
@property(readonly, nonatomic) _Bool hasEndTimeSeconds;
@property(readonly, nonatomic) float startTimeSeconds;
@property(readonly, nonatomic) _Bool hasStartTimeSeconds;
@property(readonly, nonatomic) unsigned long long index;
@property(readonly, nonatomic) _Bool hasIndex;
@property(readonly, nonatomic) NSString *playlistId;
@property(readonly, nonatomic) _Bool hasPlaylistId;
@property(readonly, nonatomic) NSString *videoId;
@property(readonly, nonatomic) _Bool hasVideoId;
@end

