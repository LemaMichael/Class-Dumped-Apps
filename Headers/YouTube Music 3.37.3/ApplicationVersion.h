//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ApplicationVersion : NSObject
{
    unsigned long long major_;
    unsigned long long minor_;
    unsigned long long revision_;
    unsigned long long build_;
    _Bool hasBuild_;
}

+ (id)currentApplicationVersion;
+ (id)applicationVersionWithString:(id)arg1;
+ (id)applicationVersionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 revision:(unsigned long long)arg3 build:(unsigned long long)arg4;
+ (id)applicationVersionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 build:(unsigned long long)arg3;
@property(readonly, nonatomic) _Bool hasBuild; // @synthesize hasBuild=hasBuild_;
@property(readonly, nonatomic) unsigned long long build; // @synthesize build=build_;
@property(readonly, nonatomic) unsigned long long revision; // @synthesize revision=revision_;
@property(readonly, nonatomic) unsigned long long minor; // @synthesize minor=minor_;
@property(readonly, nonatomic) unsigned long long major; // @synthesize major=major_;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 revision:(unsigned long long)arg3 build:(unsigned long long)arg4 hasBuild:(_Bool)arg5;

@end
