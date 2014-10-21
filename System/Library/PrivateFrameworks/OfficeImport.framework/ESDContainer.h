/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

@interface ESDContainer : ESDObject {

	NSMutableArray* mChildren;

}
+(void)pbReadChildrenOfObject:(EshObject*)arg1 toArray:(id)arg2 state:(id)arg3 ;
+(void)readChildrenOfObject:(EshObject*)arg1 reader:(OcReaderRef)arg2 toArray:(id)arg3 ;
-(id)addPptContainerChildOfType:(unsigned short)arg1 ;
-(EshObject*)addPptAtomChildOfType:(unsigned short)arg1 ;
-(id)addPptEshClientChildOfType:(unsigned short)arg1 ;
-(void)addCStringWithNSString:(id)arg1 instance:(int)arg2 ;
-(void)addCStringWithChar2String:(const unsigned short*)arg1 instance:(int)arg2 ;
-(id)pbInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
-(EshGroup*)eshGroup;
-(id)shapeContainer;
-(id)ebInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
-(void)dealloc;
-(void)removeChild:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(unsigned long long)childCount;
-(id)initFromReader:(OcReaderRef)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3 ;
-(id)childAt:(unsigned long long)arg1 ;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(void)insertChild:(id)arg1 at:(unsigned long long)arg2 ;
-(id)firstChildOfType:(unsigned short)arg1 ;
-(EshContainer*)eshContainer;
-(id)addEshChild:(EshObject*)arg1 ;
-(id)addChildOfType:(unsigned short)arg1 ;
-(unsigned long long)indexOfFirstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2 ;
-(id)containerFromObject:(id)arg1 mustExist:(bool)arg2 ;
-(id)childOfType:(unsigned short)arg1 instance:(short)arg2 ;
-(void)writeToWriter:(OcWriterRef)arg1 ;
-(id)addContainerChildOfType:(unsigned short)arg1 ;
-(EshObject*)addAtomChildOfType:(unsigned short)arg1 ;
-(id)insertEshChild:(EshObject*)arg1 at:(unsigned long long)arg2 ;
-(id)firstChildOfType:(unsigned short)arg1 afterChild:(id)arg2 ;
-(id)firstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2 ;
-(id)firstContainerChildOfType:(unsigned short)arg1 mustExist:(bool)arg2 ;
-(id)containerChildOfType:(unsigned short)arg1 instance:(short)arg2 mustExist:(bool)arg3 ;
-(id)containerChildAt:(unsigned long long)arg1 ;
@end

