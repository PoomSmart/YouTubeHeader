#import "YTMainAppVideoPlayerOverlayView.h"
#import "YTPlayerViewController.h"
#import "YTResponder.h"

@interface YTMainAppVideoPlayerOverlayViewController : UIViewController <YTResponder>
- (YTMainAppVideoPlayerOverlayView *)videoPlayerOverlayView;
- (YTPlayerViewController *)delegate;
- (void)didPressVideoQuality:(id)arg;
- (BOOL)isFullscreen;
- (CGFloat)totalTime;
@end