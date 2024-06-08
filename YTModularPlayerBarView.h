#import "YTAdjustableAccessibilityProtocol.h"

@interface YTModularPlayerBarView : UIView
@property (nonatomic, assign, readonly) CGFloat totalTime;
@property (nonatomic, assign, readonly) CGFloat mediaTime;
@property (nonatomic, weak, readwrite) id <YTAdjustableAccessibilityProtocol> accessibilityDelegate;
@end
