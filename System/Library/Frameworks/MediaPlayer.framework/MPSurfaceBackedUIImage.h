/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIImage.h>

@class MPPipelineJPEGDecoder;

@interface MPSurfaceBackedUIImage : UIImage {

	MPPipelineJPEGDecoder* decoder;

}
-(id)initWithIOSurface:(IOSurfaceRef)arg1 decoder:(id)arg2 ;
-(void)dealloc;
-(void).cxx_destruct;
@end
