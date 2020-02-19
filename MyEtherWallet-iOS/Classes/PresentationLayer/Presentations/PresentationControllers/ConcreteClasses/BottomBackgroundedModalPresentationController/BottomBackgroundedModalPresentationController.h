//
//  BottomBackgroundedModalPresentationController.h
//

@import UIKit;

@protocol BlockchainNetworkService;
@protocol Ponsomizer;

@interface BottomBackgroundedModalPresentationController : UIPresentationController
@property (nonatomic, strong) id <BlockchainNetworkService> networkService;
@property (nonatomic, strong) id <Ponsomizer> ponsomizer;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) BOOL dimmed;
@end
