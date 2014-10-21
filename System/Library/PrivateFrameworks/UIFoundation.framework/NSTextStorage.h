/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSMutableArray, NSArray;

@interface NSTextStorage : NSMutableAttributedString {

	NSRange _editedRange;
	long long _editedDelta;
	struct {
		unsigned editedMask : 8;
		unsigned postWillProcess : 1;
		unsigned postDidProcess : 1;
		unsigned  : 6;
		unsigned disabled : 16;
	}  _flags;
	NSMutableArray* _layoutManagers;
	id _sideData;
	unsigned long long _editedMask;
	long long _changeInLength;

}

@property (nonatomic,readonly) NSArray * layoutManagers; 
@property (assign,nonatomic) unsigned long long editedMask;                   //@synthesize editedMask=_editedMask - In the implementation block
@property (assign,nonatomic) NSRange editedRange;                             //@synthesize editedRange=_editedRange - In the implementation block
@property (assign,nonatomic) long long changeInLength;                        //@synthesize changeInLength=_changeInLength - In the implementation block
@property (assign,nonatomic) <NSTextStorageDelegate> * delegate; 
@property (nonatomic,readonly) bool fixesAttributesLazily; 
+(id)allocWithZone:(NSZone)arg1 ;
-(void)_undoRedoTextOperation:(id)arg1 ;
-(id)_undoRedoAttributedSubstringFromRange:(NSRange)arg1 ;
-(void)coordinateAccess:(/*^block*/ id)arg1 ;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(Class)classForCoder;
-(void)addLayoutManager:(id)arg1 ;
-(void)beginEditing;
-(void)endEditing;
-(void)coordinateEditing:(/*^block*/ id)arg1 ;
-(void)_setUsesSimpleTextEffects:(bool)arg1 ;
-(bool)_usesSimpleTextEffects;
-(bool)_shouldSetOriginalFontAttribute;
-(void)coordinateReading:(/*^block*/ id)arg1 ;
-(unsigned long long)editedMask;
-(NSRange)editedRange;
-(id)cuiCatalog;
-(id)cuiStyleEffects;
-(bool)_isEditing;
-(bool)_lockForReading;
-(void)_unlock;
-(void)_setForceFixAttributes:(bool)arg1 ;
-(id)layoutManagers;
-(void)removeLayoutManager:(id)arg1 ;
-(bool)_lockForWriting;
-(bool)_attributeFixingInProgress;
-(void)_setAttributeFixingInProgress:(bool)arg1 ;
-(void)fontSetChanged;
-(void)invalidateAttributesInRange:(NSRange)arg1 ;
-(long long)changeInLength;
-(void)_notifyEdited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 invalidatedRange:(NSRange)arg4 ;
-(void)processEditing;
-(bool)_lockForWritingWithExceptionHandler:(bool)arg1 ;
-(bool)fixesAttributesLazily;
-(NSRange)_rangeByEstimatingAttributeFixingForRange:(NSRange)arg1 ;
-(bool)_forceFixAttributes;
-(void)ensureAttributesAreFixedInRange:(NSRange)arg1 ;
-(void)setEditedMask:(unsigned long long)arg1 ;
-(void)setEditedRange:(NSRange)arg1 ;
-(void)setChangeInLength:(long long)arg1 ;
-(void)finalize;
@end

