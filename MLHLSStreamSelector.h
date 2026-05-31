#import "MLStreamSelector.h"

@interface MLHLSStreamSelector : MLStreamSelector
- (BOOL)selectStreamWithReason:(NSInteger)reason forceSelection:(BOOL)forceSelection;
- (void)selectInitialStreamUsingRemoteMasterPlaylist;
@end
