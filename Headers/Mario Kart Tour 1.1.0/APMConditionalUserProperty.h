//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class APMEvent, APMValue, NSString;

@interface APMConditionalUserProperty : NSObject <NSCopying>
{
    _Bool _active;
    NSString *_name;
    NSString *_origin;
    APMValue *_value;
    NSString *_triggerEventName;
    double _triggerTimeout;
    double _timeToLive;
    APMEvent *_triggeredEvent;
    APMEvent *_timedOutEvent;
    APMEvent *_expiredEvent;
    double _creationTimestamp;
    double _triggeredTimestamp;
}

@property(nonatomic) double triggeredTimestamp; // @synthesize triggeredTimestamp=_triggeredTimestamp;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(copy, nonatomic) APMEvent *expiredEvent; // @synthesize expiredEvent=_expiredEvent;
@property(copy, nonatomic) APMEvent *timedOutEvent; // @synthesize timedOutEvent=_timedOutEvent;
@property(copy, nonatomic) APMEvent *triggeredEvent; // @synthesize triggeredEvent=_triggeredEvent;
@property(nonatomic) double timeToLive; // @synthesize timeToLive=_timeToLive;
@property(nonatomic) double triggerTimeout; // @synthesize triggerTimeout=_triggerTimeout;
@property(copy, nonatomic) NSString *triggerEventName; // @synthesize triggerEventName=_triggerEventName;
@property(copy, nonatomic) APMValue *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

