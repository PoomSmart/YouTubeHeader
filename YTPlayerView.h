#import "MLAVPIPPlayerLayerView.h"
#import "YTPlaybackControllerUIWrapper.h"

@interface YTPlayerView : UIView
@property (retain, nonatomic) MLAVPIPPlayerLayerView *pipRenderingView;
@property (retain, nonatomic) MLAVPlayerLayerView *renderingView;
- (YTPlaybackControllerUIWrapper *)playerViewDelegate;
@end