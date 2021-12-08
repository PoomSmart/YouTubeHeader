#import "YTIReelWatchEndpoint.h"
#import "YTIBrowseEndpoint.h"

@interface YTICommand : NSObject
@property (nonatomic, strong, readwrite) YTIReelWatchEndpoint *reelWatchEndpoint;
@property (retain, nonatomic) YTIBrowseEndpoint *browseEndpoint;
@end
