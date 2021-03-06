/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject {

	NSMutableDictionary* _dict;
	PKPaper* paper;

}

@property (nonatomic,retain) PKPaper * paper; 
@property (nonatomic,retain) NSMutableDictionary * dict;              //@synthesize dict=_dict - In the implementation block
+(id)photo;
+(id)default;
+(id)printSettingsForPrinter:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)paper;
-(void)setPaper:(id)arg1 ;
-(void)setDict:(id)arg1 ;
-(id)settingsDict;
-(id)dict;
@end

