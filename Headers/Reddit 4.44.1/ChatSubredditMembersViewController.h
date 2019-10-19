//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ListingNetworkSourceDelegate-Protocol.h"
#import "ListingStateControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BaseCollectionView, ChatMembersNetworkSource, ContactActionSheetDelegate, ListingStateController, NSString, RedditService, SubredditChannel;

@interface ChatSubredditMembersViewController : BaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, ListingNetworkSourceDelegate, ListingStateControllerDelegate>
{
    RedditService *_service;
    ChatMembersNetworkSource *_networkSource;
    SubredditChannel *_channel;
    ListingStateController *_listingStateController;
    BaseCollectionView *_collectionView;
    ContactActionSheetDelegate *_contactActionSheetDelegate;
}

@property(retain, nonatomic) ContactActionSheetDelegate *contactActionSheetDelegate; // @synthesize contactActionSheetDelegate=_contactActionSheetDelegate;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) ListingStateController *listingStateController; // @synthesize listingStateController=_listingStateController;
@property(readonly, nonatomic) SubredditChannel *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) ChatMembersNetworkSource *networkSource; // @synthesize networkSource=_networkSource;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)trackAnalyticsEventWithAction:(id)arg1 noun:(id)arg2 reportedContact:(id)arg3 blockedContact:(id)arg4;
- (void)showContactActionSheetWithContact:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)contactForIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (void)listingNetworkSourceWillFetchData;
- (void)listingStateController:(id)arg1 didPullToRefresh:(id)arg2;
- (void)listingStateController:(id)arg1 didTapLoadingSpinner:(id)arg2;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1 listingNetworkSource:(id)arg2 channel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
