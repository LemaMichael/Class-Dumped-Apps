//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol WADeviceDate;

@interface WACachedViewedStatusAd : NSObject
{
    NSDate<WADeviceDate> *_date;
    NSString *_adID;
}

@property(readonly, nonatomic) NSString *adID; // @synthesize adID=_adID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate<WADeviceDate> *expirationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusAd:(id)arg1 viewedDate:(id)arg2;

@end
