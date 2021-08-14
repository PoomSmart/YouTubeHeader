#import "YTIHotConfigGroup.h"
#import "YTIHamplayerHotConfig.h"

@interface YTHotConfig : NSObject
- (YTIHotConfigGroup *)hotConfigGroup;
- (YTIIosMediaHotConfig *)mediaHotConfig;
- (YTIHamplayerHotConfig *)hamplayerHotConfig;
- (bool)iosReleasePipControllerOnMain;
@end