//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CommentTreeNodeHeaderOptions : NSObject
{
    _Bool _shouldShowSubredditName;
    _Bool _shouldShowModIcons;
    _Bool _shouldShowAuthorFlair;
    _Bool _shouldShowLockButton;
    _Bool _shouldIgnoreLeveling;
}

+ (id)defaultOptions;
@property(nonatomic) _Bool shouldIgnoreLeveling; // @synthesize shouldIgnoreLeveling=_shouldIgnoreLeveling;
@property(nonatomic) _Bool shouldShowLockButton; // @synthesize shouldShowLockButton=_shouldShowLockButton;
@property(nonatomic) _Bool shouldShowAuthorFlair; // @synthesize shouldShowAuthorFlair=_shouldShowAuthorFlair;
@property(nonatomic) _Bool shouldShowModIcons; // @synthesize shouldShowModIcons=_shouldShowModIcons;
@property(nonatomic) _Bool shouldShowSubredditName; // @synthesize shouldShowSubredditName=_shouldShowSubredditName;

@end

