
// GenesysCloud version number: v1.6.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface NSURLProtocol (BLDWKWebView)


+ (void)bld_registerScheme:(NSString *)scheme;


+ (void)bld_unregisterScheme:(NSString *)scheme;
@end
