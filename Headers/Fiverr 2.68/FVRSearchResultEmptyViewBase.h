//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;
@protocol FVRSearchResultEmptyViewProtocol;

@interface FVRSearchResultEmptyViewBase : UIView
{
    id <FVRSearchResultEmptyViewProtocol> _delegate;
    NSString *_searchQuery;
}

@property(retain, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(nonatomic) __weak id <FVRSearchResultEmptyViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end
