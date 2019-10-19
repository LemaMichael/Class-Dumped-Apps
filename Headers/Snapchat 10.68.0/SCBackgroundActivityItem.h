//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCBackgroundActivityItem : NSObject
{
    NSDate *_timestamp;
    unsigned long long _backgroundActivityStatusType;
    NSString *_backgroundActivityIdentifier;
    NSString *_backgroundActivityAttributionKey;
}

@property(copy, nonatomic) NSString *backgroundActivityAttributionKey; // @synthesize backgroundActivityAttributionKey=_backgroundActivityAttributionKey;
@property(copy, nonatomic) NSString *backgroundActivityIdentifier; // @synthesize backgroundActivityIdentifier=_backgroundActivityIdentifier;
@property(nonatomic) unsigned long long backgroundActivityStatusType; // @synthesize backgroundActivityStatusType=_backgroundActivityStatusType;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)initWithTimestamp:(id)arg1 backgroundActivityStatusType:(unsigned long long)arg2 backgroundActivityIdentifier:(id)arg3 backgroundActivityAttributionKey:(id)arg4;

@end
