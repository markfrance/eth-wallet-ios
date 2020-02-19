//
//  OperationSchedulerImplementation.m
//
//
// 20/05/2018.
//
//

#import "OperationSchedulerImplementation.h"

static NSString *const kOperationQueueName = @"com.myetherwallet.mewconnect.OperationQueue";

@interface OperationSchedulerImplementation ()
@property (nonatomic, strong) NSOperationQueue *queue;
@end

@implementation OperationSchedulerImplementation

#pragma mark - Initialization

- (instancetype)init {
  self = [super init];
  if (self) {
    _queue = [[NSOperationQueue alloc] init];
    _queue.name = kOperationQueueName;
    _queue.maxConcurrentOperationCount = NSOperationQueueDefaultMaxConcurrentOperationCount;
  }
  return self;
}

#pragma mark - OperationScheduler

- (void)addOperation:(NSOperation *)operation {
  [self.queue addOperation:operation];
}

- (void) cancelAllOperations {
  [self.queue cancelAllOperations];
}

@end
