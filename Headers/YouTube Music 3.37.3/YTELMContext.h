//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ELMContext-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString;
@protocol ELMClientResourceLoader, ELMDispatcher, ELMFontLoader, ELMImageDownloader, ELMInteractionLogger, ELMLogger, ELMPerformanceAgent, ELMPriorityLoader, ELMResourceLoader, ELMRuntimeConfig, ELMStore, ELMTemplateLoader, ELMValueStore, YTResponder;

@interface YTELMContext : NSObject <ELMContext, YTResponder>
{
    id <ELMPerformanceAgent> _agent;
    id <ELMRuntimeConfig> _runtimeConfig;
    id <ELMDispatcher> _dispatcher;
    id <ELMLogger> _logger;
    id <YTResponder> _parentResponder;
    id <ELMInteractionLogger> _interactionLogger;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly) id <ELMInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
@property(readonly) id <ELMValueStore> valueStore;
@property(readonly) id <ELMPerformanceAgent> performanceAgent;
@property(readonly) id <ELMPriorityLoader> priorityLoader;
@property(readonly) id <ELMImageDownloader> imageDownloader;
@property(readonly) id <ELMTemplateLoader> templateLoader;
@property(readonly) id <ELMLogger> logger;
@property(readonly) id <ELMDispatcher> dispatcher;
@property(readonly) id <ELMRuntimeConfig> runtimeConfig;
@property(readonly) id <ELMFontLoader> fontLoader;
@property(readonly) id <ELMResourceLoader> resourceLoader;
@property(readonly) id <ELMClientResourceLoader> clientResourceLoader;
@property(readonly) id <ELMStore> store;
- (id)initWithResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

