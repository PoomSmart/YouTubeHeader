#import <CoreMedia/CMSampleBuffer.h>
#import <Foundation/NSObject.h>

@interface HAMInputSampleBuffer : NSObject
- (NSInteger)sampleCount;
- (NSData *)data;
- (NSInteger)sizeForSample:(NSInteger)idx;
- (CMSampleTimingInfo)timingInfoForSample:(NSInteger)idx;
- (CMTime)presentationTime;
- (CMTime)originalPresentationTime;
- (id)formatSelection;
- (id)formatDescription;
- (double)productionTime;
- (int64_t)periodID;
- (BOOL)dropFrames;
@end
