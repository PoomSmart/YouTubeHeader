#import <Foundation/Foundation.h>

@interface YTIOpenElementsScreenCommand : NSObject
- (id)element;
- (void)setForceDarkTheme:(BOOL)forceDarkTheme;
@end

@interface YTIOpenElementsScreenCommandElement : NSObject
- (id)data;
@end