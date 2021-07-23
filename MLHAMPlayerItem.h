#import "MLABRPolicy.h"
#import "MLFormat.h"

@interface MLHAMPlayerItem : NSObject
- (void)ABRPolicy:(MLABRPolicy *)policy selectableFormatsDidChange:(NSArray <MLFormat *> *)formats;
@end