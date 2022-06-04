#include "GIMMe.h"
#import <UIKit/UIKit.h>
#import "GIMMe.h"
#import "YTPlaybackController.h"

@interface YTPlayerViewController : UIViewController <YTPlaybackController>
- (GIMMe *)gimme; // Deprecated
- (NSString *)currentVideoID;
- (int)playerViewLayout;
- (void)didPressToggleFullscreen;
@end
