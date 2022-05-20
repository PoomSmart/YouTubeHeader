#import "GIMMe.h"
#import "YTSingleVideoController.h"

@interface YTPlayerPIPController : NSObject
@property (retain, nonatomic) YTSingleVideoController *activeSingleVideo;
- (instancetype)initWithPlayerView:(id)playerView delegate:(id)delegate; // Deprecated, use initWithDelegate:
- (instancetype)initWithDelegate:(id)delegate;
- (GIMMe *)gimme; // Deprecated
- (BOOL)isPictureInPictureActive;
- (BOOL)canInvokePictureInPicture; // Deprecated, use canEnablePictureInPicture
- (BOOL)canEnablePictureInPicture;
- (void)maybeInvokePictureInPicture; // Deprecated, use maybeEnablePictureInPicture
- (void)maybeEnablePictureInPicture;
- (void)play;
- (void)pause;
@end
