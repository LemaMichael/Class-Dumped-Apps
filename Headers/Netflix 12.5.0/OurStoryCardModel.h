//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OurStoryCardModel : NSObject
{
    NSString *_name;
    NSString *_type;
    NSString *_headline;
    NSString *_subHeadline;
}

@property(retain, nonatomic) NSString *subHeadline; // @synthesize subHeadline=_subHeadline;
@property(retain, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2 headline:(id)arg3 subHeadline:(id)arg4;

@end

