/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface CALight : NSObject <NSCopying, NSCoding> {

	void* _attr;
	void* _priv;

}

@property (copy) NSString * type; 
@property (copy) NSString * name; 
@property (getter=isEnabled) bool enabled; 
@property (assign) CGColorRef color; 
@property (assign) double intensity; 
@property (assign) double ambientIntensity; 
@property (assign) double diffuseIntensity; 
@property (assign) double specularIntensity; 
@property (assign) CAPoint3D direction; 
@property (retain) id image; 
@property (assign) double imageRotation; 
@property (copy) NSString * imageBlendMode; 
@property (assign) double imageNormalAngle; 
@property (assign) CAPoint3D position; 
@property (assign) double falloffDistance; 
@property (assign) double falloff; 
@property (assign) double coneAngle; 
@property (assign) double coneEdgeSoftness; 
+(id)lightWithType:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)CA_CAMLPropertyForKey:(id)arg1 ;
-(void)setAmbientIntensity:(double)arg1 ;
-(void)setImageNormalAngle:(double)arg1 ;
-(void)setConeAngle:(double)arg1 ;
-(void)setConeEdgeSoftness:(double)arg1 ;
-(void)setFalloff:(double)arg1 ;
-(void)setFalloffDistance:(double)arg1 ;
-(void)setDiffuseIntensity:(double)arg1 ;
-(void)setSpecularIntensity:(double)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(bool)shouldArchiveValueForKey:(id)arg1 ;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(double)ambientIntensity;
-(double)diffuseIntensity;
-(double)specularIntensity;
-(double)falloffDistance;
-(double)falloff;
-(double)coneAngle;
-(double)coneEdgeSoftness;
-(double)imageRotation;
-(void)setImageRotation:(double)arg1 ;
-(double)imageNormalAngle;
-(id)imageBlendMode;
-(void)setImageBlendMode:(id)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)image;
-(void)setPosition:(CAPoint3D)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)initWithType:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(bool)isEnabled;
-(CAPoint3D)position;
-(id)name;
-(void)setEnabled:(bool)arg1 ;
-(void)setDirection:(CAPoint3D)arg1 ;
-(CAPoint3D)direction;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
@end

