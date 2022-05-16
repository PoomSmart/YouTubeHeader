#import "YTIFormatStream.h"

@interface MLFormat : NSObject <NSCopying>
@property (nonatomic, readonly, strong) YTIFormatStream *formatStream;
@property (nonatomic, readonly, strong) NSURL *URL;
@property (nonatomic, readonly, assign) int width;
@property (nonatomic, readonly, assign) int height;
@property (nonatomic, readonly, assign) int singleDimensionResolution;
@property (nonatomic, readonly, assign) CGFloat FPS;
@property (nonatomic, readonly, assign) BOOL isAudio;
@property (nonatomic, readonly, assign) BOOL isVideo;
@property (nonatomic, readonly, assign) BOOL isText;
- (NSInteger)compareByQuality:(MLFormat *)format;
@end
