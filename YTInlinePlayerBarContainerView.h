#import "YTGlassContainerView.h"
#import "YTQTMButton.h"

@interface YTInlinePlayerBarContainerView : YTGlassContainerView
@property (nonatomic, assign, readwrite) BOOL showOnlyFullscreenButton;
@property (nonatomic, assign, readwrite) int layout;
@property (nonatomic, weak, readwrite) id delegate;
- (YTQTMButton *)exitFullscreenButton;
- (YTQTMButton *)enterFullscreenButton;
@end
