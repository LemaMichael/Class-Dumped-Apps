//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEPublishPrivacyControllCell;

@interface AWEPublishPrivacyCellModel : NSObject
{
    AWEPublishPrivacyControllCell *_cell;
    unsigned long long _privacyType;
}

@property(nonatomic) unsigned long long privacyType; // @synthesize privacyType=_privacyType;
@property(retain, nonatomic) AWEPublishPrivacyControllCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (id)initWithCell:(id)arg1 type:(unsigned long long)arg2;

@end

