//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (SGMFetch)
- (id)sgm_stringKey:(id)arg1;
- (int)sgm_intKey:(id)arg1;
- (long long)sgm_longlongKey:(id)arg1;
- (double)sgm_doubleKey:(id)arg1 default:(double)arg2;
- (double)sgm_doubleKey:(id)arg1;
- (_Bool)sgm_boolKey:(id)arg1;
- (id)sgm_numberOrStringKey:(id)arg1;
- (id)sgm_numberKey:(id)arg1;
- (id)sgm_arrayKey:(id)arg1;
- (id)sgm_dictionaryKey:(id)arg1;
- (id)sgm_fetchValueWithType:(Class)arg1 forKey:(id)arg2;
@end

