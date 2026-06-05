
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <GenesysCloud/NRResult.h>
#import <GenesysCloud/ExtraData.h>


typedef NS_ENUM(NSInteger, NRPresentorDismissType) {
    NRPresentorDismissTypeUNKNOWN,
    NRPresentorDismissTypeCancelled,
    NRPresentorDismissTypeSent,
    NRPresentorDismissTypeValidationFailed,
    NRPresentorDismissTypeSendingFailed,
    NRPresentorDismissTypeSendGeneralError,
    NRPresentorDismissTypeExit,
    NRPresentorDismissTypeExtraData,
    NRPresentorDismissTypeFilePicker,
    NRPresentorDismissTypeRemoveFile
};

@protocol NRChannelPresentor;
@protocol NRChannelPresentorDelegate <NSObject>

@optional
- (void)presentor:(id<NRChannelPresentor>)channelPresentor dismissedWithType:(NRPresentorDismissType)type error:(NSError *)error;

@end


@protocol NRChannelPresentor <NSObject>

@property (nonatomic, readonly) UIViewController *channelController;
@property (nonatomic, weak) id<NRChannelPresentorDelegate> presentorDelegate;
@property (nonatomic) NRChanneling *channel;
@property (nonatomic) NRResult *result;
@property (nonatomic, copy) NSNumber *handleExtraData;

@optional
@property (nonatomic, copy) NSDictionary *rawExtraData;
@property (nonatomic, strong) ExtraData *extraData;
@end
