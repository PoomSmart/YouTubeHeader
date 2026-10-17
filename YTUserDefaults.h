#import <Foundation/NSObject.h>

@interface YTUserDefaults : NSObject
- (NSInteger)persistentUserCaptionVisibility;
- (void)setPersistentUserCaptionVisibility:(NSInteger)visibility;
- (NSString *)persistentCaptionLanguageCode;
- (void)setPersistentCaptionLanguageCode:(NSString *)code;
@end
