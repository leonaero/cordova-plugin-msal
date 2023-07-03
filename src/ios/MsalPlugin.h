#import <Cordova/CDVPlugin.h>
#import <MSAL/MSAL.h>

@interface MsalPlugin : CDVPlugin

@property MSALPublicClientApplicationConfig *config;
@property MSALPublicClientApplication *application;
@property NSArray<NSString *> *scopes;
@property NSString *clientId;
@property NSString *nonce;
@property NSString *tenantId;
@property NSString *accountMode;
@property BOOL isInit;

- (void)msalInit:(CDVInvokedUrlCommand*)command;
- (void)startLogger:(CDVInvokedUrlCommand*)command;
- (NSDictionary *)getAccountObject:(MSALAccount *)account;
- (NSDictionary *)getAuthResult:(MSALResult *)result;
- (void)getAccounts:(CDVInvokedUrlCommand*)command;
- (void)signInSilent:(CDVInvokedUrlCommand*)command;
- (void)signInInteractive:(CDVInvokedUrlCommand*)command;
- (void)signOut:(CDVInvokedUrlCommand*)command;

@end
