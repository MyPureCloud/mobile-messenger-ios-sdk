
// GenesysCloudCore version number: v1.12.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
    _Pragma("clang diagnostic push") \
    _Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
    Stuff; \
    _Pragma("clang diagnostic pop") \
} while (0)
