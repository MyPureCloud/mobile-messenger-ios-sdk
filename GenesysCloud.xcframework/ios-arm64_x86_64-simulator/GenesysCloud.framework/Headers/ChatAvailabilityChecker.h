
// GenesysCloud version number: v1.6.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloudCore/GenesysCloudCore-Swift.h>
//#import <GenesysCloudBold/BCUnavailableReason.h>
#import <GenesysCloud/AvailabilityResult.h>

/************************************************************/
// MARK: - ChatAvailabilityChecker
/************************************************************/

@interface ChatAvailabilityChecker : NSObject

+ (void)checkAvailability:(Account *)account
               completion:(void(^)(AvailabilityResult *result))completion;
+ (void)fetchDepartments:(Account *)account
              completion:(void(^)(DepartmentResult *result))completion;
@end

