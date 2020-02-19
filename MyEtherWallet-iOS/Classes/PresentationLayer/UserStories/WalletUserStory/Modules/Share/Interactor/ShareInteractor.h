//
//  ShareInteractor.h
//
//
// 11/10/2018.
//
//

#import "ShareInteractorInput.h"

@protocol ShareInteractorOutput;

@interface ShareInteractor : NSObject <ShareInteractorInput>

@property (nonatomic, weak) id<ShareInteractorOutput> output;

@end
