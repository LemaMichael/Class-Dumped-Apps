//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEUserRecommendManager : NSObject
{
}

+ (_Bool)p_shouldShowlocation:(id)arg1;
+ (_Bool)p_shouldShowSchool:(id)arg1;
+ (_Bool)p_shouldShowAge:(id)arg1;
+ (_Bool)p_shouldShowGender:(id)arg1;
+ (_Bool)p_shouldShowTagInfo:(id)arg1;
+ (unsigned long long)getTagsForUser:(id)arg1 withMaxWidth:(double)arg2 withFont:(id)arg3 withLabelEdgeInset:(struct UIEdgeInsets)arg4 withInterval:(double)arg5;
+ (id)contactFriendModel;
+ (long long)contactFriendsCellIndex;
+ (id)addContactFriendsCellArray:(id)arg1;
+ (void)closeContactFriendsCell;
+ (void)showContactFriendsCell;
+ (_Bool)canShowContactFriendsCell;
+ (void)updateShowRecommendViewValue:(_Bool)arg1;
+ (_Bool)currentValueForUserHomeShowRecommendView;
+ (_Bool)showRecommendView:(id)arg1;
+ (_Bool)needShowNavMoreButton:(id)arg1;
+ (_Bool)needShowRecommendButton:(id)arg1;

@end

