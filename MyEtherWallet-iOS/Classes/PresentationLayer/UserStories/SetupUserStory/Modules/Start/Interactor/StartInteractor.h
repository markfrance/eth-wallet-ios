//
//  StartInteractor.h
//
//
// 14/04/2018.
//
//

#import "StartInteractorInput.h"

@protocol StartInteractorOutput;

@protocol MEWwallet;

@interface StartInteractor : NSObject <StartInteractorInput>
@property (nonatomic, weak) id<StartInteractorOutput> output;
@property (nonatomic, strong) id <MEWwallet> walletService;
@end
