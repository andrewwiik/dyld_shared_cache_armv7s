/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SPContentResult, NSString;

@interface SPTopHitsCompoundResult : NSObject {

	SPContentResult* _content;
	unsigned _domain;
	NSString* _displayIdentifier;

}
-(void)dealloc;
-(id)displayIdentifier;
-(unsigned)domain;
-(id)content;
-(id)initWithContent:(id)arg1 domain:(unsigned)arg2 displayIdentifier:(id)arg3 ;
@end

