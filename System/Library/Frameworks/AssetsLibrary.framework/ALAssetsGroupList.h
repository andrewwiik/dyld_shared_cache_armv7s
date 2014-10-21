/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssetsLibrary/ALAssetsGroup.h>

@protocol PLAssetContainerList;
@interface ALAssetsGroupList : ALAssetsGroup {

	<PLAssetContainerList>* _containerList;

}

@property (nonatomic,readonly) <PLAssetContainerList> * containerList;              //@synthesize containerList=_containerList - In the implementation block
-(id)containerList;
-(id)initWithContainerList:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3 ;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
@end

