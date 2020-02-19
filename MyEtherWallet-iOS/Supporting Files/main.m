//
//  main.m
//

@import RamblerAppDelegateProxy.RamblerAppDelegateProxy;
@import UIKit;

#import "TyphoonAppDelegate.h"

int main(int argc, char * argv[]) {
  @autoreleasepool {
    [[RamblerAppDelegateProxy injector] setDefaultAppDelegate:[TyphoonAppDelegate new]];
    return UIApplicationMain(argc, argv, nil, NSStringFromClass([RamblerAppDelegateProxy class]));
  }
}
