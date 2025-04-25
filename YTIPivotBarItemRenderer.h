#import "YTICommand.h"
#import "YTIIcon.h"
#import "YTIThumbnailDetails.h"

@interface YTIPivotBarItemRenderer : GPBMessage
@property (nonatomic, copy, readwrite) NSString *targetId;
@property (nonatomic, strong, readwrite) YTIIcon *icon;
@property (nonatomic, strong, readwrite) YTIThumbnailDetails *thumbnail;
- (NSString *)pivotIdentifier;
- (YTICommand *)navigationEndpoint;
- (void)setNavigationEndpoint:(YTICommand *)navigationEndpoint;
@end