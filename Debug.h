#import "YTAlertView.h"

#define showAlert(message) \
    do { \
        YTAlertView *alert = [NSClassFromString(@"YTAlertView") infoDialog]; \
        alert.title = @"Debug"; \
        alert.subtitle = message; \
        dispatch_async(dispatch_get_main_queue(), ^{ \
            [alert show]; \
        }); \
    } while (0)
