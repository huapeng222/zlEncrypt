//
//  ZLEncrypt.h
//
//  Created by zhi-lian on 20/04/26.
//  Copyright (c) 2020年 zhi-lian. All rights reserved.
//


#import <Foundation/Foundation.h>


/// 加解密aes, 默认AES 256 ,CBC, iv默认为32个0
@interface ZLEncrypt : NSObject

#pragma mark - AES

/// 加密字符串
/// @param string 带加密字符串
/// @param password 密码
+ (NSString *)encryptAESData:(NSString*)string app_key:(NSString*)password;


/// 解密aes
/// @param base64EncodedString base64 密文
/// @param password 密码
+ (NSString *)decryptAESData:(NSString *)base64EncodedString password:(NSString *)password;
@end
