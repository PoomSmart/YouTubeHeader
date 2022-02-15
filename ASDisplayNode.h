#import <Foundation/Foundation.h>

@interface ASDisplayNode : NSObject
@property (atomic, copy, readwrite) NSArray *yogaChildren;
@property (nonatomic, copy, readwrite) NSString *accessibilityIdentifier;
- (UIViewController *)closestViewController;
- (BOOL)isNodeLoaded;
@end
