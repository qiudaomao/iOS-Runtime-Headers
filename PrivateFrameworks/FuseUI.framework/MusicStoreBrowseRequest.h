/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreBrowseRequest : MPStoreModelRequest {
    int  _domain;
    int  _filteringPolicy;
    NSURL * _loadAdditionalContentURL;
    MusicStoreBrowseResponse * _previousResponse;
    MusicStoreBrowseResponse * _previousRetrievedNestedResponse;
}

@property (nonatomic) int domain;
@property (nonatomic) int filteringPolicy;
@property (nonatomic, copy) NSURL *loadAdditionalContentURL;
@property (nonatomic, retain) MusicStoreBrowseResponse *previousResponse;
@property (nonatomic, retain) MusicStoreBrowseResponse *previousRetrievedNestedResponse;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (void).cxx_destruct;
- (void)configureWithParentSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)domain;
- (void)encodeWithCoder:(id)arg1;
- (int)filteringPolicy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)loadAdditionalContentURL;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)previousResponse;
- (id)previousRetrievedNestedResponse;
- (void)setDomain:(int)arg1;
- (void)setFilteringPolicy:(int)arg1;
- (void)setLoadAdditionalContentURL:(id)arg1;
- (void)setPreviousResponse:(id)arg1;
- (void)setPreviousRetrievedNestedResponse:(id)arg1;

@end