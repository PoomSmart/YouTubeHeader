#import "YTILikeTarget.h"
#import "YTIButtonSupportedRenderers.h"
#import "YTLikeStatus.h"

@interface YTISlimMetadataToggleButtonRenderer : NSObject
@property (nonatomic, readwrite, assign) BOOL isLike;
@property (nonatomic, readwrite, assign) BOOL isDislike;
@property (nonatomic, readwrite, assign) YTLikeStatus likeStatus;
@property (nonatomic, strong, readwrite) YTILikeTarget *target;
@property (nonatomic, strong, readwrite) YTIButtonSupportedRenderers *button;
@end
