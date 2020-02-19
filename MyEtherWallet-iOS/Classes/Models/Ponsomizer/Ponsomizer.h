//
//  Ponsomizer.h
//

@import Foundation;

@protocol Ponsomizer <NSObject>
- (id)convertObject:(id)object;
- (id)convertObject:(id)object ignoringProperties:(NSArray *)properties;
@end
