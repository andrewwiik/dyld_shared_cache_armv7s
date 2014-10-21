/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADTextBody, OADTableCellProperties;

@interface OADTableCell : NSObject {

	OADTextBody* mTextBody;
	OADTableCellProperties* mProperties;
	int mRowSpan;
	int mGridSpan;
	bool mHorzMerge;
	bool mVertMerge;
	int mTopRow;
	int mLeftColumn;

}
-(void)dealloc;
-(id)init;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(bool)horzMerge;
-(bool)vertMerge;
-(int)gridSpan;
-(id)textBody;
-(void)setGridSpan:(int)arg1 ;
-(void)setHorzMerge:(bool)arg1 ;
-(void)setVertMerge:(bool)arg1 ;
-(void)setTextBody:(id)arg1 ;
-(bool)merge:(int)arg1 ;
-(int)spanAlongDir:(int)arg1 ;
-(int)topRow;
-(void)setTopRow:(int)arg1 ;
-(int)leftColumn;
-(void)setLeftColumn:(int)arg1 ;
-(int)rowSpan;
-(void)setRowSpan:(int)arg1 ;
@end

