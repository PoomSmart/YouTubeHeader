#include "GIMMe.h"
#import <UIKit/UIKit.h>
#import "GIMMe.h"
#import "YTPlaybackController.h"

@interface YTPlayerViewController : UIViewController <YTPlaybackController>
- (GIMMe *)gimme; // Old version
- (int)playerViewLayout;
- (void)didPressToggleFullscreen;
@end
