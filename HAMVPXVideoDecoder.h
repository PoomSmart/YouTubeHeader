#import <Foundation/NSObject.h>

typedef struct {
    int threads;                // number of decode threads
    BOOL skipLoopFilter;        // VP9_SET_SKIP_LOOP_FILTER
    BOOL loopFilterOptimization;// VP9D_SET_LOOP_FILTER_OPT
    BOOL rowThreading;          // VP9D_SET_ROW_MT
    BOOL _reserved;
} HAMVPXDecoderConfig;

@interface HAMVPXVideoDecoder : NSObject
- (instancetype)initWithDelegate:(id)delegate
                   delegateQueue:(dispatch_queue_t)delegateQueue
                     decodeQueue:(dispatch_queue_t)decodeQueue
           pixelBufferAttributes:(id)pixelBufferAttributes
                          config:(HAMVPXDecoderConfig)config;
- (void)prepare;
- (void)terminate;
- (void)discardPendingFrames;
- (BOOL)canAcceptFormatWithDescription:(id)formatDescription;
- (void)decodeSampleBuffer:(id)sampleBuffer completionHandler:(id)completionHandler;
- (NSInteger)samplesPendingDecode;
@end
