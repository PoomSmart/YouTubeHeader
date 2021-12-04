#import "YTIFormattedStringLabel.h"

@interface YTSlimVideoDetailsActionView : UIView
@property (nonatomic, strong, readwrite) YTIFormattedStringLabel *label;
- (instancetype)initWithSlimMetadataButtonSupportedRenderer:(id)renderer;
@end