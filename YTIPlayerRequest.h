#import "YTIInnerTubeContext.h"

@interface YTIPlayerRequest : GPBMessage
@property (nonatomic, readwrite, copy) NSString *params;
@property (nonatomic, readwrite, copy) NSString *referrer;
@property (nonatomic, readwrite, copy) NSString *videoId;
@property (nonatomic, readwrite, strong) YTIInnerTubeContext *context;
@end
