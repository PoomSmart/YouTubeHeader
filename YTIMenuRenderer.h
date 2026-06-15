#import "YTIMenuItemSupportedRenderers.h"

@interface YTIMenuRenderer : GPBMessage
+ (instancetype)menuRendererWithMenuItemSupportedRenderer:(YTIMenuItemSupportedRenderers *)menuItemSupportedRenderer;
@property (nonatomic, strong, readwrite) NSMutableArray <YTIMenuItemSupportedRenderers *> *itemsArray;
@end
