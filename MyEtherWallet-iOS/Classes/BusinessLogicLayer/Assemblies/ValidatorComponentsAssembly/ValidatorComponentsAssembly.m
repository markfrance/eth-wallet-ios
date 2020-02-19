//
//  ValidatorComponentsAssembly.m
//
//
// 08/11/2018.
//
//

#import "ValidatorComponentsAssembly.h"

#import "ServiceComponents.h"

#import "MnemonicsValidatorImplementation.h"

#import "NSCharacterSet+WNS.h"

@implementation ValidatorComponentsAssembly

- (id<ObjectValidator>) mnemonicsValidator {
  return [TyphoonDefinition withClass:[MnemonicsValidatorImplementation class]
                        configuration:^(TyphoonDefinition *definition) {
                          [definition injectProperty:@selector(separatorCharacterSet)
                                                with:[self mnemonicsSeparatorCharacterSet]];
                          [definition injectProperty:@selector(walletService)
                                                with:[self.serviceComponents MEWwallet]];
                        }];
}

#pragma mark - Private

- (NSCharacterSet *) mnemonicsSeparatorCharacterSet {
  return [TyphoonDefinition withClass:[NSCharacterSet class]
                        configuration:^(TyphoonDefinition *definition) {
                          [definition useInitializer:@selector(whitespaceAndSpaceAndNewlineCharacterSet)];
                        }];
}

@end
