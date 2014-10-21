/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSString;

@interface UIKeyboardCandidateGridCell : UICollectionViewCell {

	bool _dummy;
	bool _usesGroupHeaderAppearance;
	bool _shouldShowCandidateNumber;
	bool _secondaryCandidateAppearance;
	int _candidatesVisualStyle;
	NSString* _text;
	NSString* _alternativeText;
	unsigned long long _candidateNumber;
	unsigned long long _edges;
	double _rowHeight;
	double _rightPadding;
	SCD_Struct_UI30 _visualStyling;
	long long _textAlignment;
	double _cellPadding;
	double _minimumWidth;
	CGSize _size;
	CGSize _candidateNumberSize;
	CGRect _visibleBounds;

}

@property (assign,nonatomic) bool dummy;                                      //@synthesize dummy=_dummy - In the implementation block
@property (assign,nonatomic) bool usesGroupHeaderAppearance;                  //@synthesize usesGroupHeaderAppearance=_usesGroupHeaderAppearance - In the implementation block
@property (nonatomic,copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * alternativeText;                        //@synthesize alternativeText=_alternativeText - In the implementation block
@property (assign,nonatomic) unsigned long long candidateNumber;              //@synthesize candidateNumber=_candidateNumber - In the implementation block
@property (assign,nonatomic) bool shouldShowCandidateNumber;                  //@synthesize shouldShowCandidateNumber=_shouldShowCandidateNumber - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                            //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (assign,nonatomic) bool secondaryCandidateAppearance;               //@synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance - In the implementation block
@property (assign,nonatomic) unsigned long long edges;                        //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) double rowHeight;                                //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double rightPadding;                             //@synthesize rightPadding=_rightPadding - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI30 visualStyling;                   //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                       //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) long long textAlignment;                         //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize candidateNumberSize;                      //@synthesize candidateNumberSize=_candidateNumberSize - In the implementation block
@property (assign,nonatomic) double cellPadding;                              //@synthesize cellPadding=_cellPadding - In the implementation block
@property (assign,nonatomic) double minimumWidth;                             //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (nonatomic,readonly) bool canShowCandidateNumber; 
+(id)reuseIdentifier;
+(CGColorRef)legacy_outlineColorForVisualStyling:(SCD_Struct_UI30)arg1 candidatesVisualStyle:(int)arg2 ;
+(CGColorRef)legacy_outlineShadowColorForVisualStyling:(SCD_Struct_UI30)arg1 candidatesVisualStyle:(int)arg2 ;
+(double)rightPaddingForIndex;
+(CGSize)sizeForGroupHeader:(id)arg1 visualStyle:(int)arg2 ;
+(double)widthForCandidate:(id)arg1 candidateNumber:(unsigned long long)arg2 visualStyle:(int)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(void)drawRect:(CGRect)arg1 ;
-(void)setRowHeight:(double)arg1 ;
-(double)rowHeight;
-(void)setEdges:(unsigned long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)visibleBounds;
-(void)setHighlighted:(bool)arg1 ;
-(void)setMinimumWidth:(double)arg1 ;
-(double)minimumWidth;
-(void)prepareForReuse;
-(void)setSelected:(bool)arg1 ;
-(long long)textAlignment;
-(void)setVisualStyling:(SCD_Struct_UI30)arg1 ;
-(SCD_Struct_UI30)visualStyling;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(bool)dummy;
-(id)alternativeText;
-(void)setAlternativeText:(id)arg1 ;
-(void)setShouldShowCandidateNumber:(bool)arg1 ;
-(bool)shouldShowCandidateNumber;
-(unsigned long long)candidateNumber;
-(bool)usesGroupHeaderAppearance;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setDummy:(bool)arg1 ;
-(void)setUsesGroupHeaderAppearance:(bool)arg1 ;
-(unsigned long long)edges;
-(void)setRightPadding:(double)arg1 ;
-(void)setCellPadding:(double)arg1 ;
-(void)setCandidateNumber:(unsigned long long)arg1 ;
-(bool)secondaryCandidateAppearance;
-(void)setSecondaryCandidateAppearance:(bool)arg1 ;
-(double)rightPadding;
-(double)cellPadding;
-(bool)canShowCandidateNumber;
-(void)drawBackgroundAndBorders;
-(void)drawTextWithCandidateNumber;
-(void)drawText;
-(CGSize)candidateNumberSize;
-(void)setCandidateNumberSize:(CGSize)arg1 ;
@end

