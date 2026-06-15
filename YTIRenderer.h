#import "YTIButtonRenderer.h"
#import "YTIElementRenderer.h"
#import "YTIMenuRenderer.h"

@interface YTIRenderer : GPBMessage
@property (nonatomic, strong, readwrite) YTIButtonRenderer *buttonRenderer;
@property (nonatomic, strong, readwrite) YTIElementRenderer *elementRenderer;
@property (nonatomic, strong, readonly) YTIMenuRenderer *menuRenderer;
@end
