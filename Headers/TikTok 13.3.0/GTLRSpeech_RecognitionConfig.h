//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSpeech_Context, NSNumber, NSString;

@interface GTLRSpeech_RecognitionConfig : GTLRObject
{
}


// Remaining properties
@property(copy, nonatomic) NSString *encoding; // @dynamic encoding;
@property(copy, nonatomic) NSString *languageCode; // @dynamic languageCode;
@property(retain, nonatomic) NSNumber *maxAlternatives; // @dynamic maxAlternatives;
@property(retain, nonatomic) NSNumber *profanityFilter; // @dynamic profanityFilter;
@property(retain, nonatomic) NSNumber *sampleRate; // @dynamic sampleRate;
@property(retain, nonatomic) GTLRSpeech_Context *speechContext; // @dynamic speechContext;
@end
