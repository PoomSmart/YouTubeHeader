#import "GPBMessage.h"

typedef enum {
    YT_UNKNOWN = 0,
    YT_MY_CHANNEL = 1,
    YT_SOCIAL = 11,
    YT_SETTINGS = 44,
    YT_SHARE = 48,
    YT_DISLIKE = 51,
    YT_VERY_HAPPY = 89,
    YT_HAPPY = 90,
    YT_MEH = 91,
    YT_SAD = 92,
    YT_VERY_SAD = 93,
    YT_LIKE = 160,
    YT_SWITCH_ACCOUNTS = 182,
    YT_EMOJI = 279,
    YT_LIKE_SELECTED = 301,
    YT_DISLIK_SELECTED = 302,
    YT_UPLOAD = 329,
    YT_IMAGE = 367,
    YT_TV = 473,
    YT_EXPERIMENT = 495,
    YT_GOOGLE = 498,
    YT_TRANSLATE = 540,
    YT_LOCK = 573,
    YT_PREMIUM = 688,
    YT_PIP = 801, // a.k.a YT_WALLPAPER
    YT_GIFT = 864,
    YT_AUDIO = 891,
    YT_SELL = 903,
    YT_SETTINGS_HD = 1132,
    YT_SETTINGS_CAIRO = 1162,
} YTIcon;

@interface YTIIcon : GPBMessage
@property (nonatomic, assign, readwrite) YTIcon iconType;
@end
