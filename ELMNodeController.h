#import "ASNodeController.h"
#import "ELMComponent.h"
#import "ELMController.h"
#import "YTELMContext.h"

@interface ELMNodeController : ASNodeController <ELMController>
@property (nonatomic, weak, readwrite) id <ELMController> parent;
- (const void *)materializationContext;
- (YTELMContext *)context;
- (ELMComponent *)owningComponent;
- (id)element;
- (void)updateWithElement:(id)element;
- (NSString *)key;
- (NSArray <id <ELMController>> *)children;
@end
