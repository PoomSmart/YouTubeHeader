#import <Foundation/Foundation.h>

@interface MLQuickMenuVideoQualitySettingFormatConstraint : NSObject
@property (nonatomic, readonly, assign) int videoQualitySetting;
@property (nonatomic, readonly, assign) int stickyResolutionCap;
@property (nonatomic, readonly, assign) int formatSelectionReason;
@property (nonatomic, readonly, assign) BOOL disableTrack;
- (instancetype)initWithVideoQualitySetting:(int)videoQualitySetting formatSelectionReason:(NSInteger)formatSelectionReason qualityLabel:(NSString *)qualityLabel;
- (instancetype)initWithVideoQualitySetting:(int)videoQualitySetting formatSelectionReason:(NSInteger)formatSelectionReason qualityLabel:(NSString *)qualityLabel resolutionCap:(int)resolutionCap;
@end
