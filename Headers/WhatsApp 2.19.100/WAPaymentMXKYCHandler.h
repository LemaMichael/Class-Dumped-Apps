//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentBaseHandler.h"

@protocol WAPaymentBaseHandlerDelegate;

@interface WAPaymentMXKYCHandler : WAPaymentBaseHandler
{
    // Error parsing type: , name: paymentManager
    // Error parsing type: , name: delegate
    // Error parsing type: , name: currentErrorHandler
    // Error parsing type: , name: currentVC
    // Error parsing type: , name: providerKeyManager
    // Error parsing type: , name: kycManager
    // Error parsing type: , name: initialAccountEligibilityState
    // Error parsing type: , name: kycState
    // Error parsing type: , name: name
    // Error parsing type: , name: dob
}

- (void).cxx_destruct;
- (void)processCheckDOBResponse:(id)arg1;
- (void)processCheckNameResponse:(id)arg1;
- (void)processGetKYCState:(id)arg1;
- (void)processGetAccountEligibilityState:(id)arg1;
@property(nonatomic) __weak id <WAPaymentBaseHandlerDelegate> delegate; // @synthesize delegate;

@end

