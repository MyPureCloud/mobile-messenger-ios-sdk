
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface NSString (BLDExtension)

/**
 SHA1
 
 @param string string to sha1
 @return returns str after sha1
 */
+ (NSString *)bld_SHA1FromString:(NSString *)string;
@end
