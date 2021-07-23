#import "MLPlayer.h"
#import "MLAVAssetPlayer.h"
#import "MLPlayerViewProtocol.h"
#import "GIMMe.h"

@interface MLAVPlayer : MLPlayer
@property(assign) BOOL active;
- (GIMMe *)gimme;
- (MLVideo *)video;
- (MLInnerTubePlayerConfig *)config;
- (UIView <MLPlayerViewProtocol> *)playerView;
- (UIView <MLPlayerViewProtocol> *)renderingView;
- (MLAVAssetPlayer *)assetPlayer;
- (void)setRenderingView:(UIView <MLPlayerViewProtocol> *)renderingView;
@end