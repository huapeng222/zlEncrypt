//
//  ZSLEncrypt.m
//
//  Created by zhi-lian on 20/04/26.
//  Copyright (c) 2020年 zhi-lian. All rights reserved.
//

#import "ZLEncrypt.h"
#import "NSData+ZLEncryption.h"

@implementation ZLEncrypt


#pragma mark -- AES
+(NSString *)encryptAESData:(NSString*)string app_key:(NSString*)key
{
    //将nsstring转化为nsdata
    NSData *data = [string dataUsingEncoding:NSUTF8StringEncoding];
    //使用密码对nsdata进行加密
    NSData *encryptedData = [data AES256EncryptWithKey:key];
    
    //base64转码
    NSString *string64 = [encryptedData base64EncodedStringWithOptions:0];
    return string64;
}

+ (NSString *)decryptAESData:(NSString *)base64EncodedString password:(NSString *)password {
  NSData *encryptedData = [[NSData alloc] initWithBase64EncodedString:base64EncodedString options:0];
  NSData *decryData = [encryptedData AES256DecryptWithKey:password];
  return [[NSString alloc] initWithData:decryData encoding:NSUTF8StringEncoding];
}

@end
