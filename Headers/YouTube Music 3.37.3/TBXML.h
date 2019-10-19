//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TBXML : NSObject
{
    struct _TBXMLElement *rootXMLElement;
    struct _TBXMLElementBuffer *currentElementBuffer;
    struct _TBXMLAttributeBuffer *currentAttributeBuffer;
    long long currentElement;
    long long currentAttribute;
    char *bytes;
    long long bytesLength;
    _Bool trimWhitespace;
}

+ (id)newTBXMLWithXMLFile:(id)arg1 fileExtension:(id)arg2 error:(id *)arg3 trimWhitespace:(_Bool)arg4;
+ (id)newTBXMLWithXMLFile:(id)arg1 fileExtension:(id)arg2 error:(id *)arg3;
+ (id)newTBXMLWithXMLFile:(id)arg1 fileExtension:(id)arg2;
+ (id)newTBXMLWithXMLFile:(id)arg1 error:(id *)arg2 trimWhitespace:(_Bool)arg3;
+ (id)newTBXMLWithXMLFile:(id)arg1 error:(id *)arg2;
+ (id)newTBXMLWithXMLFile:(id)arg1;
+ (id)newTBXMLWithXMLData:(id)arg1 error:(id *)arg2 trimWhitespace:(_Bool)arg3;
+ (id)newTBXMLWithXMLData:(id)arg1 error:(id *)arg2;
+ (id)newTBXMLWithXMLData:(id)arg1;
+ (id)newTBXMLWithXMLString:(id)arg1 error:(id *)arg2 trimWhitespace:(_Bool)arg3;
+ (id)newTBXMLWithXMLString:(id)arg1 error:(id *)arg2;
+ (id)newTBXMLWithXMLString:(id)arg1;
+ (void)iterateAttributesOfElement:(struct _TBXMLElement *)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)iterateElementsForQuery:(id)arg1 fromElement:(struct _TBXMLElement *)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (struct _TBXMLElement *)nextSiblingNamed:(id)arg1 searchFromElement:(struct _TBXMLElement *)arg2 error:(id *)arg3;
+ (struct _TBXMLElement *)nextSiblingNamed:(id)arg1 searchFromElement:(struct _TBXMLElement *)arg2;
+ (struct _TBXMLElement *)childElementNamed:(id)arg1 parentElement:(struct _TBXMLElement *)arg2 error:(id *)arg3;
+ (struct _TBXMLElement *)childElementNamed:(id)arg1 parentElement:(struct _TBXMLElement *)arg2;
+ (id)valueOfAttributeNamed:(id)arg1 forElement:(struct _TBXMLElement *)arg2 error:(id *)arg3;
+ (id)valueOfAttributeNamed:(id)arg1 forElement:(struct _TBXMLElement *)arg2;
+ (id)textForElement:(struct _TBXMLElement *)arg1 error:(id *)arg2;
+ (id)textForElement:(struct _TBXMLElement *)arg1;
+ (id)attributeValue:(struct _TBXMLAttribute *)arg1 error:(id *)arg2;
+ (id)attributeValue:(struct _TBXMLAttribute *)arg1;
+ (id)attributeName:(struct _TBXMLAttribute *)arg1 error:(id *)arg2;
+ (id)attributeName:(struct _TBXMLAttribute *)arg1;
+ (id)elementName:(struct _TBXMLElement *)arg1 error:(id *)arg2;
+ (id)elementName:(struct _TBXMLElement *)arg1;
+ (id)errorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithCode:(int)arg1;
+ (id)errorTextForCode:(int)arg1;
+ (id)newTBXMLWithURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) struct _TBXMLElement *rootXMLElement; // @synthesize rootXMLElement;
- (long long)decodeData:(id)arg1 withError:(id *)arg2;
- (long long)decodeData:(id)arg1;
- (id)initWithXMLFile:(id)arg1 fileExtension:(id)arg2 error:(id *)arg3 trimWhitespace:(_Bool)arg4;
- (id)initWithXMLFile:(id)arg1 fileExtension:(id)arg2 error:(id *)arg3;
- (id)initWithXMLFile:(id)arg1 fileExtension:(id)arg2;
- (id)initWithXMLFile:(id)arg1 error:(id *)arg2 trimWhitespace:(_Bool)arg3;
- (id)initWithXMLFile:(id)arg1 error:(id *)arg2;
- (id)initWithXMLFile:(id)arg1;
- (id)initWithXMLData:(id)arg1 error:(id *)arg2 trimWhitespace:(_Bool)arg3;
- (id)initWithXMLData:(id)arg1 error:(id *)arg2;
- (id)initWithXMLData:(id)arg1;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2 trimWhitespace:(_Bool)arg3;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;
- (id)initWithXMLString:(id)arg1;
- (id)init;
- (struct _TBXMLAttribute *)nextAvailableAttribute;
- (struct _TBXMLElement *)nextAvailableElement;
- (void)dealloc;
- (void)decodeBytes;
- (long long)allocateBytesOfLength:(long long)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end
