/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADOle, OADMovie;

@interface OADImage : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADOle* mOle;
	OADMovie* mMovie;

}
-(void)dealloc;
-(id)init;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)imageProperties;
-(id)movie;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)setOle:(id)arg1 ;
-(void)setMovie:(id)arg1 ;
-(id)initWithBlipRef:(id)arg1 ;
-(id)ole;
-(id)createImageFill;
-(void)createPictureFramePresetGeometry;
@end

