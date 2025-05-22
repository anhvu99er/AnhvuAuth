<<<<<<< HEAD
# Auth Library

Thư viện xác thực key cho ứng dụng iOS

## Cài đặt

1. Thêm `Auth.a` và `Auth.h` vào dự án của bạn
2. Thêm các framework sau vào dự án:
   - Foundation
   - UIKit
   - CoreTelephony (required for iOS 14.0+)

3. Thêm `Auth.a` và `Auth.h` vào dự án của bạn

## Sử dụng

### Khởi tạo

```objective-c
#import "Auth/Auth.h"

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Khởi tạo với callback khi hoàn thành
    AUTH_SETUP_DONE(@"yourAppId", ^{ 
        // Thay thế bằng app ID của bạn
        NSLog(@"Xác thực thành công!");
        // Thêm các hàm khởi tạo menu hoặc chức năng bạn muốn ở đây
    });
    
    return YES;
}
```

### Lấy thông tin

```objective-c
// Lấy key đã lưu
NSString *key = AUTH_GET_KEY();

// Lấy thông tin thời hạn còn lại
NSString *timeRemaining = AUTH_GET_REMAINING_TIME();
NSLog(@"Thời hạn còn lại: %@", timeRemaining);

// Lấy thông tin thiết bị
NSString *deviceInfo = AUTH_GET_DEVICE_INFO();
NSLog(@"Thiết bị: %@", deviceInfo);

// Lấy trạng thái key (active, expired, banned, free_mode)
NSString *status = AUTH_GET_KEY_STATUS();
NSLog(@"Trạng thái: %@", status);
```

### Hiển thị thông báo

```objective-c
// Hiển thị thông báo thành công đơn giản
AUTH_SHOW_SUCCESS(@"Thao tác thành công!");

// Hiển thị thông báo ở giữa màn hình
AUTH_SHOW_CENTER_NOTIFICATION(@"Tiêu đề", @"Nội dung thông báo", @"success");
// Loại thông báo: "success", "error", "warning", "info"

// Hiển thị thông báo ở trên cùng màn hình
AUTH_SHOW_TOP_NOTIFICATION(@"Cảnh báo", @"Bạn sắp hết hạn sử dụng!", @"warning");
```

### Đăng xuất

```objective-c
AUTH_LOGOUT();
```

## Yêu cầu

- iOS 9.0 trở lên
- Xcode 11.0 trở lên

## Liên hệ

Vui lòng liên hệ t.me/anhvu99er để được hỗ trợ thêm.
=======
# AnhvuAuth
create authentication function for your tweak
>>>>>>> 705da441dfba73c33ec12eb1a623238ded5ee3fc
