//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSString, UIImage;
@protocol JETVideoSegmentDelegate;

@interface JETVideoSegment : NSObject
{
    AVPlayerItem *_player;
    UIImage *_initialFrame;
    UIImage *_finalFrame;
    unsigned long long _startTime;
    NSString *_name;
    id <JETVideoSegmentDelegate> _delegate;
}

@property(nonatomic) __weak id <JETVideoSegmentDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UIImage *finalFrame; // @synthesize finalFrame=_finalFrame;
@property(retain, nonatomic) UIImage *initialFrame; // @synthesize initialFrame=_initialFrame;
@property(retain, nonatomic) AVPlayerItem *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)playbackDidFinishNotification:(id)arg1;
- (id)loadVideoNamed:(id)arg1;
- (id)imagePathForResource:(id)arg1;
- (id)imageFromName:(id)arg1;
- (id)finalFrameForVideoName:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 delegate:(id)arg2;

@end

