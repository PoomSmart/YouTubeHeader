#import "YTMainAppVideoPlayerOverlayView.h"
#import "YTResponder.h"
#import "YTVideoPlayerOverlayDelegate.h"

@interface YTMainAppVideoPlayerOverlayViewController : UIViewController <YTResponder>
- (YTMainAppVideoPlayerOverlayView *)videoPlayerOverlayView;
- (id <YTVideoPlayerOverlayDelegate>)delegate;
- (void)didPressVideoQuality:(id)arg;
- (BOOL)isFullscreen;
- (CGFloat)totalTime;
@end