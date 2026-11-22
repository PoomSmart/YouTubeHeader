#import <Foundation/Foundation.h>

@interface YTInMemoryEntityStoreV2 : NSObject
- (id)entityForKey:(NSString *)entityKey error:(NSError **)error;
@end
