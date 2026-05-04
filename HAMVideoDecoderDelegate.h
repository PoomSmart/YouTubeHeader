#import <Foundation/NSObject.h>

@protocol HAMVideoDecoderDelegate <NSObject>
- (void)videoDecoderDidPrepare:(id)decoder;
- (void)videoDecoderDidTerminate:(id)decoder;
- (void)videoDecoder:(id)decoder didFailWithError:(NSError *)error;
@end
