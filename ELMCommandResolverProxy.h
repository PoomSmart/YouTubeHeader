#import "ELMCommandContext.h"

@interface ELMCommandResolverProxy : NSObject
- (instancetype)initWithCommandContext:(ELMCommandContext *)commandContext;
- (id)resolve:(NSData *)commandData;
@end
