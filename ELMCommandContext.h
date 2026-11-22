#import "YTELMContext.h"

@interface ELMCommandContext : NSObject
- (instancetype)initWithContext:(YTELMContext *)context senderState:(id)senderState sender:(id)sender recognizer:(id)recognizer;
@end
