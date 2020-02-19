//
//  CacheTrackerImplementation.h
//
//
// 22/05/2018.
//
//

@import Foundation;

#import "CacheTracker.h"

@protocol Ponsomizer;

@interface CacheTrackerImplementation : NSObject <CacheTracker>
@property (nonatomic, strong) id <Ponsomizer> ponsomizer;
@end
