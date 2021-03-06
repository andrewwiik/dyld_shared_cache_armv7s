/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSMutableDictionary;

@interface OAXTableStyleCache : NSObject {

	NSString* mDefaultStyleId;
	NSMutableDictionary* mCache;

}
-(void)dealloc;
-(id)init;
-(xmlNode*)styleNodeForId:(id)arg1 ;
-(id)defaultStyleId;
-(void)setDefaultStyleId:(id)arg1 ;
-(void)setStyleNode:(xmlNode*)arg1 forId:(id)arg2 ;
-(xmlNode*)defaultStyleNode;
@end

