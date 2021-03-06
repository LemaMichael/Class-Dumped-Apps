//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIColor;

@interface MDCPalette : NSObject
{
    NSDictionary *_tints;
    NSDictionary *_accents;
}

+ (id)requiredTintKeys;
+ (id)paletteWithTints:(id)arg1 accents:(id)arg2;
+ (id)paletteGeneratedFromColor:(id)arg1;
+ (id)blueGreyPalette;
+ (id)greyPalette;
+ (id)brownPalette;
+ (id)deepOrangePalette;
+ (id)orangePalette;
+ (id)amberPalette;
+ (id)yellowPalette;
+ (id)limePalette;
+ (id)lightGreenPalette;
+ (id)greenPalette;
+ (id)tealPalette;
+ (id)cyanPalette;
+ (id)lightBluePalette;
+ (id)bluePalette;
+ (id)indigoPalette;
+ (id)deepPurplePalette;
+ (id)purplePalette;
+ (id)pinkPalette;
+ (id)redPalette;
+ (id)googleCyanPalette;
+ (id)googlePurplePalette;
+ (id)googlePinkPalette;
+ (id)googleOrangePalette;
+ (id)googleGreyPalette;
+ (id)googleYellowPalette;
+ (id)googleGreenPalette;
+ (id)googleRedPalette;
+ (id)googleBluePalette;
+ (void)setGmdc_paletteVersion:(unsigned long long)arg1;
+ (Class)currentPalette;
+ (void)updatePalette;
+ (unsigned long long)gmdc_paletteVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *accent700;
@property(readonly, nonatomic) UIColor *accent400;
@property(readonly, nonatomic) UIColor *accent200;
@property(readonly, nonatomic) UIColor *accent100;
@property(readonly, nonatomic) UIColor *tint900;
@property(readonly, nonatomic) UIColor *tint800;
@property(readonly, nonatomic) UIColor *tint700;
@property(readonly, nonatomic) UIColor *tint600;
@property(readonly, nonatomic) UIColor *tint500;
@property(readonly, nonatomic) UIColor *tint400;
@property(readonly, nonatomic) UIColor *tint300;
@property(readonly, nonatomic) UIColor *tint200;
@property(readonly, nonatomic) UIColor *tint100;
@property(readonly, nonatomic) UIColor *tint50;
- (id)initWithTints:(id)arg1 accents:(id)arg2;

@end

