//
//  PasswordInteractor.h
//

#import "PasswordInteractorInput.h"

@protocol PasswordInteractorOutput;
@class DBZxcvbn;

@interface PasswordInteractor : NSObject <PasswordInteractorInput>
@property (nonatomic, weak) id <PasswordInteractorOutput> output;
@property (nonatomic, strong) DBZxcvbn *zxcvbn;
@end
