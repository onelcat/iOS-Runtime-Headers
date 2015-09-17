/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchServerEnvironmentOperationResult : CKOperationResult <NSSecureCoding> {
    int _environment;
}

@property (nonatomic) int environment;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (int)environment;
- (id)initWithCoder:(id)arg1;
- (void)setEnvironment:(int)arg1;

@end