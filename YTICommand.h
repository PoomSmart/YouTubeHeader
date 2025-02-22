#import "YTIBrowseEndpoint.h"
#import "YTICommandExecutorCommand.h"
#import "YTINavigationEndpointInteractionLoggingExtension.h"
#import "YTIReelWatchEndpoint.h"
#import "YTIShowEngagementPanelEndpoint.h"

@interface YTICommand : GPBMessage
+ (instancetype)message;
@property (nonatomic, copy, readwrite) NSData *clickTrackingParams;
@property (nonatomic, readwrite, strong) YTIReelWatchEndpoint *reelWatchEndpoint;
@property (nonatomic, readwrite, strong) YTIBrowseEndpoint *browseEndpoint;
@property (nonatomic, readwrite, strong) YTINavigationEndpointInteractionLoggingExtension *interactionLoggingExtension;
- (YTICommandExecutorCommand *)yt_commandExecutorCommand;
- (YTIShowEngagementPanelEndpoint *)yt_showEngagementPanelEndpoint;
@end
