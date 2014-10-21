/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface PUCollectionViewData : NSObject {

	long long _cachedPageCount;
	CGRect _currentContentBounds;
	NSMutableArray* _itemLayoutAttributes;
	NSMutableDictionary* _itemLayoutAttributesByIndexPath;

}

@property (nonatomic,readonly) long long cachedPageCount;                                          //@synthesize cachedPageCount=_cachedPageCount - In the implementation block
@property (assign,nonatomic) CGRect currentContentBounds;                                          //@synthesize currentContentBounds=_currentContentBounds - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemLayoutAttributes;                              //@synthesize itemLayoutAttributes=_itemLayoutAttributes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * itemLayoutAttributesByIndexPath;              //@synthesize itemLayoutAttributesByIndexPath=_itemLayoutAttributesByIndexPath - In the implementation block
-(id)init;
-(void)invalidate;
-(void).cxx_destruct;
-(bool)hasReferenceIndexPath;
-(long long)cachedPageCount;
-(CGRect)currentContentBounds;
-(void)setCurrentContentBounds:(CGRect)arg1 ;
-(id)itemLayoutAttributes;
-(id)itemLayoutAttributesByIndexPath;
@end
