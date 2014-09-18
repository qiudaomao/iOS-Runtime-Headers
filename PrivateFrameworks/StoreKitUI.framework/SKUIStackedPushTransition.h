/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIStackedBar;

@interface SKUIStackedPushTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    SKUIStackedBar *_fromBar;
    double _split;
    SKUIStackedBar *_toBar;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) SKUIStackedBar * fromBar;
@property(readonly) unsigned long long hash;
@property double split;
@property(readonly) Class superclass;
@property(retain) SKUIStackedBar * toBar;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)fromBar;
- (void)setFromBar:(id)arg1;
- (void)setSplit:(double)arg1;
- (void)setToBar:(id)arg1;
- (double)split;
- (id)toBar;
- (double)transitionDuration:(id)arg1;

@end