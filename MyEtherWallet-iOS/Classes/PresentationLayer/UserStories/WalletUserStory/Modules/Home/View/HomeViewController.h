//
//  HomeViewController.h
//
//
// 28/04/2018.
//
//

@import UIKit;

#import "HomeViewInput.h"

@protocol HomeViewOutput;

@class HomeTableViewAnimator;
@class HomeDataDisplayManager;

@interface HomeViewController : UIViewController <HomeViewInput>
@property (nonatomic, strong) id<HomeViewOutput> output;
@property (nonatomic, strong) HomeTableViewAnimator *tableViewAnimator;
@property (nonatomic, strong) HomeDataDisplayManager *dataDisplayManager;
@property (nonatomic, strong) UIViewPropertyAnimator *animator;
@end
