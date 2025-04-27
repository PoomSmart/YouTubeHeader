#import "YTAdjustableAccessibilityProtocol.h"
#import "YTMainAppVideoPlayerOverlayView.h"
#import "YTPlayerBarController.h"
#import "YTResponder.h"
#import "YTVideoPlayerOverlayDelegate.h"

@interface YTMainAppVideoPlayerOverlayViewController : UIViewController <YTResponder, YTAdjustableAccessibilityProtocol>
@property (nonatomic, strong, readwrite) YTPlayerBarController *playerBarController;
@property (nonatomic, weak, readwrite) id <YTVideoPlayerOverlayDelegate> delegate;
- (YTMainAppVideoPlayerOverlayView *)videoPlayerOverlayView;
- (void)didPressVarispeed:(id)arg;
- (void)didPressVideoQuality:(id)arg;
- (void)setPlaybackRate:(CGFloat)rate;
- (BOOL)isFullscreen;
- (CGFloat)totalTime;
- (CGFloat)currentPlaybackRate;
@end