#import <CoreGraphics/CoreGraphics.h>
#import "HAMMIMEType.h"
#import "YTIFormatStream.h"

@interface MLFormat : NSObject <NSCopying>
- (HAMMIMEType *)MIMEType;
- (YTIFormatStream *)formatStream;
- (NSURL *)URL;
- (NSString *)qualityLabel;
- (int)itag;
- (int)width;
- (int)height;
- (int)singleDimensionResolution;
- (CGFloat)FPS;
- (BOOL)isAudio;
- (BOOL)isVideo;
- (BOOL)isText;
- (NSInteger)compareByQuality:(MLFormat *)format;
- (NSInteger)bitrate;
@end
