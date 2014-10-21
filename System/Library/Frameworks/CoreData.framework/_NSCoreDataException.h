/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSException.h>

@class NSString;

@interface _NSCoreDataException : NSException {

	long long _code;
	NSString* _domain;

}
+(id)exceptionWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4 ;
-(id)initWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4 ;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(void)_setDomain:(id)arg1 ;
-(void)dealloc;
-(id)domain;
-(long long)code;
@end
