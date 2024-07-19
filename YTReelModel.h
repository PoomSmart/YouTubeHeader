#import "YTIPlayerResponse.h"
#import "YTReelContentModel.h"

@interface YTReelModel : YTReelContentModel
@property (nonatomic, readonly, assign) int videoType;
@property (nonatomic, copy, readwrite) NSString *joinVideoID;
- (YTIPlayerResponse *)playerResponseOverride;
@end
