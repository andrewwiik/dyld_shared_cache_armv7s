/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {

	WebUserContentURLPatternPrivate* _private;

}
-(void)dealloc;
-(id)scheme;
-(bool)isValid;
-(id)host;
-(id)initWithPatternString:(id)arg1 ;
-(bool)matchesSubdomains;
-(bool)matchesURL:(id)arg1 ;
@end
