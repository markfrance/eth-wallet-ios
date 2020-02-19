//
//  NSBundle+Version.m
//
//
// 26/06/2018.
//
//

#import "NSBundle+Version.h"

@implementation NSBundle (Version)

- (NSString *) fullApplicationVersion {
  NSString *version = [self objectForInfoDictionaryKey:@"CFBundleShortVersionString"];
  NSString *build = [self objectForInfoDictionaryKey:(NSString*)kCFBundleVersionKey];
  return [NSString stringWithFormat:@"%@ (%@)", version, build];
}

- (NSString *) applicationVersion {
  return [self objectForInfoDictionaryKey:@"CFBundleShortVersionString"];
}

- (NSString *) applicationBuild {
  return [self objectForInfoDictionaryKey:(NSString*)kCFBundleVersionKey];
}

@end
