//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class OrchBankAccountVerification, OrchFormHeader, OrchMandateForm;

@interface OrchInstrumentActivationForm : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchBankAccountVerification *bankAccountVerification; // @dynamic bankAccountVerification;
@property(retain, nonatomic) OrchFormHeader *formHeader; // @dynamic formHeader;
@property(readonly, nonatomic) int formOneOfCase; // @dynamic formOneOfCase;
@property(nonatomic) _Bool hasFormHeader; // @dynamic hasFormHeader;
@property(retain, nonatomic) OrchMandateForm *mandateForm; // @dynamic mandateForm;

@end
