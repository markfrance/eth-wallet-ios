//
//  MEWcryptoMessage.h
//
//
// 17/06/2018.
//
//

@import Foundation;

@interface MEWcryptoMessage : NSObject
@property (nonatomic, strong, readonly) NSData *iv;
@property (nonatomic, strong, readonly) NSData *ephemPublicKey;
@property (nonatomic, strong, readonly) NSData *cipher;
@property (nonatomic, strong, readonly) NSData *mac;
+ (instancetype) messageWithIV:(NSData *)iv ephemPublicKey:(NSData *)ephemPublicKey cipher:(NSData *)cipher mac:(NSData *)mac;
+ (instancetype) messageWithIVArray:(NSArray <NSNumber *> *)ivArray ephemPublicKeyArray:(NSArray <NSNumber *> *)ephemPublicKeyArray cipherArray:(NSArray <NSNumber *> *)cipherArray macArray:(NSArray <NSNumber *> *)macArray;
+ (instancetype) messageWithRepresentation:(NSDictionary *)representation;
- (BOOL) isValid;
- (NSDictionary *) representation;
@end
