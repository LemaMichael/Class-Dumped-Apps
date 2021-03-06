//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface CJPaySafeKeyboard : UIView
{
    CDUnknownBlockType _numberClickedBlock;
    CDUnknownBlockType _deleteClickedBlock;
    NSArray *_titleList;
    NSArray *_buttonList;
    long long _rowCount;
    long long _columnCount;
}

@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(retain, nonatomic) NSArray *buttonList; // @synthesize buttonList=_buttonList;
@property(retain, nonatomic) NSArray *titleList; // @synthesize titleList=_titleList;
@property(copy, nonatomic) CDUnknownBlockType deleteClickedBlock; // @synthesize deleteClickedBlock=_deleteClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType numberClickedBlock; // @synthesize numberClickedBlock=_numberClickedBlock;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

