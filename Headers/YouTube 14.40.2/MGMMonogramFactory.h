//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIFont;

@interface MGMMonogramFactory : NSObject
{
    UIFont *_cascadingFont;
}

+ (id)CJKScriptRegex;
@property(readonly, nonatomic) UIFont *cascadingFont; // @synthesize cascadingFont=_cascadingFont;
- (void).cxx_destruct;
- (_Bool)graphemeClusterCanBeCentered:(id)arg1;
- (_Bool)monogram:(id)arg1 canBeRenderedInFont:(const struct __CTFont *)arg2;
- (id)glyphSupportedDisplayMonogramForMonogram:(id)arg1 withCenteringSupport:(_Bool)arg2;
- (id)syntheticDisplayMonogramForGraphemeCluster:(id)arg1;
- (id)familyNameWithArticlesRemoved:(id)arg1;
- (id)renderableForName:(id)arg1;
- (id)monogramForName:(id)arg1;
- (id)initWithFont:(id)arg1;
- (id)init;

@end

