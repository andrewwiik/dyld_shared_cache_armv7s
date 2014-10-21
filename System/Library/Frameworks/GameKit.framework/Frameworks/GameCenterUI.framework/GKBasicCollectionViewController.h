/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKCollectionViewController.h>

@class NSArray, GKCollectionViewDataSource;

@interface GKBasicCollectionViewController : GKCollectionViewController {

	id _target;
	NSArray* _metricsForSections;
	GKCollectionViewDataSource* _initialDataSource;

}

@property (nonatomic,retain) id target;                                                   //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSArray * metricsForSections;                                //@synthesize metricsForSections=_metricsForSections - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * initialDataSource;              //@synthesize initialDataSource=_initialDataSource - In the implementation block
-(void)configureDataSource;
-(void)setInitialDataSource:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 title:(id)arg2 ;
-(id)metricsForSections;
-(void)setMetricsForSections:(id)arg1 ;
-(id)initialDataSource;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end

