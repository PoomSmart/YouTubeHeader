#import "GPBExtensionDescriptor.h"
#import "GPBUnknownFieldSet.h"

@interface GPBMessage : NSObject
@property (nonatomic, copy, readwrite) GPBUnknownFieldSet *unknownFields;
+ (instancetype)parseFromData:(NSData *)data;
+ (instancetype)parseFromData:(NSData *)data error:(NSError **)error;
+ (instancetype)deserializeFromString:(NSString *)str;
- (instancetype)messageForFieldNumber:(NSUInteger)fieldNumber;
- (instancetype)messageForFieldNumber:(NSUInteger)fieldNumber messageClass:(Class)messageClass;
- (id)firstSubmessage;
- (void)clear;
- (void)setExtension:(GPBExtensionDescriptor *)extension value:(id)value;
- (void)mergeFrom:(GPBMessage *)other;
@end
