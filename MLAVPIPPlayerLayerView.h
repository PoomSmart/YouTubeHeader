#import "MLAVPlayerLayerView.h"
#import "MLAVPlayer.h"

@interface MLAVPIPPlayerLayerView : MLAVPlayerLayerView
- (AVPlayerLayer *)playerLayer;
- (MLAVPlayer *)delegate;
@end