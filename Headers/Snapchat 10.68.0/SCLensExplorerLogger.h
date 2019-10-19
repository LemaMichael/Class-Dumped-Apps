//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerActionLoggerProtocol-Protocol.h"
#import "SCLensExplorerImpressionLoggerProtocol-Protocol.h"
#import "SCLensExplorerPageEventLoggerProtocol-Protocol.h"

@class NSString, SCLensExplorerEventContext;
@protocol SCLensExplorerActionLoggerProtocol, SCLensExplorerImpressionLoggerProtocol, SCLensExplorerLoggerProtocol, SCLensExplorerPageEventLoggerProtocol;

@interface SCLensExplorerLogger : NSObject <SCLensExplorerPageEventLoggerProtocol, SCLensExplorerImpressionLoggerProtocol, SCLensExplorerActionLoggerProtocol>
{
    id <SCLensExplorerLoggerProtocol> _rankingLogger;
    SCLensExplorerEventContext *_eventContext;
    id <SCLensExplorerPageEventLoggerProtocol> _pageLogger;
    id <SCLensExplorerImpressionLoggerProtocol> _impressionLogger;
    id <SCLensExplorerActionLoggerProtocol> _actionLogger;
}

- (void).cxx_destruct;
- (void)_createLoggersWithPageType:(unsigned long long)arg1 pageTypeSpecific:(id)arg2;
- (void)logUnsubscribeFromCreator:(id)arg1;
- (void)logSubscribeToCreator:(id)arg1;
- (void)logUnlockActionForImpressionItem:(id)arg1 pageTypeSpecific:(id)arg2;
- (void)logUnlockActionForImpressionItem:(id)arg1;
- (void)logShortImpressions:(id)arg1;
- (void)logLongImpressions:(id)arg1;
- (void)logPageViewEvent;
- (void)logPageOpenEvent:(unsigned long long)arg1 pageTypeSpecific:(id)arg2;
- (id)initWithRankingLogger:(id)arg1 loggerContext:(id)arg2;
- (id)initWithRankingLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
