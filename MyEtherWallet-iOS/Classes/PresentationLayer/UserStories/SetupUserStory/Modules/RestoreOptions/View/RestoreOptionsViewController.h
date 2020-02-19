//
//  RestoreOptionsViewController.h
//
//
// 18/02/2019.
//  Copyright © 2019 MyEtherWallet, Inc.. All rights reserved.
//

@import UIKit;

#import "RestoreOptionsViewInput.h"

@class RestoreOptionsDataDisplayManager;

@protocol RestoreOptionsViewOutput;

@interface RestoreOptionsViewController : UIViewController <RestoreOptionsViewInput>
@property (nonatomic, strong) id<RestoreOptionsViewOutput> output;
@property (nonatomic, strong) RestoreOptionsDataDisplayManager *dataDisplayManager;
@end
