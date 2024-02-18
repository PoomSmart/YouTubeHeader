#import "MLFormat.h"

@interface YTVideoQualitySwitchRedesignedController : NSObject
- (instancetype)initWithServiceRegistryScope:(id)scope parentResponder:(id)responder;
- (NSArray *)addRestrictedFormats:(NSArray <MLFormat *> *)formats;
@end
