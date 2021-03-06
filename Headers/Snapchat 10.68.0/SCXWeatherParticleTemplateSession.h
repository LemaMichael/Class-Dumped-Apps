//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCXWeatherAnimatedElement-Protocol.h"

@class NSString, SCXWeatherParticleTemplate;

@interface SCXWeatherParticleTemplateSession : NSObject <SCXWeatherAnimatedElement>
{
    double _addedAtTime;
    double _removedAtTime;
    SCXWeatherParticleTemplate *_template;
    double _seedOffset;
}

@property(nonatomic) double seedOffset; // @synthesize seedOffset=_seedOffset;
@property(retain, nonatomic) SCXWeatherParticleTemplate *template; // @synthesize template=_template;
@property(nonatomic) double removedAtTime; // @synthesize removedAtTime=_removedAtTime;
@property(nonatomic) double addedAtTime; // @synthesize addedAtTime=_addedAtTime;
- (void).cxx_destruct;
- (_Bool)isDone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

