#import "YTCommonColorPalette.h"

@interface YTPageStyleController : NSObject
+ (YTCommonColorPalette *)currentColorPalette; // For YouTube older than 17.19.2, import/change type to YTColorPalette
@property (nonatomic, assign, readwrite) NSInteger appThemeSetting;
@end
