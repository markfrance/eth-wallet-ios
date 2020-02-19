//
//  NSData+SECP256K1.h
//
//
// 24/04/2018.
//
//

@import Foundation;

@interface NSData (SECP256K1)
- (NSData *) signWithPrivateKeyData:(NSData *)privateKeyData;
@end
