/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class NSURL, UIViewController, NSString, SUGradient, SUPlaceholderViewController, SUShadow, SUSplitView, SUStructuredPage;

@interface SUSplitViewController : SUViewController {

	NSURL* _displayedURL;
	UIViewController* _firstViewController;
	NSString* _mainTitle;
	SUGradient* _placeholderGradient;
	SUPlaceholderViewController* _placeholderViewController;
	UIViewController* _secondViewController;
	SUShadow* _splitShadow;
	SUSplitView* _splitView;
	SUStructuredPage* _structuredPage;
	bool _usesSharedPlaceholder;
	bool _viewIsReady;

}

@property (nonatomic,retain) UIViewController * firstViewController;               //@synthesize firstViewController=_firstViewController - In the implementation block
@property (nonatomic,retain) UIViewController * secondViewController;              //@synthesize secondViewController=_secondViewController - In the implementation block
@property (nonatomic,retain) NSString * mainTitle;                                 //@synthesize mainTitle=_mainTitle - In the implementation block
@property (assign,nonatomic) long long layoutType; 
@property (assign,nonatomic) double minimumPaneSize; 
@property (assign,nonatomic) double splitPosition; 
@property (nonatomic,copy) SUShadow * splitShadow;                                 //@synthesize splitShadow=_splitShadow - In the implementation block
@property (assign,nonatomic) bool usesSharedPlaceholder;                           //@synthesize usesSharedPlaceholder=_usesSharedPlaceholder - In the implementation block
@property (assign,getter=isVertical,nonatomic) bool vertical; 
@property (nonatomic,retain) NSURL * displayedURL;                                 //@synthesize displayedURL=_displayedURL - In the implementation block
@property (assign,nonatomic) bool viewIsReady;                                     //@synthesize viewIsReady=_viewIsReady - In the implementation block
+(bool)isValidSplitPositionValue:(id)arg1 ;
+(bool)isValidSplitTypeString:(id)arg1 ;
-(void)setLoading:(bool)arg1 ;
-(id)mainTitle;
-(void)dealloc;
-(id)init;
-(bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)loadView;
-(void)removeChildViewController:(id)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(bool)isLoaded;
-(bool)isVertical;
-(void)setVertical:(bool)arg1 ;
-(id)firstViewController;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)copyChildViewControllersForReason:(long long)arg1 ;
-(bool)shouldExcludeFromNavigationHistory;
-(id)storePageProtocol;
-(id)newRotationController;
-(void)_loadingDidChangeNotification:(id)arg1 ;
-(id)copyScriptViewController;
-(bool)viewIsReady;
-(void)reloadWithStorePage:(id)arg1 forURL:(id)arg2 ;
-(id)displayedURL;
-(void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2 ;
-(void)setViewIsReady:(bool)arg1 ;
-(void)_navigationItemDidChangeNotification:(id)arg1 ;
-(long long)layoutType;
-(double)minimumPaneSize;
-(double)splitPosition;
-(id)splitShadow;
-(bool)usesSharedPlaceholder;
-(id)_splitView;
-(void)_reloadView;
-(void)setFirstViewController:(id)arg1 ;
-(void)setSecondViewController:(id)arg1 ;
-(void)setLayoutType:(long long)arg1 ;
-(void)setMainTitle:(id)arg1 ;
-(void)setSplitPosition:(double)arg1 ;
-(void)setSplitShadow:(id)arg1 ;
-(void)setUsesSharedPlaceholder:(bool)arg1 ;
-(void)_setPlaceholderVisible:(bool)arg1 ;
-(void)setDisplayedURL:(id)arg1 ;
-(void)_setStructuredPage:(id)arg1 ;
-(void)_reloadWithStorePageDictionary:(id)arg1 ;
-(void)_setViewController:(id*)arg1 toValue:(id)arg2 ;
-(void)_reloadTitle;
-(void)setMinimumPaneSize:(double)arg1 ;
-(void)_reloadLoadingState;
-(id)_newGradientWithValue:(id)arg1 ;
-(void)setSplitPositionAndLayoutTypeFromValue:(id)arg1 ;
-(void)setSplitTypeString:(id)arg1 ;
-(id)_newViewControllerFromDictionary:(id)arg1 ;
-(void)_reloadViewController:(id)arg1 fromDictionary:(id)arg2 ;
-(id)splitPositionString;
-(id)splitTypeString;
-(id)secondViewController;
@end

