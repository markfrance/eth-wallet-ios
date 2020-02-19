//
//  MEWConnectMessage.m
//
//
// 31/08/2018.
//
//

#import "MEWConnectMessage.h"
#import "NSString+HexData.h"

static NSString *const kMEWconnectMessageText = @"text";
static NSString *const kMEWconnectMessageHash = @"hash";

@implementation MEWConnectMessage

+ (instancetype) messageWithJSONObject:(NSDictionary *)data {
  MEWConnectMessage *message = [[[self class] alloc] init];
  message->_message = data[kMEWconnectMessageText];
  message->_messageHash = [data[kMEWconnectMessageHash] parseHexData];
  return message;
}

@end
