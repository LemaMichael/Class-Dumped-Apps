//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface AWEIMPinYinComponent : NSObject
{
    unsigned long long _anyItemType;
    NSMutableArray *_items;
    NSString *_originalString;
    NSString *_pinYinString;
    NSString *_firstPinYinCharacterInEveryItem;
}

+ (id)pinYinComponentWithType:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *firstPinYinCharacterInEveryItem; // @synthesize firstPinYinCharacterInEveryItem=_firstPinYinCharacterInEveryItem;
@property(retain, nonatomic) NSString *pinYinString; // @synthesize pinYinString=_pinYinString;
@property(retain, nonatomic) NSString *originalString; // @synthesize originalString=_originalString;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long anyItemType; // @synthesize anyItemType=_anyItemType;
- (void).cxx_destruct;
- (void)addCharacterItem:(id)arg1;
- (id)init;

@end

