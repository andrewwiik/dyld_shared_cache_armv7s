/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADImageFillTechnique.h>

@class OADRelativeRect;

@interface OADStretchTechnique : OADImageFillTechnique {

	OADRelativeRect* mFillRect;
	bool mIsFillRectOverridden;

}
+(id)defaultProperties;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithDefaults;
-(void)setFillRect:(id)arg1 ;
-(bool)isFillRectOverridden;
-(id)fillRect;
@end

