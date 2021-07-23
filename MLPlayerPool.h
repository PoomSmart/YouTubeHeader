#import "GIMMe.h"
#import "MLVideo.h"
#import "MLInnerTubePlayerConfig.h"

@interface MLPlayerPool : NSObject
- (void)createHamResourcesForVideo:(MLVideo *)video playerConfig:(MLInnerTubePlayerConfig *)playerConfig;
- (GIMMe *)gimme;
@end