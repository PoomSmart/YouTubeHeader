#import "YTISlimMetadataToggleButtonRenderer.h"

@interface YTISlimMetadataButtonSupportedRenderers : NSObject
@property (nonatomic, strong, readwrite) YTISlimMetadataToggleButtonRenderer *slimMetadataToggleButtonRenderer;
- (BOOL)slimButton_isDislikeButton;
- (BOOL)slimButton_isOfflineButton;
@end