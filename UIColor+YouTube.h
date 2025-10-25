#import <UIKit/UIColor.h>

@interface UIColor (YouTube)
+ (instancetype)colorWithRGBValue:(unsigned int)rgb floatAlpha:(CGFloat)alpha;
+ (instancetype)gid_colorWithRGBHex:(NSUInteger)hex;
+ (instancetype)LOT_colorWithHexString:(NSString *)hexString;
- (unsigned int)rgbHex;
- (NSString *)LOT_hexStringValue;
@end
