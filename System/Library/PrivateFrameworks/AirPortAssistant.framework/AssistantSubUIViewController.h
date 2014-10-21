/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AUUITableViewController.h>

@class AssistantUIViewController, NSDictionary, NSMutableDictionary;

@interface AssistantSubUIViewController : AUUITableViewController {

	AssistantUIViewController* _parentController;
	bool _iPadIdiom;
	NSDictionary* _inParamDict;
	NSMutableDictionary* _outResultsDict;

}

@property (assign,nonatomic) AssistantUIViewController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) bool iPadIdiom;                                            //@synthesize iPadIdiom=_iPadIdiom - In the implementation block
@property (nonatomic,retain) NSDictionary * inParamDict;                                //@synthesize inParamDict=_inParamDict - In the implementation block
@property (nonatomic,readonly) NSDictionary * outResultsDict;                           //@synthesize outResultsDict=_outResultsDict - In the implementation block
+(id)tableView;
+(id)labelViewInContainer:(id*)arg1 ;
+(id)labelViewInContainer:(id*)arg1 withSpinner:(id*)arg2 above:(bool)arg3 ;
+(id)topoViewInContainerView:(id*)arg1 ;
+(id)tableViewHeaderView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setLeftNavigationButton:(id)arg1 enable:(bool)arg2 hide:(bool)arg3 ;
-(id)parentController;
-(id)inParamDict;
-(void)setRightNavigationButton:(id)arg1 enable:(bool)arg2 hide:(bool)arg3 ;
-(id)getProductLocalizedStringWithFormat:(id)arg1 ;
-(void)setParentController:(id)arg1 ;
-(bool)iPadIdiom;
-(void)setIPadIdiom:(bool)arg1 ;
-(void)setInParamDict:(id)arg1 ;
-(id)outResultsDict;
@end

