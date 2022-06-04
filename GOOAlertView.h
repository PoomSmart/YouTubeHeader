#import "GOOModalView.h"

@interface GOOAlertView : GOOModalView
@property (nonatomic, copy, readwrite) NSString *title;
@property (nonatomic, readonly, strong) UILabel *titleLabel;
@property (nonatomic, copy, readwrite) NSString *subtitle;
@property (nonatomic, readonly, strong) UILabel *subtitleLabel;
@property (nonatomic, readwrite, copy) UIImage *icon;
+ (instancetype)dialog;
+ (instancetype)infoDialog;
+ (instancetype)confirmationDialog;
+ (instancetype)confirmationDialogWithAction:(id)action actionTitle:(NSString *)actionTitle;
+ (instancetype)confirmationDialogWithAction:(id)action actionTitle:(NSString *)actionTitle cancelTitle:(NSString *)cancelTitle;
+ (instancetype)confirmationDialogWithSelector:(SEL)selector actionTitle:(NSString *)actionTitle;
+ (instancetype)confirmationDialogWithSelector:(SEL)selector actionTitle:(NSString *)actionTitle showsCancelButton:(BOOL)showsCancelButton;
- (void)addCancelButton:(SEL)selector;
- (void)addCancelButtonWithAction:(void (^)(void))action;
@end
