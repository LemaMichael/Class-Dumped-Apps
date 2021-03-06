//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSDate, NSString, NSURL;

@interface RKModmailRecentConvo : MTLModel <MTLJSONSerializing>
{
    NSDate *_date;
    NSString *_identifier;
    NSURL *_permalink;
    NSString *_subject;
}

+ (id)permalinkJSONTransformer;
+ (id)dateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSURL *permalink; // @synthesize permalink=_permalink;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

