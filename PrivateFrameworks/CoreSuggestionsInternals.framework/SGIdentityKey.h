/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSString;

@interface SGIdentityKey : NSObject <NSCopying> {
    NSString *_content;
    unsigned long long _type;
}

@property(readonly) NSString * externalId;
@property(readonly) unsigned long long type;

+ (unsigned long long)identityTypeForKeyPart:(id)arg1;
+ (bool)isSupportedEntityType:(long long)arg1;
+ (id)keyForContactExternalId:(int)arg1;
+ (id)keyForEmail:(id)arg1;
+ (id)keyForNormalizedEmail:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (id)externalId;
- (bool)hasEmailAddress;
- (unsigned long long)hash;
- (id)identityKey;
- (id)initWithSerialized:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 content:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentityKey:(id)arg1;
- (id)serialize;
- (unsigned long long)type;

@end