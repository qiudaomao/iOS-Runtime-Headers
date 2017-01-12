/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGameControllerDaemonProxy : NSObject <GameControllerDaemonListener> {
    NSXPCConnection * _connection;
    MRGameControllerDelayedEvents * _delayedEvents;
    <GameControllerDaemon> * _remote;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)defaultGameControllerDaemonProxy;

- (BOOL)_delayEvent:(unsigned int)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4;
- (void)_openConnection;
- (void)addController:(id)arg1;
- (id)addEmulatedControllerWithProperties:(void*)arg1;
- (void)controllerID:(unsigned int)arg1 setArrayValueX:(float)arg2 y:(float)arg3 z:(float)arg4 forElement:(int)arg5;
- (void)controllerID:(unsigned int)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5;
- (void)controllerID:(unsigned int)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerID:(unsigned int)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4;
- (void)controllerWithUDID:(unsigned int)arg1 setData:(id)arg2;
- (void)controllerWithUDID:(unsigned int)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)dealloc;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4;
- (void)microControllerWithUDID:(unsigned int)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5;
- (void)removeController:(id)arg1;
- (void)removeEmulatedController:(id)arg1;
- (void)replyConnectedHosts:(id)arg1;

@end