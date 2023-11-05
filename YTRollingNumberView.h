#include <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YTRollingNumberView : UIView
@property (nonatomic, strong, readwrite) NSMutableArray *digitViews;
- (instancetype)initWithDelegate:(id)delegate;
- (NSString *)updatedCount;
- (NSNumber *)updatedCountNumber;
- (UIFont *)font;
- (UIColor *)color;
- (void)setUpdatedCount:(NSString *)updatedCount updatedCountNumber:(NSNumber *)updatedCountNumber font:(UIFont *)font color:(UIColor *)color skipAnimation:(BOOL)skipAnimation;
@end
