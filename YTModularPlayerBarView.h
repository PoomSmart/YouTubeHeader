#import "YTAdjustableAccessibilityProtocol.h"

@interface YTModularPlayerBarView : UIView
@property (nonatomic, assign, readonly) CGFloat totalTime; // Removed in YouTube 19.37.2
@property (nonatomic, assign, readonly) CGFloat mediaTime;
@property (nonatomic, weak, readwrite) id <YTAdjustableAccessibilityProtocol> accessibilityDelegate;
@end
