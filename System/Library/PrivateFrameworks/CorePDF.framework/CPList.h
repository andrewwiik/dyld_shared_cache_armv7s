/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPListItem;

@interface CPList : NSObject <CPDisposable> {

	CGRect spacer;
	int type;
	unsigned ordinalPrefixLength;
	unsigned ordinalSuffixLength;
	CPListItem* parentItem;
	CFArrayRef items;

}

@property (assign,nonatomic) CGRect spacer; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) unsigned ordinalPrefixLength; 
@property (assign,nonatomic) unsigned ordinalSuffixLength; 
@property (nonatomic,retain) CPListItem * parentItem; 
-(CGRect)spacer;
-(void)setSpacer:(CGRect)arg1 ;
-(unsigned)itemCount;
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)addItem:(id)arg1 ;
-(void)dispose;
-(id)parentItem;
-(bool)containsParagraph:(id)arg1 ;
-(bool)isMultilevel;
-(unsigned)ordinalPrefixLength;
-(void)setOrdinalPrefixLength:(unsigned)arg1 ;
-(unsigned)ordinalSuffixLength;
-(void)setOrdinalSuffixLength:(unsigned)arg1 ;
-(void)setParentItem:(id)arg1 ;
-(id)itemAtIndex:(unsigned)arg1 ;
-(void)finalize;
@end

