//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageTextWithImageSlice.h"

@class NSString, UIImage, WAMessageID;

@interface WAMessagePaymentRequestReferenceSlice : WAMessageTextWithImageSlice
{
    NSString *_text;
    UIImage *_thumbnail;
    WAMessageID *_messageID;
    WAMessageID *_requestReferenceMessageID;
}

+ (double)leadingEdgeIndentWithMetrics:(CDStruct_f481d0b7)arg1;
+ (_Bool)alwaysExtendsThumbnailToBottomEdge;
+ (Class)viewClass;
@property(readonly, nonatomic) WAMessageID *requestReferenceMessageID; // @synthesize requestReferenceMessageID=_requestReferenceMessageID;
@property(readonly, nonatomic) WAMessageID *messageID; // @synthesize messageID=_messageID;
@property(readonly, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (id)attributedTextWithMessage:(id)arg1 textAlignment:(out long long *)arg2;
- (void)prepareWithMessage:(id)arg1;
- (_Bool)hasThumbnailForMessage:(id)arg1;
- (struct CGSize)thumbnailSize;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_f481d0b7)arg2 requestReferenceMessageID:(id)arg3;

@end

