//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FDStackViewAlignmentLayoutArrangement, FDStackViewDistributionLayoutArrangement, NSArray, NSMutableArray;

@interface FDStackView : UIView
{
    _Bool _baselineRelativeArrangement;
    _Bool _layoutMarginsRelativeArrangement;
    long long _axis;
    long long _distribution;
    long long _alignment;
    double _spacing;
    NSMutableArray *_mutableArrangedSubviews;
    FDStackViewAlignmentLayoutArrangement *_alignmentArrangement;
    FDStackViewDistributionLayoutArrangement *_distributionArrangement;
}

+ (void)load;
+ (Class)layerClass;
@property(retain, nonatomic) FDStackViewDistributionLayoutArrangement *distributionArrangement; // @synthesize distributionArrangement=_distributionArrangement;
@property(retain, nonatomic) FDStackViewAlignmentLayoutArrangement *alignmentArrangement; // @synthesize alignmentArrangement=_alignmentArrangement;
@property(retain, nonatomic) NSMutableArray *mutableArrangedSubviews; // @synthesize mutableArrangedSubviews=_mutableArrangedSubviews;
@property(nonatomic, getter=isLayoutMarginsRelativeArrangement) _Bool layoutMarginsRelativeArrangement; // @synthesize layoutMarginsRelativeArrangement=_layoutMarginsRelativeArrangement;
@property(nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeHiddenObserverForView:(id)arg1;
- (void)addHiddenObserverForView:(id)arg1;
- (void)updateConstraints;
- (void)updateLayoutArrangements;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeArrangedSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *arrangedSubviews;
- (void)commonInitializationWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

