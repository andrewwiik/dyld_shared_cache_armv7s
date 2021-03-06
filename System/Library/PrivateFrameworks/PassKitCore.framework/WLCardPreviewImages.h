/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPassImages.h>

@class PKImage;

@interface WLCardPreviewImages : PKPassImages {

	PKImage* _iconImage;

}

@property (nonatomic,retain) PKImage * iconImage;              //@synthesize iconImage=_iconImage - In the implementation block
+(bool)supportsSecureCoding;
+(id)archiveName;
+(long long)imageSet;
+(long long)currentVersion;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)iconImage;
-(void)preheatImages;
-(id)initWithCardURL:(id)arg1 displayProfile:(id)arg2 ;
-(void)setIconImage:(id)arg1 ;
@end

