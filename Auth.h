//
// Auth.h - Authentication library
// (c) 20205 AnhvuAuth All rights reserved
// Version 1.0
//
// This software is provided under license and may not be
// copied, modified or distributed without permission.
//

#import <Foundation/Foundation.h>

/**
 * Lớp xác thực chính cung cấp giao diện đơn giản cho việc xác thực key
 * Được thiết kế để chống lại các công cụ như class-dump
 */
@interface Auth : NSObject

/**
 * Phương thức runtime động để gọi các API bị ẩn
 * @param selector Tên phương thức (được mã hóa)
 * @param arguments Mảng các tham số
 * @return Kết quả từ lệnh gọi
 */
+ (id)invokeProtectedMethod:(NSString *)selector withArguments:(NSArray *)arguments;

@end

// Use more advanced obfuscation techniques
// These values are further transformed at runtime before use
#define AUTH_SETUP_DONE(appId, completion) \
    [Auth invokeProtectedMethod:@"X9H7dTpQlM5zKbGvYwE3Ag==" withArguments:@[appId ?: @"", completion ?: ^{}]]

#define AUTH_LOGOUT() \
    [Auth invokeProtectedMethod:@"ZmR4eWxoYjEya3o=" withArguments:@[]]

// Utility functions for integration
#define AUTH_GET_KEY() \
    [Auth invokeProtectedMethod:@"cHpyZGZ2Z2wybXJ4c3c=" withArguments:@[]]

#define AUTH_GET_REMAINING_TIME() \
    [Auth invokeProtectedMethod:@"eDl3N3B5a2Y0dGJuNnJrMnA=" withArguments:@[]]

#define AUTH_GET_DEVICE_INFO() \
    [Auth invokeProtectedMethod:@"Ym52ZHR5Y3dyanA1eG0=" withArguments:@[]]

#define AUTH_GET_KEY_STATUS() \
    [Auth invokeProtectedMethod:@"cHlmNHhlM2tydG5i" withArguments:@[]]

#define AUTH_SHOW_SUCCESS(message) \
    [Auth invokeProtectedMethod:@"Y2t4ZHlwdG0zcnZ3eGU=" withArguments:@[message ?: @""]]

#define AUTH_SHOW_CENTER_NOTIFICATION(title, message, type) \
    [Auth invokeProtectedMethod:@"dnF5cDNrbXJueHQybXduYnB4NXJ3" withArguments:@[title ?: @"", message ?: @"", type ?: @"info"]]

#define AUTH_SHOW_TOP_NOTIFICATION(title, message, type) \
    [Auth invokeProtectedMethod:@"cGJ2NDUzcnQ2bW54dHZwdzNreDVydw==" withArguments:@[title ?: @"", message ?: @"", type ?: @"info"]]
