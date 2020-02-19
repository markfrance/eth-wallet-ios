//
//  KeychainAccountModel.m
//
//
// 30/10/2018.
//
//

#import "KeychainAccountModel.h"

@interface KeychainAccountModel ()
@property (nonatomic, strong) NSString *uid;
@property (nonatomic) BOOL backedUp;
@property (nonatomic, strong) NSArray <KeychainNetworkModel *> *networks;
@end

@implementation KeychainAccountModel

+ (instancetype) itemWithUID:(NSString *)uid backedUp:(BOOL)backedUp networks:(NSArray <KeychainNetworkModel *> *)networks {
  KeychainAccountModel *itemModel = [[[self class] alloc] init];
  itemModel.uid = uid;
  itemModel.backedUp = backedUp;
  itemModel.networks = networks;
  return itemModel;
}

@end
