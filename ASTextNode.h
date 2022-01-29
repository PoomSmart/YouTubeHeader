#import "ASControlNode.h"

@interface ASTextNode : ASControlNode
@property (atomic, copy, readwrite) NSAttributedString *attributedText;
@end
