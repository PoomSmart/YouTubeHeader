#import "YTQTMButton.h"
#import "YTPlayerViewController.h"

@interface YTMainAppControlsOverlayView : UIView
+ (CGFloat)topButtonAdditionalPadding;
@property (nonatomic, strong, readwrite) YTPlayerViewController *playerViewController;
- (YTQTMButton *)buttonWithImage:(UIImage *)image accessibilityLabel:(NSString *)accessibilityLabel verticalContentPadding:(CGFloat)verticalContentPadding;
@end