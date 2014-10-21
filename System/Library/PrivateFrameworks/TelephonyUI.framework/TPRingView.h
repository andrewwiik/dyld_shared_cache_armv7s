/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class CALayer;

@interface TPRingView : UIView {

	CALayer* _luminanceRingLayer;
	CALayer* _dodgeRingLayer;
	CALayer* _highlightDodgeLayer;
	CALayer* _highlightLuminanceLayer;
	CALayer* _selectionLayer;

}

@property (retain) CALayer * luminanceRingLayer;                   //@synthesize luminanceRingLayer=_luminanceRingLayer - In the implementation block
@property (retain) CALayer * dodgeRingLayer;                       //@synthesize dodgeRingLayer=_dodgeRingLayer - In the implementation block
@property (retain) CALayer * highlightDodgeLayer;                  //@synthesize highlightDodgeLayer=_highlightDodgeLayer - In the implementation block
@property (retain) CALayer * highlightLuminanceLayer;              //@synthesize highlightLuminanceLayer=_highlightLuminanceLayer - In the implementation block
@property (retain) CALayer * selectionLayer;                       //@synthesize selectionLayer=_selectionLayer - In the implementation block
+(CGSize)ringSize;
+(double)ringStroke;
+(id)colorForLuminance;
+(id)createRingImageWithSize:(CGSize)arg1 strokeWidth:(double)arg2 color:(id)arg3 ;
+(id)colorForDodge;
+(double)ringCornerRadius;
+(id)ringImageForLuminance;
+(id)ringImageForDodge;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setEnabled:(bool)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(bool)arg1 ;
-(void)setSelected:(bool)arg1 ;
-(id)luminanceRingLayer;
-(void)setLuminanceRingLayer:(id)arg1 ;
-(id)dodgeRingLayer;
-(void)setDodgeRingLayer:(id)arg1 ;
-(id)highlightDodgeLayer;
-(void)setHighlightDodgeLayer:(id)arg1 ;
-(id)highlightLuminanceLayer;
-(void)setHighlightLuminanceLayer:(id)arg1 ;
-(id)selectionLayer;
-(void)setSelectionLayer:(id)arg1 ;
@end

