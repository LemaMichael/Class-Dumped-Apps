//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEI18NVerifyBaseViewController.h"

@class NSString;

@interface AWEI18NSMSVerifyViewController : AWEI18NVerifyBaseViewController
{
    _Bool _hasUpdateUI;
    NSString *_phoneNumber;
}

@property(nonatomic) _Bool hasUpdateUI; // @synthesize hasUpdateUI=_hasUpdateUI;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (void)resendCode;
- (void)checkVerifyCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didFinishInputVerifyCode:(id)arg1;
- (_Bool)checkIfTwoStepAuthDataIsValid:(id)arg1;
- (void)viewDidLoad;

@end
