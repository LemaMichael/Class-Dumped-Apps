//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface OGLAccountServiceAccountSettingsParams : NSObject
{
    UIViewController *_parentViewController;
    CDUnknownBlockType _singleAppSignOutCallback;
    CDUnknownBlockType _removeAccountCallback;
}

@property(copy, nonatomic) CDUnknownBlockType removeAccountCallback; // @synthesize removeAccountCallback=_removeAccountCallback;
@property(copy, nonatomic) CDUnknownBlockType singleAppSignOutCallback; // @synthesize singleAppSignOutCallback=_singleAppSignOutCallback;
@property(retain, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;

@end

