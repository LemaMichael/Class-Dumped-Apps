//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCActionModel;

@interface SCLensExplorerHeaderViewDebugData : NSObject <NSCopying, NSCoding>
{
    NSString *_imageName;
    double _alpha;
    SCActionModel *_actionModel;
    struct CGSize _buttonSize;
    struct UIEdgeInsets _insets;
}

@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(readonly, nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageName:(id)arg1 insets:(struct UIEdgeInsets)arg2 alpha:(double)arg3 buttonSize:(struct CGSize)arg4 actionModel:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end
