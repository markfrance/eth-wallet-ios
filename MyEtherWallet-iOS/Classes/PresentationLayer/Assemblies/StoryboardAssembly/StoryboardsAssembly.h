//
//  StoryboardsAssembly.h
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

@class SystemInfrastructureAssembly;

@interface StoryboardsAssembly : TyphoonAssembly <RamblerInitialAssembly>
@property (nonatomic, strong, readonly) SystemInfrastructureAssembly *systemInfrastructureAssembly;
- (UIStoryboard *) mainStoryboard;
- (UIStoryboard *) splashPasswordStoryboard;
- (UIStoryboard *) walletStoryboard;
- (UIStoryboard *) launchStoryboard;
- (UIStoryboard *) confirmationStoryboard;
@end
