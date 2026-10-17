#import <UIKit/UIImage.h>
#import <UIKit/UIView.h>

@interface YTPlayerBarScrubberDotDecorationView : UIView
@property (nonatomic, strong, readwrite) UIView *scrubberDot;
- (void)setCustomImageScrubberIcon:(UIImage *)image;
- (void)setScrubberDotColor:(UIColor *)color;
- (void)transformScrubberScale:(CGFloat)scale;
@end
