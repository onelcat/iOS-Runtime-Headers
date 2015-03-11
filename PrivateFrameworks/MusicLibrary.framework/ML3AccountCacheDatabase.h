/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3DatabaseConnection;

@interface ML3AccountCacheDatabase : NSObject {
    ML3DatabaseConnection *_databaseConnection;
}

- (void).cxx_destruct;
- (bool)_clearCacheDatabase;
- (bool)_closeDatabase;
- (id)_databasePath;
- (bool)_internalSetAppleID:(id)arg1 forDSID:(unsigned long long)arg2;
- (bool)_openDatabase;
- (bool)_openDatabaseIsRetry:(bool)arg1;
- (id)appleIDForDSID:(unsigned long long)arg1;
- (id)init;
- (bool)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;

@end