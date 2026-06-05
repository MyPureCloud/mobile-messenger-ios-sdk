
// GenesysCloudMessenger version number: v1.5.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloudCore/Account.h>
NS_ASSUME_NONNULL_BEGIN

@class GCMConfiguration;

@interface MessengerAccount : Account

- (instancetype)initWithDeploymentId:(NSString *)deploymentId
                              domain:(NSString *)domain
                             logging:(BOOL)logging;

/**
The deployment id.
*/
@property (nonatomic, copy) NSString *deploymentId;

/**
The domain.
*/
@property (nonatomic, copy) NSString *domain;

/**
The logging.
*/
@property (nonatomic, assign) BOOL logging;

/**
The reconnection timeout.
*/
@property (nonatomic, assign) NSNumber *reconnectionTimeout;

@property (nonatomic, copy, readonly) GCMConfiguration *config;

@end

NS_ASSUME_NONNULL_END
