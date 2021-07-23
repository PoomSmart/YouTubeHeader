#import "YTIHotConfigGroup.h"

@interface YTHotConfig : NSObject
- (YTIHotConfigGroup *)hotConfigGroup;
- (YTIIosMediaHotConfig *)mediaHotConfig;
- (bool)iosReleasePipControllerOnMain;
@end