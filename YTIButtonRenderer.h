#import <Foundation/Foundation.h>
#import "YTICommand.h"
#import "YTIFormattedString.h"
#import "YTIIcon.h"

@interface YTIButtonRenderer : NSObject
@property(retain, nonatomic) YTICommand *command;
@property(retain, nonatomic) YTIIcon *icon;
@property(retain, nonatomic) YTICommand *navigationEndpoint;
@property (copy, nonatomic) NSString *targetId;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@end
