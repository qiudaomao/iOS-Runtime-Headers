/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface NotificationRelay : NSObject {
    BOOL _refreshManagers;
}

@property (nonatomic) BOOL refreshManagers;

+ (id)sharedRelay;

- (id)init;
- (BOOL)refreshManagers;
- (void)refreshManagersForPreferences:(BOOL)arg1 localNotifications:(BOOL)arg2;
- (void)relayFrameworkNotification:(id)arg1;
- (void)setRefreshManagers:(BOOL)arg1;

@end