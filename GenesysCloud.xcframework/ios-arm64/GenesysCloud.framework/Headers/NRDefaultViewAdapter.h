
// GenesysCloud version number: v1.8.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/NRAbstractViews.h>

@interface NRDefaultViewAdapter : NSObject <NanorepViewAdapter>
@property (nonatomic, weak) id<NanorepViewAdapter> appAdapter;
@end
