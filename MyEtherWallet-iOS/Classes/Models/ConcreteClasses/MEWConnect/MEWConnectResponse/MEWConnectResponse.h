//
//  MEWConnectResponse.h
//

@import Foundation;

@class MEWConnectCommand;

#import "MEWConnectCommandTypes.h"

@interface MEWConnectResponse : NSObject
@property (nonatomic) MEWConnectCommandType type;
@property (nonatomic, strong) id data;
+ (instancetype) responseForCommand:(MEWConnectCommand *)command data:(id)data;
@end
