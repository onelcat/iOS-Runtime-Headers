/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString, NSLock;

@interface _ReachabilityRequest : NSObject  {
    NSLock *_lock;
    NSString *_hostname;
    struct __SCNetworkReachability { } *_reachability;
    unsigned int _flags;
    struct __CFDictionary { } *_observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}

@property NSString * hostname;


- (void)setHostname:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)hostname;
- (id)initWithHostname:(id)arg1;
- (void)reachabilityChangedWithFlags:(unsigned int)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (BOOL)hasObservers;

@end