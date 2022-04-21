#import "YTIFormatStream.h"

@interface MLFormat : NSObject <NSCopying>
- (YTIFormatStream *)formatStream;
- (NSInteger)compareByQuality:(MLFormat *)format;
- (unsigned int)codec;
- (BOOL)isVideo;
- (BOOL)isText;
- (int)width;
- (int)height;
- (int)singleDimensionResolution;
- (double)FPS;
@end