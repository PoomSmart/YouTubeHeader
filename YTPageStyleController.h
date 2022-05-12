#import "YTColorPalette.h"

@interface YTPageStyleController : NSObject
+ (YTColorPalette *)currentColorPalette;
@property (nonatomic, assign, readwrite) NSInteger appThemeSetting;
@end
