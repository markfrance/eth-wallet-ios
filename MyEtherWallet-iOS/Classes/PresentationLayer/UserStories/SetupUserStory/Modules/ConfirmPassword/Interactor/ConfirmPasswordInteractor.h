//
//  ConfirmPasswordInteractor.h
//
//
// 01/05/2018.
//
//

#import "ConfirmPasswordInteractorInput.h"

@protocol ConfirmPasswordInteractorOutput;

@interface ConfirmPasswordInteractor : NSObject <ConfirmPasswordInteractorInput>

@property (nonatomic, weak) id<ConfirmPasswordInteractorOutput> output;

@end
