/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/STStorage.h>

@class NSMutableData;

@interface STRootStorage : STStorage {

	RootStorageRef m_pCRoot;
	NSMutableData* m_StorageData;
	void* m_pvBuf;

}
-(id)getDocumentProperty:(int)arg1 withId:(int)arg2 PropType:(int*)arg3 throwOnError:(bool)arg4 ;
-(short)getShortDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2 ;
-(void)setDocumentProperty:(int)arg1 withId:(int)arg2 AndType:(int)arg3 AndValue:(void*)arg4 ;
-(id)getDocumentProperty:(int)arg1 withId:(int)arg2 PropType:(int*)arg3 ;
-(id)getStringDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2 ;
-(int)getLongDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2 ;
-(void)setStringDocumentPropertyWithId:(int)arg1 to:(id)arg2 givenPropStream:(int)arg3 ;
-(void)setLongDocumentPropertyWithId:(int)arg1 to:(int)arg2 givenPropStream:(int)arg3 ;
-(void)setShortDocumentPropertyWithId:(int)arg1 to:(short)arg2 givenPropStream:(int)arg3 ;
-(void)setBlobDocumentPropertyWithId:(int)arg1 to:(void*)arg2 givenPropStream:(int)arg3 ;
-(void)setDefaultDocumentProperties;
-(void)dealloc;
-(void*)resizeStorageBuffer:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 andMode:(int)arg2 ;
-(id)initWithMutableData:(id)arg1 andMode:(int)arg2 ;
@end

