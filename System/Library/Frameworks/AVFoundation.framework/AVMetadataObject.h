/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVMetadataObjectInternal, NSString;

@interface AVMetadataObject : NSObject {

	AVMetadataObjectInternal* _objectInternal;

}

@property (readonly) SCD_Struct_CM4 time; 
@property (readonly) SCD_Struct_CM4 duration; 
@property (readonly) CGRect bounds; 
@property (readonly) NSString * type; 
+(id)derivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4 ;
-(id)originalMetadataObject;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(SCD_Struct_CM4)duration;
-(id)type;
-(id)input;
-(SCD_Struct_CM4)time;
@end

