#import <UIKit/UIKit.h>
#import "YTPlaybackController.h"

@interface YTPlayerViewController : UIViewController <YTPlaybackController>
- (int)playerViewLayout;
- (void)didPressToggleFullscreen;
@end