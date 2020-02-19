//
//  MEWConnectResponse.m
//

#import "MEWConnectResponse.h"
#import "MEWConnectCommand.h"

static NSString *const kMEWConnectResponseAddress = @"address";

@implementation MEWConnectResponse

+ (instancetype) responseForCommand:(MEWConnectCommand *)command data:(id)data {
  MEWConnectResponse *response = [[[self class] alloc] init];
  response.type = command.type;
  switch (command.type) {
    case MEWConnectCommandTypeGetAddress: {
      response.data = @{kMEWConnectResponseAddress: data};
      break;
    }
    case MEWConnectCommandTypeSignMessage: {
      response.data = data;
      break;
    }
    case MEWConnectCommandTypeSignTransaction: {
      response.data = data;
      break;
    }
      
    default:
      break;
  }
  return response;
}

@end
