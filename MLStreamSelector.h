#import "MLStreamSelectorDelegate.h"

@interface MLStreamSelector : NSObject
@property (nonatomic, weak, readwrite) id <MLStreamSelectorDelegate> delegate;
- (BOOL)selectStreamWithReason:(NSInteger)reason forceSelection:(BOOL)forceSelection;
@end
