/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable;

@interface SBUIKeyboardEnablementManager : NSObject {

	NSHashTable* _disabledContexts;
	bool _disabled;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)disableAutomaticAppearanceForContext:(id)arg1 ;
-(void)enableAutomaticAppearanceForContext:(id)arg1 ;
@end

