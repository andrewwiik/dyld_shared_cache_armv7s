/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@interface VMUClassInfoMap : NSObject <NSCoding> {

	void* _cppMap;

}
+(void)initialize;
+(id)infoMap;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(id)classInfoForAddress:(unsigned long long)arg1 ;
-(void)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2 ;
-(void)enumerateWithBlock:(/*^block*/ id)arg1 ;
-(void)addClassInfosFromMap:(id)arg1 ;
@end

