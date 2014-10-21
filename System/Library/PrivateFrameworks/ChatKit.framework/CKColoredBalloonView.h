/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>

@class CKBalloonImageView, CKGradientView;

@interface CKColoredBalloonView : CKBalloonView {

	BOOL _color;
	bool _wantsGradient;
	CKBalloonImageView* _mask;
	CKGradientView* _gradientView;

}

@property (assign,nonatomic) BOOL color;                                                           //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIView<CKGradientReferenceView> * gradientReferenceView; 
@property (nonatomic,retain) CKBalloonImageView * mask;                                            //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) CKGradientView * gradientView;                                        //@synthesize gradientView=_gradientView - In the implementation block
@property (assign,nonatomic) bool wantsGradient;                                                   //@synthesize wantsGradient=_wantsGradient - In the implementation block
-(void)configureForMessagePart:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(UIEdgeInsets)alignmentRectInsets;
-(id)mask;
-(void)setMask:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)color;
-(void)setColor:(BOOL)arg1 ;
-(void)prepareForDisplay;
-(void)setHasTail:(bool)arg1 ;
-(void)setCanUseOpaqueMask:(bool)arg1 ;
-(id)overlayColor;
-(void)setGradientReferenceView:(id)arg1 ;
-(id)gradientReferenceView;
-(bool)wantsGradient;
-(void)setGradientView:(id)arg1 ;
-(id)gradientView;
-(void)updateWantsGradient;
-(void)setWantsGradient:(bool)arg1 ;
@end
