//
//  UIBezierPath+Morphing.h
//
//
// 19/07/2018.
//
//

@import UIKit;

@interface UIBezierPath (Morphing)
+ (instancetype) segmentedPathWithSize:(CGSize)size numberOfCorners:(NSUInteger)numberOfCorners numberOfMorphCorners:(NSUInteger)numberOfMorphCorners;
@end
