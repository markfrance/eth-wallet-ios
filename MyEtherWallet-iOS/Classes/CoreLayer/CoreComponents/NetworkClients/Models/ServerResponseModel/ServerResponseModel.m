//
//  ServerResponseModel.m
//
//
// 21/05/2018.
//
//

#import "ServerResponseModel.h"

@interface ServerResponseModel ()
@property (nonatomic, strong, readwrite) NSHTTPURLResponse *response;
@property (nonatomic, strong, readwrite) NSData *data;
@end

@implementation ServerResponseModel

- (instancetype)initWithResponse:(NSHTTPURLResponse *)response
                            data:(NSData *)data {
  self = [super init];
  if (self) {
    _response = response;
    _data = data;
  }
  return self;
}

@end
