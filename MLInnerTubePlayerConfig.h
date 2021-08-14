#import "YTIMediaCommonConfig.h"
#import "YTIHamplayerConfig.h"

@interface MLInnerTubePlayerConfig : NSObject
- (YTIMediaCommonConfig *)mediaCommonConfig;
- (YTIHamplayerConfig *)hamplayerConfig;
@end