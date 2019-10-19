//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GSKLanguage, GSKSpeechSessionConfig;
@protocol GSKSpeechRecognizerDelegate;

@protocol GSKRecognizerClient <NSObject>
@property(nonatomic) __weak id <GSKSpeechRecognizerDelegate> delegate;
@property(readonly, nonatomic) _Bool isRecognizing;
@property(readonly, nonatomic) _Bool isCapturing;
@property(readonly, nonatomic) _Bool isIdle;
- (void)cancelRecognition;
- (void)stopRecognition;
- (void)recognizeWithConfig:(GSKSpeechSessionConfig *)arg1;

@optional
- (GSKLanguage *)recognizedLanguage;
- (void)primeConnectionWithConfig:(GSKSpeechSessionConfig *)arg1;
- (double)captureDuration;
- (float)audioInputLevel;
@end
