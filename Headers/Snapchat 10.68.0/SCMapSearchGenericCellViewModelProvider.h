//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol SCMapSearchGenericCellViewModelProviderDelegate;

@interface SCMapSearchGenericCellViewModelProvider : NSObject
{
    NSArray *_viewModels;
    id <SCMapSearchGenericCellViewModelProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCMapSearchGenericCellViewModelProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
- (void).cxx_destruct;
- (id)initWithViewModels:(id)arg1;

@end

