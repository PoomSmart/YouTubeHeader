#import <Foundation/Foundation.h>

@interface MLFormat : NSObject <NSCopying>
- (NSInteger)compareByQuality:(MLFormat *)format;
- (unsigned int)codec;
- (BOOL)isVideo;
- (BOOL)isText;
@end