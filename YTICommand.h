#import "YTIReelWatchEndpoint.h"
#import "YTIBrowseEndpoint.h"

@interface YTICommand : GPBMessage
@property (nonatomic, readwrite, strong) YTIReelWatchEndpoint *reelWatchEndpoint;
@property (nonatomic, readwrite, strong) YTIBrowseEndpoint *browseEndpoint;
@end
