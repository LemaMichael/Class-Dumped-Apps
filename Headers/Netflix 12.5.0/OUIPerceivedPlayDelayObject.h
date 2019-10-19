//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPerceivedPlayDelayEvent.h"

@class NSNumber, NSString;

@interface OUIPerceivedPlayDelayObject : NFUIPerceivedPlayDelayEvent
{
    NSNumber *version;
    double _loadMemberExperience;
    double _profileGateLoaded;
    double _profileSelected;
    double _profileGateDismissed;
    double _lolomoDataFetched;
    double _uiDisplayedStart;
    double _uiPlayCommand;
    double _uiPlayReady;
    double _uiPlaying;
    NSString *_uiView;
    unsigned long long _inSessionEventLogCount;
}

+ (id)getProfileEventString:(unsigned long long)arg1;
+ (unsigned long long)getProfileEventEnum:(id)arg1;
+ (id)uiEventTriggers;
+ (id)coreEventTriggers;
+ (id)eventTriggers;
@property(nonatomic) unsigned long long inSessionEventLogCount; // @synthesize inSessionEventLogCount=_inSessionEventLogCount;
@property(copy, nonatomic) NSString *uiView; // @synthesize uiView=_uiView;
@property(nonatomic) double uiPlaying; // @synthesize uiPlaying=_uiPlaying;
@property(nonatomic) double uiPlayReady; // @synthesize uiPlayReady=_uiPlayReady;
@property(nonatomic) double uiPlayCommand; // @synthesize uiPlayCommand=_uiPlayCommand;
@property(nonatomic) double uiDisplayedStart; // @synthesize uiDisplayedStart=_uiDisplayedStart;
@property(nonatomic) double lolomoDataFetched; // @synthesize lolomoDataFetched=_lolomoDataFetched;
@property(nonatomic) double profileGateDismissed; // @synthesize profileGateDismissed=_profileGateDismissed;
@property(nonatomic) double profileSelected; // @synthesize profileSelected=_profileSelected;
@property(nonatomic) double profileGateLoaded; // @synthesize profileGateLoaded=_profileGateLoaded;
@property(nonatomic) double loadMemberExperience; // @synthesize loadMemberExperience=_loadMemberExperience;
@property(copy, nonatomic) NSNumber *version; // @synthesize version;
- (void).cxx_destruct;
- (void)reset;
- (id)aggregateEvent:(id)arg1;
- (id)getProfileEvent;
- (id)dictionaryFromTriggers:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
