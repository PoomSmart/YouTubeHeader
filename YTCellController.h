#import <Foundation/Foundation.h>
#import "YTCollectionViewCellProtocol.h"

@interface YTCellController : NSObject
- (id <YTCollectionViewCellProtocol> *)cell;
@end