//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MSASignable <NSObject>
- (_Bool)generateSignature:(id *)arg1 error:(id *)arg2;
- (void)addElementToSign:(NSString *)arg1 withId:(NSString *)arg2;
@end

