/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKViewVolume : NSObject {

	VKPoint _corners[8];
	SCD_Struct_VK48 _faces[6];

}

@property (nonatomic,readonly) const VKPoint* corners; 
@property (nonatomic,readonly) const SCD_Struct_VK48* faces; 
@property (nonatomic,readonly) SCD_Struct_VK48 farPlane; 
-(const VKPoint*)corners;
-(id).cxx_construct;
-(const SCD_Struct_VK48*)faces;
-(void)updateWithFrustum:(SCD_Struct_VK43)arg1 horizontalOffset:(float)arg2 matrix:(const SCD_Struct_VK42*)arg3 ;
-(bool)rejectsRect:(VKEdgeInsets)arg1 ;
-(SCD_Struct_VK48)farPlane;
-(bool)distanceClipsPoint:(VKPoint)arg1 ;
-(VKPoint)lerpPoint:(float*)arg1 ;
@end

