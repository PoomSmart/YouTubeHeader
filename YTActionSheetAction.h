#import <UIKit/UIKit.h>

@interface YTActionSheetAction : NSObject
+ (instancetype)actionWithTitle:(NSString *)title style:(NSInteger)style handler:(void (^)(YTActionSheetAction *))handler;
+ (instancetype)actionWithTitle:(NSString *)title iconImage:(UIImage *)iconImage style:(NSInteger)style handler:(void (^)(YTActionSheetAction *))handler;
+ (instancetype)actionWithTitle:(NSString *)title subtitle:(NSString *)subtitle iconImage:(UIImage *)iconImage handler:(void (^)(YTActionSheetAction *))handler;
+ (instancetype)actionWithTitle:(NSString *)title subtitle:(NSString *)subtitle iconImage:(UIImage *)iconImage accessibilityIdentifier:(NSString *)accessibilityIdentifier handler:(void (^)(YTActionSheetAction *))handler;
@end