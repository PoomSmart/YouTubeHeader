#import <UIKit/UIImageView.h>

@interface YTPlayerBarScrubberDotView : UIView
@property (nonatomic, strong, readwrite) UIImageView *customScrubberImageView;
- (void)setCustomScrubberImageViewSize:(CGSize)size;
@end
