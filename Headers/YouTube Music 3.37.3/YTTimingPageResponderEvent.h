//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@interface YTTimingPageResponderEvent : YTResponderEvent
{
    int _type;
    int _source;
}

+ (id)eventWithType:(int)arg1 eventSource:(int)arg2 firstResponder:(id)arg3;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)initWithType:(int)arg1 eventSource:(int)arg2 firstResponder:(id)arg3;

@end
