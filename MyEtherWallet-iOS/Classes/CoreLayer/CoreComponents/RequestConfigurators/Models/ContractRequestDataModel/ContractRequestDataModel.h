//
//  ContractRequestDataModelRequestDataModel.h
//
//
// 21/05/2018.
//
//

@import Foundation;

@interface ContractRequestDataModel : NSObject
@property (nonatomic, strong) NSArray *contractAddresses;
@property (nonatomic, strong) NSString *abi;
@property (nonatomic) NSInteger abiVersion;
@property (nonatomic, strong) NSArray *parameters;
@property (nonatomic, strong) NSString *method;
- (instancetype)initWithContractAddresses:(NSArray *)addresses
                                      abi:(NSString *)abi
                               abiVersion:(NSInteger)abiVersion
                               parameters:(NSArray *)parameters
                                  methods:(NSString *)method;
@end
