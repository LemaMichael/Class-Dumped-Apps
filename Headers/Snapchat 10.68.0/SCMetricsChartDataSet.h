//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSNumberFormatter, NSString, NSTimeZone;

@interface SCMetricsChartDataSet : NSObject
{
    NSDictionary *_dailyValueByDate;
    NSDictionary *_weeklyValueByDate;
    NSDictionary *_monthlyValueByDate;
    NSNumber *_maxOfYAxisLabel;
    NSString *_prefix;
    NSString *_suffix;
    NSNumberFormatter *_formatter;
    unsigned long long _numberOfProvisionalDataPoints;
    long long _dataSource;
    NSNumber *_sumOfValueByDay;
    NSNumber *_sumOfValuesByWeek;
    NSNumber *_sumOfValuesByMonth;
    NSNumber *_sumOfAllValues;
    NSArray *_yAxisLabels;
    NSArray *_dataSetItems;
    NSTimeZone *_displayTimeZone;
}

+ (double)roundOffNumber:(double)arg1;
+ (_Bool)isIntegerType:(double)arg1;
+ (id)getUnitForPower:(int)arg1;
+ (int)calculatePowerForNumber:(double)arg1;
+ (id)getFormatterForNumber:(double)arg1 lessThanOneThousand:(_Bool)arg2;
+ (id)shortenNumber:(double)arg1 power:(int)arg2 unit:(id)arg3;
+ (id)shortenNumber:(double)arg1;
+ (id)_powerUnits;
@property(retain, nonatomic) NSTimeZone *displayTimeZone; // @synthesize displayTimeZone=_displayTimeZone;
@property(readonly, nonatomic) NSArray *dataSetItems; // @synthesize dataSetItems=_dataSetItems;
@property(readonly, nonatomic) NSArray *yAxisLabels; // @synthesize yAxisLabels=_yAxisLabels;
@property(readonly, nonatomic) NSNumber *sumOfAllValues; // @synthesize sumOfAllValues=_sumOfAllValues;
@property(readonly, nonatomic) NSNumber *sumOfValuesByMonth; // @synthesize sumOfValuesByMonth=_sumOfValuesByMonth;
@property(readonly, nonatomic) NSNumber *sumOfValuesByWeek; // @synthesize sumOfValuesByWeek=_sumOfValuesByWeek;
@property(readonly, nonatomic) NSNumber *sumOfValueByDay; // @synthesize sumOfValueByDay=_sumOfValueByDay;
- (void).cxx_destruct;
- (id)generateYAxisLabels:(double)arg1;
- (id)calendar;
- (id)getLocalCalendar;
- (id)stringFromDate:(id)arg1;
- (id)formatNumber:(id)arg1;
- (void)updateLabelMaxAndGenerateYAxisLabelsWithMaxYValue:(double)arg1;
- (void)calculateMaxAndGenerateYAxisLabels;
- (void)calculateYCoordinateLabelsAndPercentages;
- (unsigned long long)numberOfTotalPoints;
- (unsigned long long)numberOfPoints;
- (void)updateSumOfValuesWithStartDate:(id)arg1;
- (void)updateXCoordinatesAndYCoordinateValuesWithStartDate:(id)arg1 endDate:(id)arg2 provisionalDate:(id)arg3;
- (id)initWithDailyData:(id)arg1 weeklyData:(id)arg2 monthlyData:(id)arg3 lifetimeData:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 formatter:(id)arg7 dataSource:(long long)arg8;

@end

