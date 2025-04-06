#import "YTICommand.h"
#import "YTIThumbnailDetails.h"

@interface YTIPivotBarItemRenderer : NSObject
@property (nonatomic, copy, readwrite) NSString *targetId;
@property (nonatomic, strong, readwrite) YTIThumbnailDetails *thumbnail;
- (NSString *)pivotIdentifier;
- (YTICommand *)navigationEndpoint;
- (void)setNavigationEndpoint:(YTICommand *)navigationEndpoint;
@end