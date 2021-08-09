#import "MLABRPolicy.h"
#import "MLFormat.h"
#import "MLInnerTubePlayerConfig.h"

@interface MLHAMPlayerItem : NSObject
- (MLInnerTubePlayerConfig *)config;
- (void)ABRPolicy:(MLABRPolicy *)policy selectableFormatsDidChange:(NSArray <MLFormat *> *)formats;
@end