/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem  {
    NSURL *_baseURL;
}

@property(retain) NSURL * baseURL;


- (void)setBaseURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)baseURL;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)write:(id)arg1;
- (id)payloadAsOriginalURL;
- (void)parserSuggestsBaseURL:(id)arg1;
- (id)payloadAsFullURL;

@end