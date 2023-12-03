#import "YTLightweightQTMButton.h"

@interface YTQTMButton : YTLightweightQTMButton
+ (instancetype)barButtonWithImage:(id)arg1 accessibilityLabel:(id)arg2 accessibilityIdentifier:(id)arg3;
+ (instancetype)button;
+ (instancetype)closeButton;
+ (instancetype)iconButton;
+ (instancetype)textButton;
@property (nonatomic, assign, readwrite) CGFloat buttonImageTitlePadding;
@property (nonatomic, assign, readwrite) CGFloat minHitTargetSize;
@property (nonatomic, assign, readwrite) CGFloat verticalContentPadding;
@property (nonatomic, assign, readwrite) NSInteger buttonLayoutStyle;
@property (nonatomic, assign, readwrite) BOOL refreshRendererAfterPageStyling;
@property (nonatomic, assign, readwrite) BOOL sizeWithPaddingAndInsets;
@property (nonatomic, copy, readwrite) NSString *accessibilityIdentifier;
@property (nonatomic, copy, readwrite) NSString *accessibilityLabel;
- (void)enableNewTouchFeedback;
- (void)setTitleTypeKind:(NSInteger)titleTypeKind typeVariant:(NSInteger)typeVariant;
@end
