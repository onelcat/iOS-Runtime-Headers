/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDiscoverMoreViewController : UIViewController <SXVideoAccessoryItem> {
    SXAdvanceButton * _advanceButton;
    <SXDiscoverMoreConfigurationProviding> * _configurationProvider;
    SXNowPlayingButton * _discoverMoreButton;
    unsigned long long  _displayMode;
}

@property (nonatomic, readonly) SXAdvanceButton *advanceButton;
@property (nonatomic, readonly) <SXDiscoverMoreConfigurationProviding> *configurationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXNowPlayingButton *discoverMoreButton;
@property (nonatomic) unsigned long long displayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)advanceButton;
- (id)configurationProvider;
- (id)discoverMoreButton;
- (unsigned long long)displayMode;
- (id)initWithDiscoverMoreButton:(id)arg1 advanceButton:(id)arg2 configurationProvider:(id)arg3;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)willTransitionToDisplayMode:(unsigned long long)arg1 withTransitionCoordinator:(id)arg2;

@end