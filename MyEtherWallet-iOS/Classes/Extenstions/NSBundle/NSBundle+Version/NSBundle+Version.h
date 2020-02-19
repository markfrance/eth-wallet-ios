//
//  NSBundle+Version.h
//
//
// 26/06/2018.
//
//

@import Foundation;

@interface NSBundle (Version)
- (NSString *) fullApplicationVersion;
- (NSString *) applicationVersion;
- (NSString *) applicationBuild;
@end
