//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface AWEGeneralPopupRecord : NSObject
{
    NSDate *_lastShownDate;
    long long _numberOfTimesShown;
}

@property(nonatomic) long long numberOfTimesShown; // @synthesize numberOfTimesShown=_numberOfTimesShown;
@property(retain, nonatomic) NSDate *lastShownDate; // @synthesize lastShownDate=_lastShownDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

