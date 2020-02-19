//
//  ApplicationHelperAssembly.h
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

@protocol NavigationControllerFactory;
@class StoryboardsAssembly;

@interface ApplicationHelperAssembly : TyphoonAssembly <RamblerInitialAssembly>
@property (nonatomic, strong, readonly) StoryboardsAssembly *storyboardAssembly;
- (id<NavigationControllerFactory>)navigationControllerFactory;
@end
