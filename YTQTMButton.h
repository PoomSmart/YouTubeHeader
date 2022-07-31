#import <UIKit/UIKit.h>

@interface YTQTMButton : UIButton
+ (instancetype)button;
+ (instancetype)closeButton;
+ (instancetype)iconButton;
+ (instancetype)textButton;
@property (nonatomic, assign, readwrite) BOOL refreshRendererAfterPageStyling;
@end