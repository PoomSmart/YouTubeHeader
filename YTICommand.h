#import "YTIReelWatchEndpoint.h"
#import "YTIBrowseEndpoint.h"
#import "YTINavigationEndpointInteractionLoggingExtension.h"
#import "YTIShowEngagementPanelEndpoint.h"

@interface YTICommand : GPBMessage
+ (instancetype)message;
@property (nonatomic, copy, readwrite) NSData *clickTrackingParams;
@property (nonatomic, readwrite, strong) YTIReelWatchEndpoint *reelWatchEndpoint;
@property (nonatomic, readwrite, strong) YTIBrowseEndpoint *browseEndpoint;
@property (nonatomic, readwrite, strong) YTINavigationEndpointInteractionLoggingExtension *interactionLoggingExtension;
- (YTIShowEngagementPanelEndpoint *)yt_showEngagementPanelEndpoint;
@end
