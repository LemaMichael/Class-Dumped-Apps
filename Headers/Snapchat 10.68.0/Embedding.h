//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatArray, GPBInt32FloatDictionary;

@interface Embedding : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBFloatArray *embeddingArray; // @dynamic embeddingArray;
@property(readonly, nonatomic) unsigned long long embeddingArray_Count; // @dynamic embeddingArray_Count;
@property(retain, nonatomic) GPBInt32FloatDictionary *sparseEmbedding; // @dynamic sparseEmbedding;
@property(nonatomic) int sparseEmbeddingDim; // @dynamic sparseEmbeddingDim;
@property(readonly, nonatomic) unsigned long long sparseEmbedding_Count; // @dynamic sparseEmbedding_Count;

@end
