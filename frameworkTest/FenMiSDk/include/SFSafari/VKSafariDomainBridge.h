//
//  VKSafariDomainBridge.h
//  VKSafariDomainBridge
//
//  Created by Awhisper on 16/5/11.
//  Copyright © 2016年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
//渠道
//#define SAFARI_RUL @"http://test.appshare.91ylian.com/share_download/check_token"
//自己
//#define SAFARI_PATH @"http://test.appshare.91ylian.com/download/check_token"
#define SAFARI_PATH @"http://test.appshare.91ylian.com/index2"

#define SAFARI_KEY @"sfsafari"
#define CHANEL_KEY @"sfsafari_Return_Success"

typedef void(^VKSafariReturn)(BOOL success,NSString *info); //openURL

static NSString * VKSafariInfoReceivedNotification = @"VKSafariInfoReceivedNotification";

@interface VKSafariDomainBridge : NSObject

@property (nonatomic,readonly) NSURL *safariUrl;

@property (nonatomic,strong) NSString *safariKey;

@property (nonatomic,assign) float timeOut;

+ (void)VKSetupSafariBridge;
+ (instancetype)VKSingleton;
/**
 *  get cookie with openURL
 *
 *  @param rtBlock <#rtBlock description#>
 */

-(void)VKGetSafariInfo:(VKSafariReturn)rtBlock;

-(NSString*)deviceUUID;

@end
