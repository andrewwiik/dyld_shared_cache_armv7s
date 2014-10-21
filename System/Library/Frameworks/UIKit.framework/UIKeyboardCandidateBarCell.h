/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIKBCacheableView.h>

@class UIKBThemedView, UILabel, NSString;

@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView> {

	bool _beginsFirstPage;
	bool _endsLastPage;
	bool _isAtLeftEdge;
	UIKBThemedView* _themedView;
	UILabel* _label;
	NSString* _candidateText;

}

@property (nonatomic,retain) UIKBThemedView * themedView;              //@synthesize themedView=_themedView - In the implementation block
@property (nonatomic,retain) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * candidateText;                   //@synthesize candidateText=_candidateText - In the implementation block
@property (assign,nonatomic) bool beginsFirstPage;                     //@synthesize beginsFirstPage=_beginsFirstPage - In the implementation block
@property (assign,nonatomic) bool endsLastPage;                        //@synthesize endsLastPage=_endsLastPage - In the implementation block
@property (assign,nonatomic) bool isAtLeftEdge;                        //@synthesize isAtLeftEdge=_isAtLeftEdge - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) bool cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) bool keepNonPersistent; 
+(id)font;
+(id)reuseIdentifier;
+(double)widthForCandidateText:(id)arg1 ;
+(UIEdgeInsets)cacheInsets;
+(id)textColorWithHighlight:(bool)arg1 whiteText:(bool)arg2 ;
+(bool)highlightAffectsBackground;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setHighlighted:(bool)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(bool)arg1 ;
-(void)setCandidate:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(id)cacheKey;
-(double)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(bool)cacheDeferable;
-(bool)keepNonPersistent;
-(void)setThemedView:(id)arg1 ;
-(id)themedView;
-(void)updateLabels;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)updateIsAtLeftEdgeState;
-(void)setBeginsFirstPage:(bool)arg1 ;
-(void)setEndsLastPage:(bool)arg1 ;
-(bool)beginsFirstPage;
-(bool)endsLastPage;
-(void)setCandidateText:(id)arg1 ;
-(id)candidateText;
-(bool)isAtLeftEdge;
-(void)setIsAtLeftEdge:(bool)arg1 ;
@end

