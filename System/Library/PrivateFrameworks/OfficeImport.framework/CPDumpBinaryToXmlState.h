/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface CPDumpBinaryToXmlState : NSObject {

	NSString* mCurrentFieldName;
	NSMutableDictionary* mFieldNameToValueMap;

}
-(void)dealloc;
-(id)init;
-(void)setCurrentField:(id)arg1 ;
-(void)cacheValueforCurrentField:(id)arg1 ;
-(id)valueForCurrentField;
-(id)valueForField:(id)arg1 ;
@end
