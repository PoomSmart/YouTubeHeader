#import <AVKit/AVKit.h>
#import "MLAVPIPPlayerLayerView.h"
#import "MLHAMSBDLSampleBufferRenderingView.h"

@interface MLPIPController : NSObject <AVPictureInPictureControllerDelegate, AVPictureInPictureSampleBufferPlaybackDelegate>
@property (nonatomic, strong, readwrite) MLAVPIPPlayerLayerView *AVPlayerView;
@property (nonatomic, strong, readwrite) MLHAMSBDLSampleBufferRenderingView *HAMPlayerView;
- (id)initWithPlaceholderPlayerItem:(AVPlayerItem *)playerItem; // Deprecated
- (id)initWithPlaceholderPlayerItemResourcePath:(NSString *)placeholderPath; // Deprecated
- (AVPictureInPictureControllerContentSource *)newContentSource API_AVAILABLE(ios(15.0));
- (BOOL)isPictureInPictureSupported;
- (BOOL)isPictureInPictureActive; // Deprecated
- (BOOL)pictureInPictureActive;
- (BOOL)contentSourceNeedsRefresh;
- (CGSize)renderSizeForView:(UIView *)view;
- (void)initializePictureInPicture; // Deprecated
- (BOOL)startPictureInPicture; // Deprecated
- (void)stopPictureInPicture; // Deprecated
- (void)addPIPControllerObserver:(id)observer;
- (void)activatePiPController;
- (void)deactivatePiPController;
- (void)pictureInPictureControllerStartPlayback;
- (void)pictureInPictureControllerStopPlayback;
- (void)pause;
@end