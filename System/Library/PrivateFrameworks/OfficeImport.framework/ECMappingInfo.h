/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ECMappingInfo : NSObject {

	NSString* mSheetName;

}

@property (nonatomic,readonly) NSString * sheetName; 
@property (nonatomic,readonly) int rowOffset; 
@property (nonatomic,readonly) int columnOffset; 
+(id)mappingInfoWithSheetName:(id)arg1 ;
-(void)dealloc;
-(int)rowOffset;
-(id)sheetName;
-(id)initWithSheetName:(id)arg1 ;
-(int)columnOffset;
@end
