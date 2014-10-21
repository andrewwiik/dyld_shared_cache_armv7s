/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PUPhotoSelectionManagerDelegate;
@class NSMapTable, NSMutableSet, NSSet, NSOrderedSet;

@interface PUPhotoSelectionManager : NSObject {

	NSMapTable* _selectionEntriesByContainer;
	NSMutableSet* _uniqueAssetSelection;
	long long _selectionChangeCount;
	long long _options;
	<PUPhotoSelectionManagerDelegate>* _delegate;

}

@property (nonatomic,readonly) long long options;                                       //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) <PUPhotoSelectionManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * selectedAssets; 
@property (nonatomic,readonly) NSOrderedSet * orderedSelectedAssets; 
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(long long)options;
-(void).cxx_destruct;
-(id)initWithOptions:(long long)arg1 ;
-(bool)isAnyAssetSelectedInContainers:(id)arg1 ;
-(bool)areAllAssetsSelectedInContainers:(id)arg1 ;
-(id)selectedAssets;
-(id)selectedAssetsWithContainerOrdering:(id)arg1 ;
-(id)localizedSelectionString;
-(void)deselectAllAssets;
-(void)selectAllAssetsInContainers:(id)arg1 ;
-(void)deselectAllAssetsInContainers:(id)arg1 ;
-(bool)isAssetAtIndexSelected:(unsigned long long)arg1 inContainer:(id)arg2 ;
-(void)invalidateAllAssetIndexes;
-(void)handleCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2 ;
-(void)selectAssetsAtIndexes:(id)arg1 inContainer:(id)arg2 ;
-(void)deselectAssetsAtIndexes:(id)arg1 inContainer:(id)arg2 ;
-(bool)areAllAssetsSelectedInContainer:(id)arg1 ;
-(void)selectAssetAtIndex:(unsigned long long)arg1 inContainer:(id)arg2 ;
-(void)deselectAssetAtIndex:(unsigned long long)arg1 inContainer:(id)arg2 ;
-(void)enumerateSelectedAssetsWithContainerOrdering:(id)arg1 block:(/*^block*/ id)arg2 ;
-(bool)_shouldUniqueAssets;
-(void)_beginSelectionChange;
-(void)_endSelectionChange;
-(id)_selectionEntryForContainer:(id)arg1 createIfNeeded:(bool)arg2 ;
-(bool)isAnyAssetSelectedInContainer:(id)arg1 ;
-(id)orderedSelectedAssets;
-(id)selectedAssetIndexesWithContainerOrdering:(id)arg1 ;
@end

