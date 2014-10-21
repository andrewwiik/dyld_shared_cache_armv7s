/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKSoundContext : NSObject {

	ALCdevice_structRef _device;
	ALCcontext_structRef _context;

}

@property (assign,nonatomic) double gain; 
@property (assign,nonatomic) CGPoint listenerPosition; 
+(id)context;
+(id)currentContext;
-(void)makeCurrentContext;
-(CGPoint)listenerPosition;
-(void)setListenerPosition:(CGPoint)arg1 ;
-(double)gain;
-(void)setGain:(double)arg1 ;
-(void)dealloc;
-(id)init;
@end

