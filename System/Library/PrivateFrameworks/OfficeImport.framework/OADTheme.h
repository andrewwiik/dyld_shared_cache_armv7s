/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADBaseStyles, OADDefaultProperties;

@interface OADTheme : NSObject {

	OADBaseStyles* mBaseStyles;
	OADDefaultProperties* mShapeDefaults;
	OADDefaultProperties* mLineDefaults;
	OADDefaultProperties* mTextDefaults;

}

@property (nonatomic,retain) OADBaseStyles * baseStyles; 
@property (nonatomic,retain) OADDefaultProperties * shapeDefaults; 
@property (nonatomic,retain) OADDefaultProperties * lineDefaults; 
@property (nonatomic,retain) OADDefaultProperties * textDefaults; 
-(void)dealloc;
-(id)init;
-(id)baseStyles;
-(id)lineDefaults;
-(id)shapeDefaults;
-(id)textDefaults;
-(void)addDefaults;
-(id)addShapeDefaults;
-(id)addLineDefaults;
-(id)addTextDefaults;
-(void)setBaseStyles:(id)arg1 ;
-(void)setShapeDefaults:(id)arg1 ;
-(void)setLineDefaults:(id)arg1 ;
-(void)setTextDefaults:(id)arg1 ;
@end

