//
//  RestoreSafetyViewController.h
//
//
// 18/02/2019.
//  Copyright © 2019 MyEtherWallet, Inc.. All rights reserved.
//

@import UIKit;

#import "RestoreSafetyViewInput.h"

@protocol RestoreSafetyViewOutput;

@interface RestoreSafetyViewController : UIViewController <RestoreSafetyViewInput>

@property (nonatomic, strong) id<RestoreSafetyViewOutput> output;

@end
