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

- (instancetype)initWithProjId:(nullable NSString*)projId apiKey:(nullable NSString*)apiK appId:(nullable NSString*)appid msgSenderId:(nullable NSString*)msgSenderid;

- (void) write:(nullable NSString*)folder merge:(BOOL)m data:(nullable NSDictionary*)item completed:(void(^)(NSDictionary *dx))ds;
- (void) read:(nullable NSString*)folder completed:(void(^)(NSDictionary *dx))ds;
- (void) watch:(nullable NSString*)folder completed:(void(^)(NSDictionary *dx))ds;


@end

NS_ASSUME_NONNULL_END
