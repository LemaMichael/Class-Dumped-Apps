//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensInfoCardDataProvidable-Protocol.h"

@class NSString;
@protocol SCLensByIdRetrievable, SCLensUnlockableDataStoreProtocol;

@interface SCLensInfoCardLocalDataProvider : NSObject <SCLensInfoCardDataProvidable>
{
    id <SCLensByIdRetrievable> _lensRetrievable;
    id <SCLensUnlockableDataStoreProtocol> _unlockableDataStore;
    _Bool _isDataForLiveLensPreview;
}

- (void).cxx_destruct;
- (id)_lensWithLensId:(id)arg1;
- (unsigned long long)_communityActionsForLens:(id)arg1;
- (id)_getLensInfoCardDataFromLens:(id)arg1;
- (void)getLensInfoCardDataWithLensId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithLensRetrievable:(id)arg1 unlockableDataStore:(id)arg2 isDataForLiveLensPreview:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

