#import "GPBExtensionDescriptor.h"
#import "GPBExtensionRegistry.h"

@interface GPBRootObject : NSObject
+ (GPBExtensionRegistry *)extensionRegistry;
+ (void)globallyRegisterExtension:(GPBExtensionDescriptor *)extension;
@end
