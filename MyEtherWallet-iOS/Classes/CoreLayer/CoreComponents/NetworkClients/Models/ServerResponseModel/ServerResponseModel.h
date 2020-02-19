//
//  ServerResponseModel.h
//
//
// 21/05/2018.
//
//

@import Foundation;

@interface ServerResponseModel : NSObject
@property (nonatomic, strong, readonly) NSHTTPURLResponse *response;
@property (nonatomic, strong, readonly) NSData *data;

- (instancetype)initWithResponse:(NSHTTPURLResponse *)response data:(NSData *)data;
@end
