/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKLeaderboardViewControllerPrivateDelegate>, GKBackgroundView, GKGame, GKLeaderboard, GKPlayer, NSMutableDictionary, UISegmentedControl, UITableView, UIView;

@interface GKLeaderboardViewControllerPrivate : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    struct { 
        unsigned int allowFriendSelection : 1; 
        unsigned int playButtonVisible : 1; 
        unsigned int usePlayerBackground : 1; 
        unsigned int loading : 1; 
        unsigned int translucentNavBar : 1; 
        unsigned int reserved : 26; 
    GKBackgroundView *_backgroundView;
    <GKLeaderboardViewControllerPrivateDelegate> *_delegate;
    } _flags;
    GKGame *_game;
    NSMutableDictionary *_icons;
    UISegmentedControl *_landscapeTimeScopeControl;
    GKLeaderboard *_leaderboards[3][2];
    GKPlayer *_player;
    UISegmentedControl *_portraitTimeScopeControl;
    NSInteger _selectedTimeScope;
    UITableView *_tableView;
    UIView *_timeScopeContainer;
}

@property <GKLeaderboardViewControllerPrivateDelegate> *delegate;
@property(retain) GKGame *game;
@property(retain) GKPlayer *player;
@property BOOL allowsFriendSelection;
@property(getter=isPlayButtonVisible) BOOL playButtonVisible;
@property BOOL usePlayerBackground;

- (void)_loadScores;
- (void)_timeFilterChanged:(id)arg1;
- (BOOL)allowsFriendSelection;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)game;
- (id)initWithGame:(id)arg1 timeScope:(NSInteger)arg2 playerScope:(NSInteger)arg3;
- (id)initWithTimeScope:(NSInteger)arg1 playerScope:(NSInteger)arg2;
- (BOOL)isPlayButtonVisible;
- (void)layoutSubviewsForOrientation:(NSInteger)arg1;
- (id)leaderboardForSection:(NSUInteger)arg1;
- (id)leaderboardForTimeScope:(NSInteger)arg1 playerScope:(NSInteger)arg2;
- (BOOL)leaderboardHasLocalPlayer:(id)arg1;
- (void)loadView;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)playTapped;
- (id)player;
- (void)setAllowsFriendSelection:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setPlayButtonVisible:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setUsePlayerBackground:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)title;
- (BOOL)usePlayerBackground;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end