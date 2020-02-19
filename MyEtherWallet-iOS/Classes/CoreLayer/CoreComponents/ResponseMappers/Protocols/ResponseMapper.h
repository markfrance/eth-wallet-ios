//
//  ResponseMapper.h
//
//
// 03/05/2018.
//
//

@import Foundation;

@protocol ResponseMapper <NSObject>
- (id) mapServerResponse:(id)response withMappingContext:(NSDictionary *)context error:(NSError **)error;
@optional
- (id) serializeResponse:(id)response withMappingContext:(NSDictionary *)context error:(NSError **)error;
@end
