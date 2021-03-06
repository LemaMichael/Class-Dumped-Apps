//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IESSampleBuffer : NSObject
{
    _Bool _isTrackTransBuffer;
    int _trackID1;
    int _trackID2;
    NSString *_bufferName;
    struct __CVBuffer *_pixelBuf1;
    struct __CVBuffer *_pixelBuf2;
    IESSampleBuffer *_previous;
    IESSampleBuffer *_next;
    CDStruct_1b6d18a9 _time;
}

+ (id)getPixelBufferName:(struct __CVBuffer *)arg1;
@property(retain, nonatomic) IESSampleBuffer *next; // @synthesize next=_next;
@property(retain, nonatomic) IESSampleBuffer *previous; // @synthesize previous=_previous;
@property(nonatomic) _Bool isTrackTransBuffer; // @synthesize isTrackTransBuffer=_isTrackTransBuffer;
@property(nonatomic) struct __CVBuffer *pixelBuf2; // @synthesize pixelBuf2=_pixelBuf2;
@property(nonatomic) int trackID2; // @synthesize trackID2=_trackID2;
@property(nonatomic) struct __CVBuffer *pixelBuf1; // @synthesize pixelBuf1=_pixelBuf1;
@property(nonatomic) int trackID1; // @synthesize trackID1=_trackID1;
@property(retain, nonatomic) NSString *bufferName; // @synthesize bufferName=_bufferName;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrametime:(CDStruct_1b6d18a9)arg1 bufferName:(id)arg2 buffer:(struct __CVBuffer *)arg3 trackID:(int)arg4 buffer2:(struct __CVBuffer *)arg5 trackID2:(int)arg6;
- (id)initWithFrametime:(CDStruct_1b6d18a9)arg1 bufferName:(id)arg2 buffer:(struct __CVBuffer *)arg3 trackID:(int)arg4;

@end

