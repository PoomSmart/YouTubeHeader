#import <Foundation/Foundation.h>

@interface YTSafeModeController : NSObject
- (void)deleteAllSettingsInUserDefaults:(NSUserDefaults *)userDefaults;
- (void)deleteConfigGroupsInUserDefaults:(NSUserDefaults *)userDefaults;
@end
