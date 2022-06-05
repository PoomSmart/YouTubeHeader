#import <CoreGraphics/CoreGraphics.h>

@interface YTSingleVideoTime : NSObject
@property (nonatomic, readonly, assign) CGFloat absoluteTime;
@property (nonatomic, readonly, assign) CGFloat time;
@property (nonatomic, readonly, assign) CGFloat productionTime;
+ (instancetype)timeWithTime:(CGFloat)time productionTime:(CGFloat)productionTime;
+ (instancetype)zero;
+ (instancetype)timeWithTime:(CGFloat)time;
@end