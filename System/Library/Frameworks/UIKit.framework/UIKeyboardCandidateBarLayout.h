/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSArray;

@interface UIKeyboardCandidateBarLayout : UICollectionViewLayout {

	CGSize _contentSize;
	NSMutableArray* _allAttributes;
	NSArray* _edgeDummyCellAttributes;

}

@property (nonatomic,retain) NSMutableArray * allAttributes;                 //@synthesize allAttributes=_allAttributes - In the implementation block
@property (nonatomic,retain) NSArray * edgeDummyCellAttributes;              //@synthesize edgeDummyCellAttributes=_edgeDummyCellAttributes - In the implementation block
+(id)layout;
+(id)dummyCellCollectionViewKind;
+(Class)layoutAttributesClass;
-(void)dealloc;
-(id)init;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)allAttributes;
-(id)edgeDummyCellAttributes;
-(void)prepareLayout;
-(void)setEdgeDummyCellAttributes:(id)arg1 ;
-(void)setAllAttributes:(id)arg1 ;
@end

