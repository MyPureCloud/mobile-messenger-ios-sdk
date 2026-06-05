
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/NRQuickOption.h>

@class NRConversationalViewController;
@protocol NRApplicationContentHandler <NSObject>
- (BOOL)presentingController:(UIViewController *)controller shouldHandleClickedLink:(NSString *)link;
- (void)didClickToCall:(NSString *)phoneNumber;
- (void)didClickLink:(NSString *)url;
- (void)didSessionExpire;
- (void)controller:(NRConversationalViewController *)controller didClickApplicationQuickOption:(NRQuickOption *)quickOption;
@end
