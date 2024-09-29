//
//  MyCloud.h
//  MyCloud
//
//  Created by John Blaine on 9/26/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MyCloud : UIView <WKScriptMessageHandler, WKNavigationDelegate>

- (instancetype)initWithId:(nullable NSObject*)projId;

- (void) write:(nullable NSString*)folder merge:(BOOL)m data:(nullable NSDictionary*)item completed:(void(^)(NSDictionary *dx))ds;
- (void) read:(nullable NSString*)folder completed:(void(^)(NSDictionary *dx))ds;
- (void) monitor:(nullable NSString*)folder completed:(void(^)(NSDictionary *dx))ds;


@end

NS_ASSUME_NONNULL_END
