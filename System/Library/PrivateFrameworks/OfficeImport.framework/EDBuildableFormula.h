/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFormulaBuilding.h>

@interface EDBuildableFormula : NSObject <EDFormulaBuilding> {

	EDFormulaPtg* mTree;
	int mWarning;

}
-(EDFormulaPtg*)argPtgAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 ;
-(bool)addArrayWithCol:(int)arg1 andRow:(int)arg2 ;
-(void)setWarning:(int)arg1 ;
-(id)formula;
-(bool)isSupportedFormula;
-(char*)setExtendedDataForLastTokenAtIndex:(unsigned)arg1 length:(unsigned)arg2 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 numArgs:(int)arg3 ;
-(bool)makeArrayForLastToken:(unsigned long long)arg1 ;
-(bool)convertToList:(unsigned)arg1 withFinalParen:(bool)arg2 ;
-(bool)convertRefs:(unsigned)arg1 toTypes:(int*)arg2 ;
-(bool)shrinkSpanningRefAtArgIndex:(unsigned)arg1 ;
-(void)convertRefsInList:(EDFormulaPtg*)arg1 toType:(int)arg2 ;
-(bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned)arg3 ;
-(bool)convertToList:(unsigned)arg1 ;
-(bool)convertToIntersect:(unsigned)arg1 ;
-(bool)convertLastRefsToArea;
-(id)lastTokenRefOrArea3dLinkRefIsValid:(bool*)arg1 withEDLinks:(id)arg2 ;
-(void)markLastTokenAsDuration;
-(void)markLastTokenAsSpanningRefVertically:(bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3 ;
-(int)warningType;
-(void)copyToFormula:(id)arg1 ;
-(bool)copyToken:(unsigned)arg1 from:(id)arg2 ;
-(bool)argTokenIsDurationAtIndex:(unsigned)arg1 ;
-(int)argTokenTypeAtIndex:(unsigned)arg1 ;
-(bool)replaceArgPtgAtIndex:(unsigned)arg1 withFormula:(id)arg2 ;
-(bool)insertVariableFunction:(unsigned short)arg1 afterIndex:(unsigned)arg2 numArgs:(unsigned)arg3 ;
-(unsigned)removeOptionalPtgArgs:(unsigned)arg1 minArgs:(unsigned)arg2 ;
@end
