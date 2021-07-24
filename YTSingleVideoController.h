#import "MLFormat.h"
#import "YTLocalPlaybackController.h"
#import "YTSingleVideo.h"

@interface YTSingleVideoController : NSObject
@property (strong, nonatomic) YTSingleVideo *singleVideo;
- (YTSingleVideo *)videoData;
- (YTLocalPlaybackController *)delegate;
- (NSArray <MLFormat *> *)selectableVideoFormats;
@end