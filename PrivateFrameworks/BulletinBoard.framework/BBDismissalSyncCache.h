/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSDate, NSMutableDictionary;

@interface BBDismissalSyncCache : NSObject {
    NSMutableDictionary *_cache;
    NSDate *_timeToCheck;
}

@property(retain) NSMutableDictionary * cache;
@property(retain) NSDate * timeToCheck;

- (void)_checkCache;
- (bool)_isTimeToCheck;
- (id)cache;
- (void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 inSection:(id)arg3 forFeeds:(unsigned long long)arg4;
- (void)dealloc;
- (id)description;
- (id)findBulletinMatch:(id)arg1;
- (id)init;
- (void)removeBulletinMatch:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setTimeToCheck:(id)arg1;
- (id)timeToCheck;

@end