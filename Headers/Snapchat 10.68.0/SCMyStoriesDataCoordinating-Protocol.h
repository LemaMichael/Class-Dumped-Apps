//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDataCoordinating-Protocol.h"

@class NSArray, NSString;

@protocol SCMyStoriesDataCoordinating <SCDataCoordinating>
- (void)fetchMyStoriesWithCompletion:(void (^)(_Bool))arg1;
- (void)didDeleteSnapForServerId:(NSString *)arg1;
- (NSArray *)allMyStorySnapIds;
@end

