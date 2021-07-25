#import <UIKit/UIKit.h>

#ifdef LEGACY

#import "YTMainAppPlayerOverlayView.h"

@interface YTMainAppVideoPlayerOverlayView : YTMainAppPlayerOverlayView
@end

#else

@interface YTMainAppVideoPlayerOverlayView : UIView
@end

#endif