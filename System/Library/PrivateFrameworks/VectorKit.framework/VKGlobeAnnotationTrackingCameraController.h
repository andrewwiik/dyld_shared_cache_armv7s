/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnnotationTrackingCameraController.h>

@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {

	GlobeView* _globeView;
	Anchor* _anchor;
	VKPoint _currentAnimationStartCoordinate;
	CGPoint _currentAnimationPresentationStartCoordinate;
	CGPoint _currentAnimationEndCoordinate;

}

@property (assign,nonatomic) GlobeView* globeView;              //@synthesize globeView=_globeView - In the implementation block
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(void)_goToAnnotationAnimated:(bool)arg1 duration:(double)arg2 isInitial:(bool)arg3 ;
-(void)_rotateToHeadingAnimated:(bool)arg1 duration:(double)arg2 ;
-(GlobeView*)globeView;
-(void)setGlobeView:(GlobeView*)arg1 ;
@end

