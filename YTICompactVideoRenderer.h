#import "YTICommand.h"
#import "YTRendererForOfflineVideo.h"

@interface YTICompactVideoRenderer : GPBMessage <YTRendererForOfflineVideo>
@property (nonatomic, assign, readonly) NSString *videoId;
@property (nonatomic, assign, readwrite) YTICommand *navigationEndpoint; // readonly at runtime
@property (nonatomic, strong, readwrite) YTICommand *tappedAction;
@end
