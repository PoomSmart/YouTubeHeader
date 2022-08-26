#import "YTLightweightQTMButton.h"

@interface YTQTMButton : YTLightweightQTMButton
+ (instancetype)button;
+ (instancetype)closeButton;
+ (instancetype)iconButton;
+ (instancetype)textButton;
@property(nonatomic, assign, readwrite) CGFloat buttonImageTitlePadding;
@property(nonatomic, assign, readwrite) NSInteger buttonLayoutStyle;
@property(nonatomic, assign, readwrite) BOOL refreshRendererAfterPageStyling;
@property(nonatomic, assign, readwrite) BOOL sizeWithPaddingAndInsets;
@property(nonatomic, assign, readwrite) CGFloat verticalContentPadding;
- (void)setTitleTypeKind:(NSInteger)titleTypeKind
             typeVariant:(NSInteger)typeVariant;
@end