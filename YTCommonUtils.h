#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YTCommonUtils : NSObject
+ (BOOL)isIPhoneWithNotch;
+ (BOOL)isIPad;
+ (BOOL)isSmallDevice; // Deprecated
+ (BOOL)isAppRunningInFullScreen;
+ (unsigned int)uniformRandomWithUpperBound:(unsigned int)upperBound;
+ (UIWindow *)mainWindow; // YTMainWindow
+ (NSBundle *)bundleForClass:(Class)cls;
+ (NSBundle *)resourceBundleForModuleName:(NSString *)module appBundle:(NSBundle *)appBundle;
+ (NSString *)hardwareModel; // Removed in YouTube 19.13.1
@end