
// GenesysCloud version number: v1.8.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloudBot/GenesysCloudBot.h>

@protocol NREntitiesProvider <NSObject>
- (void)shouldHandleMissingEntities:(NRConversationalResponse *)response
             missingEntitiesHandler:(void(^)(NRConversationMissingEntity *missingEntity))handler;

- (void)shouldHandlePersonalInformation:(NRPersonalInfo *)personalInfo;

@property (nonatomic, copy) NSArray<NSString *> *entities;
@end
