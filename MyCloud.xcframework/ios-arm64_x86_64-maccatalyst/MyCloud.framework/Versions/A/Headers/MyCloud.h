//
//  MyCloud.h
//  MyCloud
//
//  Created by John Blaine on 9/26/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

FOUNDATION_EXPORT double MyCloudVersionNumber;
FOUNDATION_EXPORT const unsigned char MyCloudVersionString[];

NS_ASSUME_NONNULL_BEGIN

@interface MyCloud : UIView <WKScriptMessageHandler, WKNavigationDelegate>

- (void) writeWithFolder:(nullable NSString*)folder merge:(BOOL)m data:(nullable NSDictionary*)item completed:(void(^)(NSDictionary *dx))ds;
- (void) readWithFolder:(nullable NSString*)folder completed:(void(^)(NSDictionary *dx))ds;
- (void) watchWithFolder:(nullable NSString*)folder completed:(void(^)(NSDictionary *dx))ds;

@end

NS_ASSUME_NONNULL_END
