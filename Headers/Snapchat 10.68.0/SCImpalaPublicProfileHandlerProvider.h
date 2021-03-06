//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaPublicProfileHandlerProviding-Protocol.h"

@class NSString, SCUserSession;

@interface SCImpalaPublicProfileHandlerProvider : NSObject <SCImpalaPublicProfileHandlerProviding>
{
    _Bool _forceReload;
    SCUserSession *_userSession;
}

@property(readonly, nonatomic) _Bool forceReload; // @synthesize forceReload=_forceReload;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)getHandlerWithBusinessProfileId:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1 forceReload:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

