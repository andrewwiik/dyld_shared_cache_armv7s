/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface PUSectionedGridLayoutAttributes : UICollectionViewLayoutAttributes {

	bool _floating;
	bool _extendsTopContent;
	bool _exists;
	double _interactiveTransitionProgress;

}

@property (assign,nonatomic) bool floating;                                     //@synthesize floating=_floating - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgress;              //@synthesize interactiveTransitionProgress=_interactiveTransitionProgress - In the implementation block
@property (assign,nonatomic) bool extendsTopContent;                            //@synthesize extendsTopContent=_extendsTopContent - In the implementation block
@property (assign,nonatomic) bool exists;                                       //@synthesize exists=_exists - In the implementation block
-(bool)exists;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setFloating:(bool)arg1 ;
-(bool)floating;
-(double)interactiveTransitionProgress;
-(void)setExists:(bool)arg1 ;
-(void)setExtendsTopContent:(bool)arg1 ;
-(bool)extendsTopContent;
-(void)setInteractiveTransitionProgress:(double)arg1 ;
@end

