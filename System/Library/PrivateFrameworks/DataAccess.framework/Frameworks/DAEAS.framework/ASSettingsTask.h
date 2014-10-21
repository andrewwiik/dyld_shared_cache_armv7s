/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray, NSDictionary;

@interface ASSettingsTask : ASTask {

	NSArray* _getters;
	NSDictionary* _setters;

}

@property (retain) NSArray * getters;                   //@synthesize getters=_getters - In the implementation block
@property (retain) NSDictionary * setters;              //@synthesize setters=_setters - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(bool)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(bool)processContext:(id)arg1 ;
-(void)setSetters:(id)arg1 ;
-(void)setGetters:(id)arg1 ;
-(id)getters;
-(id)setters;
@end

