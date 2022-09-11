#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ASDisplayNode : NSObject
@property (atomic, copy, readwrite) NSArray *yogaChildren;
@property (nonatomic, copy, readwrite) NSString *accessibilityIdentifier;
@property (atomic, weak, readonly) ASDisplayNode *yogaParent;
@property (atomic, assign, readwrite) CGRect frame;
@property (atomic, assign, readwrite) CGRect bounds;
- (UIViewController *)closestViewController;
- (BOOL)isNodeLoaded;
@end
