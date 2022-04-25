#import "GIMMe.h"

@interface YTLocalPlaybackController : NSObject
- (GIMMe *)gimme;
- (NSString *)currentVideoID;
- (int)playerVisibility;
@end