#import "YTPlaybackData.h"

@interface YTSingleVideo : NSObject
@property (strong, nonatomic) MLVideo *video;
@property (strong, nonatomic) YTPlaybackData *playbackData;
@end