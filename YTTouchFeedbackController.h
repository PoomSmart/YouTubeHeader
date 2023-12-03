#import "YTTouchFeedbackView.h"

@interface YTTouchFeedbackController : NSObject <UIGestureRecognizerDelegate>
@property (retain, nonatomic) YTTouchFeedbackView *touchFeedbackView;
- (instancetype)initWithView:(id)arg1;
@end
