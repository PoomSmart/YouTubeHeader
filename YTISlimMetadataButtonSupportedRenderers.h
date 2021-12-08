#import "YTISlimMetadataToggleButtonRenderer.h"
#import "YTISlimMetadataButtonRenderer.h"

@interface YTISlimMetadataButtonSupportedRenderers : NSObject
@property (nonatomic, strong, readwrite) YTISlimMetadataToggleButtonRenderer *slimMetadataToggleButtonRenderer;
@property (retain, nonatomic) YTISlimMetadataButtonRenderer *slimMetadataButtonRenderer;
- (BOOL)slimButton_isDislikeButton;
- (BOOL)slimButton_isOfflineButton;
- (int)rendererOneOfCase;
@end
