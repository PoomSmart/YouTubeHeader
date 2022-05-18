#import <Foundation/Foundation.h>

@interface YTIBrowseRequest : NSObject
+ (NSString *)browseIDForExploreTab;
+ (NSString *)browseIDForAccountTab;
+ (NSString *)browseIDForActivityTab;
+ (NSString *)browseIDForHomeTab;
+ (NSString *)browseIDForLibraryTab;
+ (NSString *)browseIDForTrendingTab;
+ (NSString *)browseIDForSubscriptionsTab;
+ (NSString *)browseIDForWhatToWatch;
@end