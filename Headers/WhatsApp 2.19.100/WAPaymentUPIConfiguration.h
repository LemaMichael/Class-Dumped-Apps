//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC14MainAppLibrary22WAPaymentConfiguration.h"

@class NSString;

@interface WAPaymentUPIConfiguration : _TtC14MainAppLibrary22WAPaymentConfiguration
{
    // Error parsing type: , name: clTransactionId
    // Error parsing type: , name: fbTransactionId
    // Error parsing type: , name: hasInitialAmount
    // Error parsing type: , name: merchantCode
    // Error parsing type: , name: needsHandleValidation
    // Error parsing type: , name: receiverFBHandleId
    // Error parsing type: , name: receiverHandle
    // Error parsing type: , name: transactionRefId
    // Error parsing type: , name: url
    // Error parsing type: , name: receiverHandleName
}

- (void).cxx_destruct;
- (id)initWithSettingsData:(id)arg1;
@property(nonatomic, readonly) NSString *senderHandle;
@property(nonatomic, readonly) NSString *senderFBHandleId;
@property(nonatomic, copy) NSString *receiverHandleName; // @synthesize receiverHandleName;
@property(nonatomic, copy) NSString *url; // @synthesize url;
@property(nonatomic, copy) NSString *transactionRefId; // @synthesize transactionRefId;
@property(nonatomic, copy) NSString *receiverHandle; // @synthesize receiverHandle;
@property(nonatomic, copy) NSString *receiverFBHandleId; // @synthesize receiverFBHandleId;
@property(nonatomic) _Bool needsHandleValidation; // @synthesize needsHandleValidation;
@property(nonatomic, copy) NSString *merchantCode; // @synthesize merchantCode;
@property(nonatomic, copy) NSString *fbTransactionId; // @synthesize fbTransactionId;
@property(nonatomic, copy) NSString *clTransactionId; // @synthesize clTransactionId;

@end
