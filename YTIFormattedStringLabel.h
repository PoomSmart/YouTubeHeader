#import "YTIFormattedStringLabel.h"

@interface YTIFormattedStringLabel : UILabel
@property (nonatomic, copy, readwrite) NSAttributedString *attributedText;
- (void)setFormattedString:(YTIFormattedStringLabel *)string;
@end
