//
//  NSData+ZLEncryption.h
//  zlEncrypt
//
//  Created by hua on 2020/4/23.
//

#import <Foundation/Foundation.h>

@interface NSData (ZLEncryption)

- (NSData *)AES128EncryptWithKey:(NSString *)key;   //加密
- (NSData *)AES128DecryptWithKey:(NSString *)key;   //解密

- (NSData *)AES256EncryptWithKey:(NSString *)key;   //加密
- (NSData *)AES256DecryptWithKey:(NSString *)key;   //解密
@end
