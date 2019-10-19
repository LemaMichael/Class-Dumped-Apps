//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSABaseXmlParser.h"

@class NSArray, NSMutableDictionary;

@interface MSAConfigParser : MSABaseXmlParser
{
    NSMutableDictionary *_configValuesFound;
    NSArray *_valuesToFindInSettings;
    NSArray *_valuesToFindInServiceUris1;
}

- (void).cxx_destruct;
- (id)getConfigValueForKey:(id)arg1;
- (void)tryToExtractElement:(id)arg1 fromArray:(id)arg2;
- (void)onStartElement:(id)arg1 namespaceURI:(id)arg2 attributes:(id)arg3;
- (id)createServiceUris1Array;
- (id)createSettingsArray;
- (id)initWithData:(id)arg1;

@end
