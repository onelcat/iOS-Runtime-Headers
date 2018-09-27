/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDCachedSourceOrder : NSObject {
    bool  _isDefaultSourceOrder;
    NSArray * _sourceIDs;
    NSArray * _sources;
    NSDictionary * _sourcesByID;
    bool  _userOrdered;
}

@property (nonatomic, readonly) bool isDefaultSourceOrder;
@property (nonatomic, readonly, copy) NSArray *sourceIDs;
@property (nonatomic, readonly, copy) NSArray *sources;
@property (nonatomic, readonly, copy) NSDictionary *sourcesByID;
@property (nonatomic, readonly) bool userOrdered;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSources:(id)arg1 sourceIDs:(id)arg2 sourcesByID:(id)arg3 userOrdered:(bool)arg4 isDefaultOrder:(bool)arg5;
- (bool)isDefaultSourceOrder;
- (bool)isEqual:(id)arg1;
- (id)sourceIDs;
- (id)sources;
- (id)sourcesByID;
- (bool)userOrdered;

@end