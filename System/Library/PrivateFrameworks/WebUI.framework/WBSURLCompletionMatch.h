/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WBSURLCompletionMatch : NSObject {

	long long _matchLocation;

}

@property (nonatomic,readonly) long long matchLocation;              //@synthesize matchLocation=_matchLocation - In the implementation block
+(long long)matchLocationForString:(id)arg1 inURLString:(id)arg2 ;
+(long long)matchLocationForString:(id)arg1 inTitle:(id)arg2 ;
-(id)title;
-(id)originalURLString;
-(id)userVisibleURLString;
-(long long)matchLocation;
-(id)initWithMatchLocation:(long long)arg1 ;
-(id)matchingStringWithUserTypedPrefix:(id)arg1 ;
@end

