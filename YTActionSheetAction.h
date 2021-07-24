#import <UIKit/UIKit.h>

@interface YTActionSheetAction : NSObject
+ (instancetype)actionWithTitle:(NSString *)title subtitle:(NSString *)subtitle iconImage:(UIImage *)iconImage accessibilityIdentifier:(NSString *)accessibilityIdentifier handler:(void (^)(YTActionSheetAction *))handler;
- (NSUInteger)accessibilityTraits;
- (void)setAccessibilityTraits:(NSUInteger)accessibilityTraits;
@end