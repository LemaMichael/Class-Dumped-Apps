//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FNode;

@interface FSnapshotHolder : NSObject
{
    id <FNode> rootNode;
}

@property(retain, nonatomic) id <FNode> rootNode; // @synthesize rootNode;
- (void).cxx_destruct;
- (void)updateSnapshot:(id)arg1 withNewSnapshot:(id)arg2;
- (id)getNode:(id)arg1;
- (id)init;

@end
