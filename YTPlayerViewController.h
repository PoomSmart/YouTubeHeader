#import <UIKit/UIKit.h>
#import "GIMMe.h"
#import "YTSingleVideoController.h"

@interface YTPlayerViewController : UIViewController
@property (strong, nonatomic) YTSingleVideoController *activeVideo;
- (GIMMe *)gimme;
@end