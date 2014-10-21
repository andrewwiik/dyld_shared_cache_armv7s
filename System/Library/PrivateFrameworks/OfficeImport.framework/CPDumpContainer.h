/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CPDumpType.h>

@class NSString, CPDumpType;

@interface CPDumpContainer : CPDumpType {

	int mByteSize;
	int mByteSizeFieldType;
	NSString* mByteSizeFieldName;
	int mByteSizeCorrection;
	CPDumpType* mElementType;

}
-(void)dealloc;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithByteSize:(int)arg1 byteSizeFieldType:(int)arg2 byteSizeFieldName:(id)arg3 byteSizeCorrection:(int)arg4 elementType:(id)arg5 ;
-(id)initWithByteSize:(int)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldType:(int)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldType:(int)arg1 byteSizeCorrection:(int)arg2 elementType:(id)arg3 ;
-(id)initWithByteSizeFieldName:(id)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldName:(id)arg1 byteSizeCorrection:(int)arg2 elementType:(id)arg3 ;
@end
