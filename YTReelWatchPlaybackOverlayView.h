#import "YTQTMButton.h"
#import "YTResponder.h"

@interface YTReelWatchPlaybackOverlayView : UIView <YTResponder>
@property (nonatomic, assign, readonly) YTQTMButton *overflowButton;
- (NSArray <YTQTMButton *> *)orderedRightSideButtons;
@end
