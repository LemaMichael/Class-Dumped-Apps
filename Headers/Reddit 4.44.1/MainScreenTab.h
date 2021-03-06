//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MainScreenTab : NSObject
{
    NSString *_identifier;
    NSString *_associatedIdentifier;
    NSString *_name;
    NSString *_urlString;
    NSString *_minAppVersion;
    NSString *_type;
}

+ (id)newsTab;
+ (id)popularTab;
+ (id)homeTab;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *minAppVersion; // @synthesize minAppVersion=_minAppVersion;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *associatedIdentifier; // @synthesize associatedIdentifier=_associatedIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long tabType;
@property(readonly, nonatomic) unsigned long long homeFeedType;
@property(readonly, nonatomic) _Bool isPositionFixed;
- (_Bool)isValid;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 name:(id)arg3;
- (id)initWithData:(id)arg1;

@end

