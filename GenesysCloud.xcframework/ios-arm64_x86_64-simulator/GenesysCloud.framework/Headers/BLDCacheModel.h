
// GenesysCloud version number: v1.6.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface BLDCacheModel : NSObject

/**
 mime type
 */
@property (nonatomic,strong)NSString *MIMEType;


/**
 Cache data
 */
@property (nonatomic,strong)NSData *data;
@end
