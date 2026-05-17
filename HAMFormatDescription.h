#import "HAMBuildableObject.h"
#import "HAMFormat.h"
#import <CoreMedia/CoreMedia.h>

@interface HAMFormatDescription : HAMBuildableObject
@property (nonatomic, assign, readonly) id <HAMFormat> format;
- (CMFormatDescriptionRef)formatDescription;
- (CMVideoCodecType)mediaSubType;
@end
