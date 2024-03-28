#import "YTMainAppVideoPlayerOverlayViewController.h"

@interface YTModularPlayerBarView : UIView
@property (nonatomic, assign, readonly) CGFloat totalTime;
@property (nonatomic, weak, readwrite) YTMainAppVideoPlayerOverlayViewController *accessibilityDelegate;
@end
