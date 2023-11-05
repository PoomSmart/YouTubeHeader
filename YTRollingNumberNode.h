#import "ASDisplayNode.h"
#import "ELMElement.h"
#import "YTRollingNumberView.h"

@interface YTRollingNumberNode : ASDisplayNode
@property (atomic, strong, readwrite) ELMElement *element;
- (instancetype)initWithElement:(ELMElement *)element context:(id)context;
- (YTRollingNumberView *)createRollingNumberView;
- (void)updateRollingNumberView;
- (void)relayoutNode;
- (void)controllerDidApplyProperties;
@end
