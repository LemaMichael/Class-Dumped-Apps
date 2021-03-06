//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveComponentContext, NSString;

@interface HTSLiveAudienceControllerFactory : NSObject
{
    NSString *_sourcePage;
    IESLiveComponentContext *_componentContext;
}

@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(copy, nonatomic) NSString *sourcePage; // @synthesize sourcePage=_sourcePage;
- (void).cxx_destruct;
- (id)controllerWithController:(id)arg1 byReplaceLiveRoomModel:(id)arg2 pageContext:(id)arg3;
- (id)controllerWithLiveRoomModel:(id)arg1 player:(id)arg2 pageContext:(id)arg3;
- (id)nestedControllerWithLiveRoomModel:(id)arg1 pageContext:(id)arg2;

@end

