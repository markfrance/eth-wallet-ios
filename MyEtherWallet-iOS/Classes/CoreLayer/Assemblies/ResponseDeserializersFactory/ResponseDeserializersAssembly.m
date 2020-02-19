//
//  ResponseDeserializersAssembly.m
//
//
// 21/05/2018.
//
//

#import "ResponseDeserializersAssembly.h"

#import "JSONResponseDeserializer.h"

@implementation ResponseDeserializersAssembly

#pragma mark - Option matcher

- (id<ResponseDeserializer>)deserializerWithType:(NSNumber *)type {
  return [TyphoonDefinition withOption:type matcher:^(TyphoonOptionMatcher *matcher) {
    [matcher caseEqual:@(ResponseDeserializationJSONType)
                   use:[self jsonResponseDeserializer]];
  }];
}

#pragma mark - Concrete definitions

- (id<ResponseDeserializer>)jsonResponseDeserializer {
  return [TyphoonDefinition withClass:[JSONResponseDeserializer class]];
}

@end

