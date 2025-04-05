#import "YTICommand.h"

@interface YTIPlaylistPanelVideoRenderer : GPBMessage
@property (nonatomic, assign, readonly) NSString *videoId;
@property (nonatomic, assign, readonly) NSString *playlistSetVideoId;
@property (nonatomic, assign, readonly) YTICommand *navigationEndpoint;
@end
