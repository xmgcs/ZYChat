//
//  ZYUserCenter.h
//  ZYChat
//
//  Created by ZYVincent on 15/11/6.
//  Copyright (c) 2015年 ZYProSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZYUserModel.h"
#import "GJGCMessageExtendUserModel.h"

#define ZYUserCenterLoginSuccessNoti @"ZYUserCenterLoginSuccessNoti"

#define ZYUserCenterLoginEaseMobSuccessNoti @"ZYUserCenterLoginEaseMobSuccessNoti"

typedef void (^ZYUserCenterRequestSuccessBlock)(NSString *message);

typedef void (^ZYUserCenterRequestFaildBlock)(NSError *error);

@interface ZYUserCenter : NSObject

+ (ZYUserCenter *)shareCenter;

- (void)registUserWithMobile:(NSString *)mobile
                withPassword:(NSString *)password
                 withSuccess:(ZYUserCenterRequestSuccessBlock)success
                   withFaild:(ZYUserCenterRequestFaildBlock)faild;

- (void)LoginUserWithMobile:(NSString *)mobile
                withPassword:(NSString *)password
                 withSuccess:(ZYUserCenterRequestSuccessBlock)success
                   withFaild:(ZYUserCenterRequestFaildBlock)faild;

- (GJGCMessageExtendUserModel *)extendUserInfo;

- (BOOL)isLogin;

- (ZYUserModel *)currentLoginUser;

- (void)createUserTable;

- (void)autoLogin;

- (void)createUser;

- (void)updateUsers;

- (void)deleteUser;

- (void)queryUser;

@end
