//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableString, SBRegistration;

@interface SBRegistrationParser : NSObject
{
    NSMutableArray *_allRegistrations;
    NSMutableString *_currentElementValue;
    SBRegistration *_currentRegistration;
}

+ (id)parseRegistrations:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)initParserWithResult:(id)arg1;

@end

