#import "YTIBrowseEndpoint.h"
#import "YTICommandExecutorCommand.h"
#import "YTINavigationEndpointInteractionLoggingExtension.h"
#import "YTIReelWatchEndpoint.h"
#import "YTIShowEngagementPanelEndpoint.h"

@interface YTICommand : GPBMessage
@property (nonatomic, copy, readwrite) NSData *clickTrackingParams;
@property (nonatomic, readwrite, strong) YTIReelWatchEndpoint *reelWatchEndpoint;
@property (nonatomic, readwrite, strong) YTIBrowseEndpoint *browseEndpoint;
@property (nonatomic, readwrite, strong) YTINavigationEndpointInteractionLoggingExtension *interactionLoggingExtension;
+ (instancetype)message;
+ (instancetype)signInNavigationEndpoint;
+ (instancetype)watchNavigationEndpointWithVideoID:(NSString *)videoID;
+ (instancetype)watchNavigationEndpointWithPlaylistID:(NSString *)playlistID videoID:(NSString *)videoID index:(NSUInteger)index watchNextToken:(id)watchNextToken;
- (YTICommandExecutorCommand *)yt_commandExecutorCommand;
- (YTIShowEngagementPanelEndpoint *)yt_showEngagementPanelEndpoint;
@end
