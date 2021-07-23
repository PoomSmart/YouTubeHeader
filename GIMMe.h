#import <Foundation/Foundation.h>

@interface GIMMe : NSObject
- (instancetype)allocOf:(Class)cls;
- (id)nullableInstanceForType:(id)type;
- (id)instanceForType:(id)type;
@end