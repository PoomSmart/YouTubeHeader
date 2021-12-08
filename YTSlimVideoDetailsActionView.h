#import "YTIFormattedStringLabel.h"
#import "YTSlimVideoScrollableDetailsActionsView.h"


@interface YTSlimVideoDetailsActionView : UIView
@property (nonatomic, strong, readwrite) YTIFormattedStringLabel *label;
@property (nonatomic, weak, readwrite) YTSlimVideoScrollableDetailsActionsView *visibilityDelegate;
@property (nonatomic) __weak id delegate;
- (instancetype)initWithSlimMetadataButtonSupportedRenderer:(id)renderer;
@end
