#import <Foundation/Foundation.h>

@interface ASDisplayNode : NSObject
@property (atomic, copy, readwrite) NSArray *yogaChildren;
- (UIViewController *)closestViewController;
- (BOOL)isNodeLoaded;
@end
