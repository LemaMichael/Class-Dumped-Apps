//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView, UITextView;

@interface AKFAdvancedButton : UIControl
{
    UITextView *_firstLine;
    UITextView *_secondLine;
    UIImageView *_iconImageView;
    double _cornerRadius;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)invalidateIntrinsicContentSize;
@property(retain, nonatomic) UIImage *iconImage;
@property(copy, nonatomic) NSString *secondLineText;
@property(copy, nonatomic) NSString *firstLineText;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 dynamicTypeManager:(id)arg3;

@end
