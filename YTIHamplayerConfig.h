#import "YTIHamplayerStreamFilter.h"

@interface YTIHamplayerConfig : NSObject
@property (nonatomic, assign, readwrite) int renderViewType;
- (YTIHamplayerStreamFilter *)streamFilter;
@end