#import "MLFormat.h"
#import "YTLocalPlaybackController.h"
#import "YTSingleVideo.h"

@interface YTSingleVideoController : NSObject
- (YTSingleVideo *)singleVideo;
- (YTSingleVideo *)videoData;
- (YTLocalPlaybackController *)delegate;
- (NSArray <MLFormat *> *)selectableVideoFormats;
@end