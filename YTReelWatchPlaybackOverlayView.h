#import "YTQTMButton.h"
#import <UIKit/UIKit.h>

@interface YTReelWatchPlaybackOverlayView : UIView
@property YTQTMButton *overflowButton;
- (NSArray<YTQTMButton *> *)orderedRightSideButtons;
@end