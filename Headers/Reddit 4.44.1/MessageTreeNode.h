//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Message;

@interface MessageTreeNode : NSObject
{
    _Bool _isCollapsed;
    _Bool _isLastChildNode;
    _Bool _isTopLevel;
    unsigned long long _type;
    Message *_object;
}

@property(nonatomic) _Bool isTopLevel; // @synthesize isTopLevel=_isTopLevel;
@property(nonatomic) _Bool isLastChildNode; // @synthesize isLastChildNode=_isLastChildNode;
@property(nonatomic) _Bool isCollapsed; // @synthesize isCollapsed=_isCollapsed;
@property(retain, nonatomic) Message *object; // @synthesize object=_object;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
