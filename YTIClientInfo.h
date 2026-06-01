#import "GPBMessage.h"

@interface YTIClientInfo : GPBMessage
@property (nonatomic, readwrite, assign) BOOL crackedHl;
@property (nonatomic, readwrite, assign) BOOL isInternal;
@property (nonatomic, readwrite, assign) int androidSdkVersion;
@property (nonatomic, readwrite, assign) int clientName;
@property (nonatomic, readwrite, assign) int connectionType;
@property (nonatomic, readwrite, assign) int effectiveConnectionType;
@property (nonatomic, readwrite, assign) int platform;
@property (nonatomic, readwrite, assign) int platformDetail;
@property (nonatomic, readwrite, assign) int playerType;
@property (nonatomic, readwrite, assign) int releaseYear;
@property (nonatomic, readwrite, assign) int theme;
@property (nonatomic, readwrite, assign) NSInteger encodedHacks;
@property (nonatomic, readwrite, assign) NSInteger memoryTotalKbytes;
@property (nonatomic, readwrite, copy) NSString *clientVersion;
@property (nonatomic, readwrite, copy) NSString *deviceBrand;
@property (nonatomic, readwrite, copy) NSString *deviceId;
@property (nonatomic, readwrite, copy) NSString *deviceMake;
@property (nonatomic, readwrite, copy) NSString *deviceModel;
@property (nonatomic, readwrite, copy) NSString *geo;
@property (nonatomic, readwrite, copy) NSString *gl;
@property (nonatomic, readwrite, copy) NSString *hl;
@property (nonatomic, readwrite, copy) NSString *originalURL;
@property (nonatomic, readwrite, copy) NSString *osName;
@property (nonatomic, readwrite, copy) NSString *osVersion;
@property (nonatomic, readwrite, copy) NSString *projectId;
@property (nonatomic, readwrite, copy) NSString *rawDeviceId;
@property (nonatomic, readwrite, copy) NSString *timeZone;
@property (nonatomic, readwrite, copy) NSString *userAgent;
@property (nonatomic, readwrite, copy) NSString *visitorData;
@end
