#import "YTIButtonRenderer.h"
#import "YTILikeButtonRenderer.h"
#import "YTIToggleButtonRenderer.h"

@interface YTIButtonSupportedRenderers : NSObject
@property (nonatomic, strong, readwrite) YTIButtonRenderer *buttonRenderer;
@property (nonatomic, strong, readwrite) YTILikeButtonRenderer *likeButtonRenderer;
@property (nonatomic, strong, readwrite) YTIToggleButtonRenderer *toggleButtonRenderer;
@end
