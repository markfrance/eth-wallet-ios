//
//  SettingsInteractor.h
//
//
// 28/04/2018.
//
//

#import "SettingsInteractorInput.h"

@protocol SettingsInteractorOutput;

@interface SettingsInteractor : NSObject <SettingsInteractorInput>

@property (nonatomic, weak) id<SettingsInteractorOutput> output;

@end
