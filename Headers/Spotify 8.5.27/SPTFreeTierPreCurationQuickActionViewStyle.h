//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEAccessoryIconButtonStyle, NSString;

@interface SPTFreeTierPreCurationQuickActionViewStyle : NSObject <GLUEStyle>
{
    GLUEAccessoryIconButtonStyle *_contextMenuButtonStyle;
    GLUEAccessoryIconButtonStyle *_likeButtonStyle;
    GLUEAccessoryIconButtonStyle *_banButtonStyle;
    long long _contextMenuButtonIcon;
    long long _likeButtonIcon;
    long long _banButtonIcon;
    double _rightMargin;
}

@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) long long banButtonIcon; // @synthesize banButtonIcon=_banButtonIcon;
@property(nonatomic) long long likeButtonIcon; // @synthesize likeButtonIcon=_likeButtonIcon;
@property(nonatomic) long long contextMenuButtonIcon; // @synthesize contextMenuButtonIcon=_contextMenuButtonIcon;
@property(copy, nonatomic) GLUEAccessoryIconButtonStyle *banButtonStyle; // @synthesize banButtonStyle=_banButtonStyle;
@property(copy, nonatomic) GLUEAccessoryIconButtonStyle *likeButtonStyle; // @synthesize likeButtonStyle=_likeButtonStyle;
@property(copy, nonatomic) GLUEAccessoryIconButtonStyle *contextMenuButtonStyle; // @synthesize contextMenuButtonStyle=_contextMenuButtonStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

