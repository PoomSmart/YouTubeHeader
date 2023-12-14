#import <UIKit/UIKit.h>
#import "ASCollectionNode.h"

@interface ASCollectionView : UICollectionView
@property (nonatomic, weak, readwrite) ASCollectionNode *collectionNode;
@end
