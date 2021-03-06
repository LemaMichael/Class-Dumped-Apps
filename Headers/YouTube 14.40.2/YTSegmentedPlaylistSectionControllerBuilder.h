//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTSectionControllerBuilderProtocol.h"

@class GIMMe, NSString, YTServiceSectionController;

@interface YTSegmentedPlaylistSectionControllerBuilder : NSObject <YTSectionControllerBuilderProtocol>
{
    GIMMe *_gimme;
    YTServiceSectionController *_sectionController;
}

@property(readonly, nonatomic) __weak YTServiceSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)buildFeedControllerForViewModel:(id)arg1 dataSource:(id)arg2;
- (id)buildDataSourceForRenderer:(id)arg1 service:(id)arg2;
- (void)updateSectionController:(id)arg1 withModel:(id)arg2;
- (void)loadSectionController:(id)arg1 withModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

