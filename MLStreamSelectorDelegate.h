#import <Foundation/Foundation.h>

@protocol MLStreamSelectorDelegate <NSObject>
@required
- (void)streamSelectorHasSelectableVideoFormats:(NSArray *)formats;
@end
