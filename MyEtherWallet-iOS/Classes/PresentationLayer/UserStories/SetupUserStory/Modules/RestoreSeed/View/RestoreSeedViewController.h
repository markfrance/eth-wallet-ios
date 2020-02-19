//
//  RestoreSeedViewController.h
//
//
// 04/11/2018.
//  Copyright © 2018 MyEtherWallet, Inc.. All rights reserved.
//

@import UIKit;

#import "RestoreSeedViewInput.h"

@protocol RestoreSeedViewOutput;

@interface RestoreSeedViewController : UIViewController <RestoreSeedViewInput>

@property (nonatomic, strong) id<RestoreSeedViewOutput> output;

@end
