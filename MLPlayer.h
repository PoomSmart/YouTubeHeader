#import <AVKit/AVKit.h>
#import "MLVideo.h"
#import "MLInnerTubePlayerConfig.h"
#import "MLPlayerStickySettings.h"

@interface MLPlayer : AVPlayer
@property (assign) float rate;
- (instancetype)initWithVideo:(MLVideo *)video playerConfig:(MLInnerTubePlayerConfig *)playerConfig stickySettings:(MLPlayerStickySettings *)stickySettings externalPlaybackActive:(BOOL)externalPlaybackActive;
- (BOOL)externalPlaybackActive;
@end