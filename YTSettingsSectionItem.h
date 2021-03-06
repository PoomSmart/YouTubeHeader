#import "YTSettingsCell.h"

@interface YTSettingsSectionItem : NSObject
@property (nonatomic, assign, readwrite) BOOL hasSwitch;
@property (nonatomic, assign, readwrite) BOOL switchVisible;
@property (nonatomic, assign, readwrite) BOOL on;
@property (nonatomic, assign, readwrite) BOOL enabled;
@property (nonatomic, assign, readwrite) int settingItemId;
@property (nonatomic, copy, readwrite) BOOL (^switchBlock)(YTSettingsCell *, BOOL);
+ (instancetype)switchItemWithTitle:(NSString *)title titleDescription:(NSString *)titleDescription accessibilityIdentifier:(NSString *)accessibilityIdentifier switchOn:(BOOL)switchOn switchBlock:(BOOL (^)(YTSettingsCell *, BOOL))switchBlock settingItemId:(int)settingItemId;
- (instancetype)initWithTitle:(NSString *)title titleDescription:(NSString *)titleDescription;
@end