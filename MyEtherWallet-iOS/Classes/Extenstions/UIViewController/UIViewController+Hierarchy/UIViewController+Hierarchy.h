//
//  UIViewController+Hierarchy.h
//
//
// 07/11/2018.
//
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (Hierarchy)
- (__kindof UIViewController *) obtainTopController;
- (BOOL) isExistInHierarchy:(Class)viewControllerClass;
@end

NS_ASSUME_NONNULL_END
