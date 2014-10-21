/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface SFCollectionViewFlowLayout : UICollectionViewFlowLayout {

	NSMutableArray* _insertedIndexPaths;
	NSMutableArray* _movedIndexPaths;
	NSMutableArray* _deletedIndexPaths;
	NSMutableArray* _handledIndexPaths;

}
-(id)init;
-(void).cxx_destruct;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(/*^block*/ id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)_applyToLayoutAttributes:(id)arg1 toView:(id)arg2 ;
@end

