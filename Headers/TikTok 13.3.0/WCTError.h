//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface WCTError : NSError
{
    int _type;
}

+ (id)errorWithWCDBError:(const struct Error *)arg1;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)infoForKey:(int)arg1;
- (id)description;
- (_Bool)isOK;
- (id)initWithType:(int)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)initWithWCDBError:(const struct Error *)arg1;

@end

