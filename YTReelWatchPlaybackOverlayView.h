#import <UIKit/UIKit.h>

@interface YTReelWatchPlaybackOverlayView : UIView
@property (nonatomic, assign, readonly) YTQTMButton *overflowButton;
- (NSArray <YTQTMButton *> *)orderedRightSideButtons;
@end
