/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <GameCenterUI/GKStateMachineDelegate.h>

@class GKPlaceholderView, NSString, UIActivityIndicatorView, GKPlaceholderContentStateMachine, NSArray;

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <GKStateMachineDelegate> {

	GKPlaceholderView* _placeholderView;
	NSString* _loadingState;
	NSString* _noContentTitle;
	NSString* _noContentMessage;
	NSString* _errorTitle;
	NSString* _errorMessage;
	long long _alignment;
	UIActivityIndicatorView* _loadingIndicatorView;
	GKPlaceholderContentStateMachine* _loadingMachine;
	NSArray* _constraints;

}

@property (nonatomic,retain) GKPlaceholderView * placeholderView;                            //@synthesize placeholderView=_placeholderView - In the implementation block
@property (nonatomic,retain) NSString * loadingState;                                        //@synthesize loadingState=_loadingState - In the implementation block
@property (nonatomic,retain) NSString * noContentTitle;                                      //@synthesize noContentTitle=_noContentTitle - In the implementation block
@property (nonatomic,retain) NSString * noContentMessage;                                    //@synthesize noContentMessage=_noContentMessage - In the implementation block
@property (nonatomic,retain) NSString * errorTitle;                                          //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;                                        //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) long long alignment;                                            //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicatorView;                 //@synthesize loadingIndicatorView=_loadingIndicatorView - In the implementation block
@property (nonatomic,retain) GKPlaceholderContentStateMachine * loadingMachine;              //@synthesize loadingMachine=_loadingMachine - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                          //@synthesize constraints=_constraints - In the implementation block
-(void)setNoContentTitle:(id)arg1 ;
-(void)setNoContentMessage:(id)arg1 ;
-(void)setErrorTitle:(id)arg1 ;
-(void)setErrorMessage:(id)arg1 ;
-(void)setPlaceholderView:(id)arg1 ;
-(void)setConstraints:(id)arg1 ;
-(void)delayedShowLoadingIndicator;
-(void)setLoadingState:(id)arg1 ;
-(void)didEnterLoadingState;
-(void)didExitLoadingState;
-(void)didEnterNoContentState;
-(void)didExitNoContentState;
-(void)didEnterErrorState;
-(void)didExitErrorState;
-(id)placeholderView;
-(id)loadingState;
-(id)noContentTitle;
-(id)noContentMessage;
-(id)errorTitle;
-(id)errorMessage;
-(id)loadingIndicatorView;
-(void)setLoadingIndicatorView:(id)arg1 ;
-(id)loadingMachine;
-(void)setLoadingMachine:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setAlignment:(long long)arg1 ;
-(id)constraints;
-(void)updateConstraints;
-(long long)alignment;
@end

