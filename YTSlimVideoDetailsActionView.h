#import "YTIFormattedStringLabel.h"
#import "YTSlimVideoScrollableDetailsActionsView.h"

@interface YTSlimVideoDetailsActionView : UIView
@property (nonatomic, strong, readwrite) YTIFormattedStringLabel *label;
@property (nonatomic, weak, readwrite) YTSlimVideoScrollableDetailsActionsView *visibilityDelegate;
- (instancetype)initWithSlimMetadataButtonSupportedRenderer:(id)renderer;
@end