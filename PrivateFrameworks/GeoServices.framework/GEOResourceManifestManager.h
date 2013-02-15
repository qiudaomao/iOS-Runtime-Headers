/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEOResourceManifestServerProxy>, GEOActiveTileGroup, GEOLocalizationRegionsInfo, NSDictionary, NSHashTable, NSLock, NSMutableArray;

@interface GEOResourceManifestManager : NSObject <GEOResourceManifestServerProxyDelegate> {
    GEOActiveTileGroup *_activeTileGroup;
    NSLock *_activeTileGroupLock;
    GEOLocalizationRegionsInfo *_localizationRegionsInfo;
    NSMutableArray *_pendingRegionalResourceLoads;
    NSLock *_pendingRegionalResourceLoadsLock;
    NSDictionary *_resourceNamesToPaths;
    <GEOResourceManifestServerProxy> *_serverProxy;
    NSHashTable *_serverProxyObservers;
}

@property(readonly) GEOActiveTileGroup * activeTileGroup;
@property(readonly) BOOL hasActiveTileGroup;
@property(readonly) <GEOResourceManifestServerProxy> * serverProxy;

+ (void)disableServerConnection;
+ (void)setCallerWillStartServer;
+ (void)setHiDPI:(BOOL)arg1;
+ (id)sharedManager;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;

- (id)_activeTileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)_buildResourceNamesToPaths;
- (id)_listenerForTileKeys:(id)arg1 acquireLock:(BOOL)arg2;
- (void)_localeChanged:(id)arg1;
- (id)activeTileGroup;
- (unsigned int)activeTileGroupIdentifier;
- (void)addServerProxyObserver:(id)arg1;
- (id)allResourceNames;
- (id)authToken;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)cancelRegionalResourcesRequest:(id)arg1;
- (void)closeServerConnection;
- (void)dealloc;
- (id)detailedDescription;
- (void)forceUpdate;
- (void)getResourceManifestWithHandler:(id)arg1;
- (BOOL)hasActiveTileGroup;
- (BOOL)hasResourceManifest;
- (id)init;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)loadRegionalResourcesForKeys:(id)arg1 allowNetwork:(BOOL)arg2 progress:(id)arg3 finished:(id)arg4 error:(id)arg5;
- (void)loadRegionalResourcesForKeys:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (id)localizationURLStringIfNecessaryForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (int)mapMatchingTileSetStyle;
- (unsigned int)mapMatchingZoomLevel;
- (id)multiTileURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 useStatusCodes:(BOOL*)arg2;
- (void)openServerConnection;
- (id)pathForResourceWithName:(id)arg1;
- (void)refreshActiveTileGroup;
- (void)removeServerProxyObserver:(id)arg1;
- (void)resetActiveTileGroup;
- (id)serverProxy;
- (oneway void)serverProxyDidChangeActiveTileGroup:(id)arg1 finishedCallback:(id)arg2;
- (oneway void)serverProxyDidFinishLoadingForList:(id)arg1;
- (oneway void)serverProxyDidReceiveError:(id)arg1 forList:(id)arg2;
- (oneway void)serverProxyDidReceiveResourceNames:(id)arg1 attributions:(id)arg2 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg3 fromList:(id)arg4;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1;
- (BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

@end