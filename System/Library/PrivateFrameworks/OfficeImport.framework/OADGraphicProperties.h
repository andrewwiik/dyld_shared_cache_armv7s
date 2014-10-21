/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADDrawableProperties.h>
#import <OfficeImport/OADEffectsParent.h>
#import <OfficeImport/OADProperties3DParent.h>

@class OADFill, NSArray, OADScene3D, OADShape3D, OADStroke;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {

	OADFill* mFill;
	NSArray* mEffects;
	OADScene3D* mScene3D;
	OADShape3D* mShape3D;
	OADStroke* mStroke;
	unsigned mHasIsBehindText : 1;
	unsigned mIsBehindText : 1;

}
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)fill;
-(id)stroke;
-(bool)isBehindText;
-(void)setFill:(id)arg1 ;
-(void)setStroke:(id)arg1 ;
-(bool)hasFill;
-(bool)hasStroke;
-(id)effects;
-(bool)hasEffects;
-(void)setEffects:(id)arg1 ;
-(void)setIsBehindText:(bool)arg1 ;
-(id)initWithDefaults;
-(void)removeUnnecessaryOverrides;
-(void)setScene3D:(id)arg1 ;
-(void)setShape3D:(id)arg1 ;
-(bool)hasScene3D;
-(bool)hasShape3D;
-(bool)hasIsBehindText;
-(id)scene3D;
-(id)shape3D;
-(void)setParent:(id)arg1 ;
@end

