//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAwemeModel, AWECommerceSmartPhoneModel, NSArray, NSString;
@protocol AWECompanyLinkAreaViewDelegate;

@interface AWECompanyLinkAreaView : UIView
{
    NSString *_challengeID;
    AWECommerceSmartPhoneModel *_smartPhoneModel;
    id <AWECompanyLinkAreaViewDelegate> _delegate;
    AWEAwemeModel *_awemeModel;
    NSString *_userID;
    NSString *_refer;
    NSArray *_linkList;
}

+ (id)makeAddInfoButton;
+ (id)getIconNameForLink:(long long)arg1 inScene:(long long)arg2;
+ (_Bool)isSame:(id)arg1 with:(id)arg2;
+ (id)getIconForLink:(long long)arg1 inScene:(long long)arg2;
+ (void)openLink:(id)arg1 refer:(id)arg2 challengeId:(id)arg3 smartPhoneModel:(id)arg4;
+ (void)trackEventWithTag:(id)arg1 link:(long long)arg2 referString:(id)arg3 userID:(id)arg4 attributes:(id)arg5;
+ (double)widthForLinkTitle:(id)arg1;
+ (id)createBtnWithImage:(id)arg1 title:(id)arg2 width:(double)arg3 height:(double)arg4 pointX:(double)arg5 pointY:(double)arg6 index:(long long)arg7 font:(id)arg8 scene:(long long)arg9;
+ (id)createBtnWithLink:(id)arg1 width:(double)arg2 height:(double)arg3 pointX:(double)arg4 pointY:(double)arg5 index:(long long)arg6 font:(id)arg7 scene:(long long)arg8;
@property(copy, nonatomic) NSArray *linkList; // @synthesize linkList=_linkList;
@property(copy, nonatomic) NSString *refer; // @synthesize refer=_refer;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) AWEAwemeModel *awemeModel; // @synthesize awemeModel=_awemeModel;
@property(nonatomic) __weak id <AWECompanyLinkAreaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWECommerceSmartPhoneModel *smartPhoneModel; // @synthesize smartPhoneModel=_smartPhoneModel;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
- (void).cxx_destruct;
- (void)enterBusinessEditPage;
- (void)linkLabelClicked:(id)arg1;
- (double)configWithLinkList:(id)arg1 awemeModel:(id)arg2 userID:(id)arg3 isLogSent:(_Bool)arg4 inScene:(long long)arg5 isCurrentUser:(_Bool)arg6;
- (double)configWithLinkList:(id)arg1 awemeModel:(id)arg2 userID:(id)arg3 isLogSent:(_Bool)arg4 inScene:(long long)arg5;

@end
