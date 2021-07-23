#import "YTSingleVideoController.h"

@interface YTPlayerPIPController : NSObject
@property (retain, nonatomic) YTSingleVideoController *activeSingleVideo;
- (instancetype)initWithPlayerView:(id)playerView delegate:(id)delegate;
- (instancetype)initWithDelegate:(id)delegate;
- (GIMMe *)gimme;
- (BOOL)isPictureInPictureActive;
- (BOOL)canInvokePictureInPicture;
- (BOOL)canEnablePictureInPicture;
- (void)maybeInvokePictureInPicture;
- (void)maybeEnablePictureInPicture;
- (void)play;
- (void)pause;
@end