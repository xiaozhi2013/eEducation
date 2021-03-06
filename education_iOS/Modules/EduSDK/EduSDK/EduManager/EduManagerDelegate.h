//
//  EduManagerDelegate.h
//  EduSDK
//
//  Created by SRS on 2020/8/28.
//

#import <Foundation/Foundation.h>
#import "EduClassroom.h"
#import "EduTextMessage.h"
#import "EduActionMessage.h"

NS_ASSUME_NONNULL_BEGIN

@protocol EduManagerDelegate <NSObject>

@optional
// message
- (void)userChatMessageReceived:(EduTextMessage*)textMessage;
- (void)userMessageReceived:(EduTextMessage*)textMessage;

@end

NS_ASSUME_NONNULL_END
