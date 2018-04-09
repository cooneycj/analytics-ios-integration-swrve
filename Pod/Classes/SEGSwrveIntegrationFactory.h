#import <Foundation/Foundation.h>
#import <Analytics/SEGIntegrationFactory.h>
#import "SwrveSDK.h"

@interface SEGSwrveIntegrationFactory : NSObject<SEGIntegrationFactory>

+ (instancetype)instanceWithAppId:(int)appId apiKey:(NSString *)apiKey swrveConfig:(SwrveConfig *)swrveConfig launchOptions:(NSDictionary *)launchOptions;

@end
