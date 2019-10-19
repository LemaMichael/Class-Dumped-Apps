//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIAndroidGeneralComplexTextDetails, ARIAndroidTextDetails, ARIPhotosAndroidAutobackupSheetTextDetails_BackupOptionsTextDetails, ARIPhotosAndroidAutobackupSheetTextDetails_DataCapOptionsTextDetails;

@interface ARIPhotosAndroidAutobackupSheetTextDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARIAndroidTextDetails *autoBackupDisableText; // @dynamic autoBackupDisableText;
@property(retain, nonatomic) ARIAndroidTextDetails *autoBackupEnableText; // @dynamic autoBackupEnableText;
@property(retain, nonatomic) ARIAndroidTextDetails *autoBackupSettingsChangeText; // @dynamic autoBackupSettingsChangeText;
@property(retain, nonatomic) ARIAndroidTextDetails *autoBackupTitleText; // @dynamic autoBackupTitleText;
@property(retain, nonatomic) ARIPhotosAndroidAutobackupSheetTextDetails_BackupOptionsTextDetails *backupOptions; // @dynamic backupOptions;
@property(retain, nonatomic) ARIPhotosAndroidAutobackupSheetTextDetails_DataCapOptionsTextDetails *dataCapOptions; // @dynamic dataCapOptions;
@property(nonatomic) _Bool hasAutoBackupDisableText; // @dynamic hasAutoBackupDisableText;
@property(nonatomic) _Bool hasAutoBackupEnableText; // @dynamic hasAutoBackupEnableText;
@property(nonatomic) _Bool hasAutoBackupSettingsChangeText; // @dynamic hasAutoBackupSettingsChangeText;
@property(nonatomic) _Bool hasAutoBackupTitleText; // @dynamic hasAutoBackupTitleText;
@property(nonatomic) _Bool hasBackupOptions; // @dynamic hasBackupOptions;
@property(nonatomic) _Bool hasDataCapOptions; // @dynamic hasDataCapOptions;
@property(nonatomic) _Bool hasPixelStoragePromotionDescription; // @dynamic hasPixelStoragePromotionDescription;
@property(nonatomic) _Bool hasPixelStoragePromotionTitle; // @dynamic hasPixelStoragePromotionTitle;
@property(nonatomic) _Bool hasStoragePromotionText; // @dynamic hasStoragePromotionText;
@property(nonatomic) _Bool hasUploadNetworkText; // @dynamic hasUploadNetworkText;
@property(nonatomic) _Bool hasUploadQualityText; // @dynamic hasUploadQualityText;
@property(nonatomic) _Bool hasUseCellularDataCheckboxLabel; // @dynamic hasUseCellularDataCheckboxLabel;
@property(retain, nonatomic) ARIAndroidGeneralComplexTextDetails *pixelStoragePromotionDescription; // @dynamic pixelStoragePromotionDescription;
@property(retain, nonatomic) ARIAndroidTextDetails *pixelStoragePromotionTitle; // @dynamic pixelStoragePromotionTitle;
@property(retain, nonatomic) ARIAndroidTextDetails *storagePromotionText; // @dynamic storagePromotionText;
@property(retain, nonatomic) ARIAndroidTextDetails *uploadNetworkText; // @dynamic uploadNetworkText;
@property(retain, nonatomic) ARIAndroidGeneralComplexTextDetails *uploadQualityText; // @dynamic uploadQualityText;
@property(retain, nonatomic) ARIAndroidTextDetails *useCellularDataCheckboxLabel; // @dynamic useCellularDataCheckboxLabel;

@end
