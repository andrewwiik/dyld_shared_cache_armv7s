/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EPStyleFlattener.h>

@class EDPivotTable;

@interface EPPivotTableStyleFlattener : EPStyleFlattener {

	EDPivotTable* mPivotTable;
	long long mFirstHeaderRow;
	long long mFirstDataRow;
	long long mFirstDataColumn;
	unsigned long long mRowFieldsCount;
	unsigned long long mColumnFieldsCount;
	unsigned long long mPageFieldsCount;

}
-(int)stripeOffset:(int)arg1 row:(bool)arg2 ;
-(void)addRowSubheadingLevel:(unsigned)arg1 to:(id)arg2 ;
-(void)addSubtotalRowLevel:(unsigned)arg1 to:(id)arg2 ;
-(void)addColumnSubheadingLevel:(unsigned)arg1 to:(id)arg2 ;
-(void)addSubtotalColumnLevel:(unsigned)arg1 to:(id)arg2 ;
-(unsigned)constrainLevel:(unsigned)arg1 ;
-(void)clearCache;
-(bool)isObjectSupported:(id)arg1 ;
-(void)cacheSizes:(id)arg1 inObject:(id)arg2 ;
-(id)collectionFromWorksheet:(id)arg1 ;
-(id)styleFromObject:(id)arg1 ;
-(id)extractRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 ;
-(id)extractCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4 ;
-(id)keysInTheOrderTheyShouldBeApplied;
-(int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3 ;
@end

