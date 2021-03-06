//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WAPopupActionMenuSupport-Protocol.h"

@class UIImageView, UILabel;

@interface WABizLocationTableViewCell : UITableViewCell <WAPopupActionMenuSupport>
{
    UILabel *_addressLabel;
    UIImageView *_mapImageView;
    struct UIEdgeInsets _cellInsets;
}

- (void).cxx_destruct;
- (void)performAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)shouldShowPopupActionMenu;
- (void)configureWithAddress:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)installConstraints;
- (id)initWithAddress:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;

@end

