//
//  MEWConnectCommand.h
//

@import Foundation;

#import "MEWConnectCommandTypes.h"

@class MEWConnectTransaction;
@class MEWConnectMessage;
@class TokenPlainObject;

@interface MEWConnectCommand : NSObject
@property (nonatomic) MEWConnectCommandType type;
@property (nonatomic, strong) id data;
@property (readonly, getter=isTokenTransfer) BOOL transfer;
- (MEWConnectTransaction *) transaction;
- (MEWConnectMessage *) message;
@end
