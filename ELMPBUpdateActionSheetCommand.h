#import "ELMPBElement.h"

@interface ELMPBUpdateActionSheetCommand : GPBMessage
@property (nonatomic, readwrite, copy) NSString *sheetId;
@property (nonatomic, readwrite, strong) ELMPBElement *header;
@property (nonatomic, readwrite, strong) ELMPBElement *footer;
@property (nonatomic, readwrite, strong) NSMutableArray *listOptionArray;
@end
