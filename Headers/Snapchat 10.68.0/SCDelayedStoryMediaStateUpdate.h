//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Story;

@interface SCDelayedStoryMediaStateUpdate : NSObject
{
    Story *_story;
    long long _mediaState;
    _Bool _shouldRemoveMedia;
    _Bool _didUpdate;
}

- (void).cxx_destruct;
- (void)applyUpdate;
- (id)initWithStory:(id)arg1 mediaState:(long long)arg2 shouldRemoveMedia:(_Bool)arg3;

@end
