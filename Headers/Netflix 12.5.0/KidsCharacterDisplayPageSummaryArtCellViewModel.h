//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractDisplayPageCellViewModel.h"

@class NSString;

@interface KidsCharacterDisplayPageSummaryArtCellViewModel : AbstractDisplayPageCellViewModel
{
    NSString *_title;
    NSString *_characterUrl;
    NSString *_storyArtUrl;
    NSString *_interestingMomentUrl;
    NSString *_matRating;
    NSString *_currentTitle;
    NSString *_titleTreatment;
}

@property(copy, nonatomic) NSString *titleTreatment; // @synthesize titleTreatment=_titleTreatment;
@property(copy, nonatomic) NSString *currentTitle; // @synthesize currentTitle=_currentTitle;
@property(copy, nonatomic) NSString *matRating; // @synthesize matRating=_matRating;
@property(copy, nonatomic) NSString *interestingMomentUrl; // @synthesize interestingMomentUrl=_interestingMomentUrl;
@property(copy, nonatomic) NSString *storyArtUrl; // @synthesize storyArtUrl=_storyArtUrl;
@property(copy, nonatomic) NSString *characterUrl; // @synthesize characterUrl=_characterUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)configureWithDictionary:(id)arg1;

@end

