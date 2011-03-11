/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, SUObjectPool, SUDelayedNavigationItem, SUWebView, SUStorePageProtocol, SUTableViewController, SUItem, SUStructuredPage, SSAuthenticationContext;

@interface SUWebViewController : SUViewController <SUWebViewDelegate> {
    SSAuthenticationContext *_authenticationContext;
    SUDelayedNavigationItem *_delayedNavigationItem;
    BOOL _hasEverAppeared;
    int _lastKnownOrientation;
    SUObjectPool *_objectPool;
    SUItem *_rootItem;
    int _scheduledOrientation;
    SUStorePageProtocol *_storePageProtocol;
    int _style;
    SUStructuredPage *_trackList;
    SUTableViewController *_trackListController;
    NSURL *_url;
    BOOL _viewIsReady;
    SUWebView *_webView;
}

@property(retain,readonly) SUWebView * webView;
@property BOOL viewIsReady;
@property int style;
@property(copy) SSAuthenticationContext * authenticationContext;

+ (void)_initializeSafeCategory;

- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (id)webView;
- (void)invalidate;
- (int)style;
- (void)dealloc;
- (void)setAuthenticationContext:(id)arg1;
- (void)webView:(id)arg1 documentViewDidSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)webView:(id)arg1 performPurchaseAnimationWithView:(id)arg2;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (void)setViewIsReady:(BOOL)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (id)newDataProviderToProcessProtocol;
- (id)newViewControllerForTrackList:(id)arg1;
- (void)applicationDidEnterBackground;
- (id)navigationItemForScriptInterface;
- (void)setStorePageProtocol:(id)arg1;
- (void)webView:(id)arg1 foundPropertyList:(id)arg2 ofType:(int)arg3;
- (void)_addPlaceholderBackgroundView;
- (void)_applySavedScrollOffsetIfPossible;
- (void)_applyScriptProperties:(id)arg1;
- (void)_handleProtocol:(id)arg1;
- (void)_handleRootObject:(id)arg1;
- (void)_handleTrackList:(id)arg1;
- (id)_placeholderBackgroundView;
- (void)_reloadObjectPool;
- (void)_reloadPlaceholderBackgroundView;
- (void)_reloadUI;
- (void)_removePlaceholderBackgroundView;
- (void)_selectTrackListItemWithIdentifier:(id)arg1;
- (void)_sendOrientationWillChangeToInterfaceOrientation:(int)arg1;
- (void)_setLastKnownOrientation:(int)arg1;
- (void)_setTrackListController:(id)arg1;
- (void)_updateTrackListRootItem;
- (void)applicationWillEnterForeground;
- (id)copyDefaultScriptProperties;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)storePageProtocol;
- (BOOL)viewIsReady;
- (void)parentViewControllerHierarchyDidChange;
- (id)copyScriptProperties;
- (id)newRotationController;
- (void)setScriptProperties:(id)arg1;
- (void)storePageProtocolDidChange;
- (void)operationFinished:(id)arg1;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (id)parentViewControllerForWebView:(id)arg1;
- (void)webView:(id)arg1 receivedEventOfType:(int)arg2 userInfo:(id)arg3;
- (void)webView:(id)arg1 willInjectScriptObject:(id)arg2;
- (id)authenticationContext;
- (id)copyArchivableContext;
- (unsigned long long)accessibilityTraits;

@end