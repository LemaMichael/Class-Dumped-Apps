//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, RCNConfigDBManager;

@interface RCNConfigContent : NSObject
{
    NSMutableDictionary *_activeConfig;
    NSMutableDictionary *_fetchedConfig;
    NSMutableDictionary *_defaultConfig;
    NSMutableDictionary *_namespaceToDigest;
    RCNConfigDBManager *_DBManager;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *defaultConfig;
@property(readonly, copy, nonatomic) NSDictionary *activeConfig;
@property(readonly, copy, nonatomic) NSDictionary *namespaceToDigest;
@property(readonly, copy, nonatomic) NSDictionary *fetchedConfig;
- (void)setNamespaceToDigest:(id)arg1;
- (void)updateMainTableWithValues:(id)arg1 fromSource:(long long)arg2;
- (void)loadConfigFromMainTable;
- (void)handleUpdateStatusWithAppNamespaceTable:(id)arg1;
- (void)removeNamespace:(id)arg1;
- (void)handleEmptyConfigStatusWithAppNamespaceTable:(id)arg1;
- (void)handleNoChangeStatusWithAppNamespaceTable:(id)arg1;
- (void)updateConfigContentWithResponse:(id)arg1;
- (void)copyToActiveSourceFromDictionary:(id)arg1 forNamespace:(id)arg2;
- (void)copyFromDictionary:(id)arg1 toSource:(long long)arg2;
- (id)init;
- (id)initWithDBManager:(id)arg1;

@end

