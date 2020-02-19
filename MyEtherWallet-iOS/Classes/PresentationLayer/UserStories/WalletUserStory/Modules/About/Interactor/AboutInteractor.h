//
//  AboutInteractor.h
//
//
// 25/07/2018.
//
//

#import "AboutInteractorInput.h"

@protocol AboutInteractorOutput;

@interface AboutInteractor : NSObject <AboutInteractorInput>

@property (nonatomic, weak) id<AboutInteractorOutput> output;

@end
