#import "YTSettingsCell.h"

@interface YTSettingsSectionItem : NSObject
@property (nonatomic, assign, readwrite) BOOL hasSwitch;
@property (nonatomic, assign, readwrite) BOOL switchVisible;
@property (nonatomic, assign, readwrite) BOOL on;
@property (nonatomic, assign, readwrite) int settingItemId;
@property (nonatomic, copy, readwrite) BOOL (^switchBlock)(YTSettingsCell *, BOOL);
- (instancetype)initWithTitle:(NSString *)title titleDescription:(NSString *)titleDescription;
@end