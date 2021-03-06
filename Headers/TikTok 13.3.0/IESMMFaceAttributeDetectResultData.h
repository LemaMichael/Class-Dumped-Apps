//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMAlgorithmResultData.h"

@class NSMutableArray;

@interface IESMMFaceAttributeDetectResultData : IESMMAlgorithmResultData
{
    float _age;
    float _boyProb;
    float _attractive;
    float _happyScore;
    float _real_face_prob;
    float _quality;
    float _arousal;
    float _valence;
    float _sad_score;
    float _angry_score;
    float _surprise_score;
    float _mask_prob;
    float _wear_hat_prob;
    float _mustache_prob;
    float _lipstick_prob;
    float _wear_glass_prob;
    float _wear_sunglass_prob;
    float _blur_score;
    float _illumination;
    long long _expressionType;
    long long _racialType;
    NSMutableArray *_exp_probs;
    NSMutableArray *_racial_probs;
}

@property(nonatomic) float illumination; // @synthesize illumination=_illumination;
@property(nonatomic) float blur_score; // @synthesize blur_score=_blur_score;
@property(nonatomic) float wear_sunglass_prob; // @synthesize wear_sunglass_prob=_wear_sunglass_prob;
@property(nonatomic) float wear_glass_prob; // @synthesize wear_glass_prob=_wear_glass_prob;
@property(nonatomic) float lipstick_prob; // @synthesize lipstick_prob=_lipstick_prob;
@property(nonatomic) float mustache_prob; // @synthesize mustache_prob=_mustache_prob;
@property(nonatomic) float wear_hat_prob; // @synthesize wear_hat_prob=_wear_hat_prob;
@property(nonatomic) float mask_prob; // @synthesize mask_prob=_mask_prob;
@property(nonatomic) float surprise_score; // @synthesize surprise_score=_surprise_score;
@property(nonatomic) float angry_score; // @synthesize angry_score=_angry_score;
@property(nonatomic) float sad_score; // @synthesize sad_score=_sad_score;
@property(nonatomic) float valence; // @synthesize valence=_valence;
@property(nonatomic) float arousal; // @synthesize arousal=_arousal;
@property(nonatomic) float quality; // @synthesize quality=_quality;
@property(nonatomic) float real_face_prob; // @synthesize real_face_prob=_real_face_prob;
@property(retain, nonatomic) NSMutableArray *racial_probs; // @synthesize racial_probs=_racial_probs;
@property(retain, nonatomic) NSMutableArray *exp_probs; // @synthesize exp_probs=_exp_probs;
@property(nonatomic) long long racialType; // @synthesize racialType=_racialType;
@property(nonatomic) long long expressionType; // @synthesize expressionType=_expressionType;
@property(nonatomic) float happyScore; // @synthesize happyScore=_happyScore;
@property(nonatomic) float attractive; // @synthesize attractive=_attractive;
@property(nonatomic) float boyProb; // @synthesize boyProb=_boyProb;
@property(nonatomic) float age; // @synthesize age=_age;
- (void).cxx_destruct;
- (id)init;

@end

