//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "ModFormElement-Protocol.h"

@class NSLayoutConstraint;

@interface ModFormPadding : BaseView <ModFormElement>
{
    NSLayoutConstraint *_heightConstraint;
}

+ (id)customWithWindowWidth:(double)arg1;
+ (id)custom:(double)arg1;
+ (id)quarter;
+ (id)half;
+ (id)regular;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
- (void).cxx_destruct;
- (double)heightWithMaxSize:(struct CGSize)arg1;

@end

