//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveFeedSchemeHandler-Protocol.h"

@class NSString;
@protocol IESLiveContainerRouter;

@interface IESLiveFeedSchemeHandlerWrapper : NSObject <IESLiveFeedSchemeHandler>
{
    id <IESLiveContainerRouter> _containerRouter;
}

@property(retain, nonatomic) id <IESLiveContainerRouter> containerRouter; // @synthesize containerRouter=_containerRouter;
- (void).cxx_destruct;
- (_Bool)openScheme:(id)arg1;
- (_Bool)canOpenScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
