//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGalleryPassphraseView;

@protocol SCGalleryPassphraseViewDelegate <NSObject>
- (_Bool)galleryPassphraseViewShouldLimitLength:(SCGalleryPassphraseView *)arg1;
- (void)galleryPassphraseViewDidPressDoneKey:(SCGalleryPassphraseView *)arg1;
- (void)galleryPassphraseViewDidEndEditingPassphrase:(SCGalleryPassphraseView *)arg1;
- (void)galleryPassphraseViewDidBeginEditingPassphrase:(SCGalleryPassphraseView *)arg1;
- (void)galleryPassphraseViewDidChangePassphrase:(SCGalleryPassphraseView *)arg1;
@end
