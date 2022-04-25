#import <AVKit/AVKit.h>
#import "MLAVPIPPlayerLayerView.h"
#import "MLHAMSBDLSampleBufferRenderingView.h"

@interface MLPIPController : NSObject <AVPictureInPictureControllerDelegate, AVPictureInPictureSampleBufferPlaybackDelegate>
@property (retain, nonatomic) MLAVPIPPlayerLayerView *AVPlayerView;
@property (retain, nonatomic) MLHAMSBDLSampleBufferRenderingView *HAMPlayerView;
- (id)initWithPlaceholderPlayerItem:(AVPlayerItem *)playerItem;
- (id)initWithPlaceholderPlayerItemResourcePath:(NSString *)placeholderPath;
- (AVPictureInPictureControllerContentSource *)newContentSource API_AVAILABLE(ios(15.0));
- (BOOL)isPictureInPictureSupported;
- (BOOL)isPictureInPictureActive;
- (BOOL)pictureInPictureActive;
- (BOOL)contentSourceNeedsRefresh;
- (MLAVPIPPlayerLayerView *)playerLayerView;
- (CGSize)renderSizeForView:(UIView *)view;
- (void)initializePictureInPicture;
- (BOOL)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)addPIPControllerObserver:(id)observer;
- (void)activatePiPController;
- (void)deactivatePiPController;
- (void)pictureInPictureControllerStartPlayback;
- (void)pictureInPictureControllerStopPlayback;
@end