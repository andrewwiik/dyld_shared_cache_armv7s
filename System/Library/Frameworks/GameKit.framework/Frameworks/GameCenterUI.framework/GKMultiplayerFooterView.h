/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class GKMultiplayerActivityView, GKMultiplayerBubbleView;

@interface GKMultiplayerFooterView : UICollectionReusableView {

	GKMultiplayerActivityView* _activityView;
	GKMultiplayerBubbleView* _bubbleView;

}

@property (nonatomic,retain) GKMultiplayerActivityView * activityView;              //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) GKMultiplayerBubbleView * bubbleView;                  //@synthesize bubbleView=_bubbleView - In the implementation block
-(void)floatInBubbles;
-(void)scatterOutBubblesWithCompletion:(/*^block*/ id)arg1 ;
-(id)bubbleView;
-(id)activityView;
-(void)setStatusFooterHidden:(bool)arg1 animated:(bool)arg2 ;
-(void)setBubbleFooterHidden:(bool)arg1 animated:(bool)arg2 ;
-(void)setBubblesHidden:(bool)arg1 ;
-(void)showFooterStatus:(id)arg1 ;
-(void)setActivityView:(id)arg1 ;
-(void)setBubbleView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
@end

