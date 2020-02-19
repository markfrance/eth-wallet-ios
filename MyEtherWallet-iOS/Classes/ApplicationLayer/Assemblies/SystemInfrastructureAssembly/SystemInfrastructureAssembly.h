//
//  SystemInfrastructureAssembly.h
//

@import UIKit;
@import Typhoon.TyphoonAssembly;
@import RamblerTyphoonUtils.AssemblyCollector;

@interface SystemInfrastructureAssembly : TyphoonAssembly <RamblerInitialAssembly>
- (NSUserDefaults *) userDefaults;
- (NSHTTPCookieStorage *) httpCookieStorage;
- (NSNotificationCenter *) notificationCenter;
- (UIApplication *) application;
- (NSFileManager *) fileManager;
- (UIWindow *) mainWindow;
- (NSBundle *) mainBundle;
@end
