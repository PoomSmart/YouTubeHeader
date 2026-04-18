#import "ASControlNode.h"

@interface ASTextNode : ASControlNode <UIGestureRecognizerDelegate>
@property (atomic, copy, readwrite) NSAttributedString *attributedText;
- (BOOL)textColorFollowsTintColor;
- (void)setTextColorFollowsTintColor:(BOOL)followsTintColor;
- (void)prepareAttributedString:(NSMutableAttributedString *)attributedString isForIntrinsicSize:(BOOL)isForIntrinsicSize;
- (id)drawParametersForAsyncLayer:(id)layer;
@end
