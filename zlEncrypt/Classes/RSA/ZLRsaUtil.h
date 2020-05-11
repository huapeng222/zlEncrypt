//
//  ZLRsaUtil.h
//  EncryptDemo
//
//  Created by zhi-lian on 20/4/26.
//  Copyright (c) 2020年 Lordar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZLRsaUtil : NSObject

+ (NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;
+ (NSData *)encryptData:(NSData *)data publicKey:(NSString *)pubKey;
+ (NSString *)decryptString:(NSString *)str publicKey:(NSString *)pubKey;
+ (NSData *)decryptData:(NSData *)data publicKey:(NSString *)pubKey;

@end
