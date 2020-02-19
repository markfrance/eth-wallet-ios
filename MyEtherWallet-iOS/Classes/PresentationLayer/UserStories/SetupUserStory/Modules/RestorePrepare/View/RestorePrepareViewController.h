//
//  RestorePrepareViewController.h
//
//
// 18/02/2019.
//  Copyright © 2019 MyEtherWallet, Inc.. All rights reserved.
//

@import UIKit;

#import "RestorePrepareViewInput.h"

@protocol RestorePrepareViewOutput;

@interface RestorePrepareViewController : UIViewController <RestorePrepareViewInput>

@property (nonatomic, strong) id<RestorePrepareViewOutput> output;

@end
