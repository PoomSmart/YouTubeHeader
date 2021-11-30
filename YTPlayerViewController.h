#import <UIKit/UIKit.h>
#import "YTSingleVideoController.h"

@interface YTPlayerViewController : UIViewController
@property (strong, nonatomic) YTSingleVideoController *activeVideo;
- (int)playerViewLayout;
- (void)didPressToggleFullscreen;
@end