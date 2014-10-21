/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSXPCCoding.h>

@class NSMutableDictionary;

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding> {

	NSMutableDictionary* _etags;
	bool _profileValidated;
	NSMutableDictionary* _propertyValues;

}

@property (assign,getter=isProfileValidated,nonatomic) bool profileValidated;              //@synthesize profileValidated=_profileValidated - In the implementation block
-(void)dealloc;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)ETagForAssetType:(id)arg1 ;
-(bool)setETag:(id)arg1 forAssetType:(id)arg2 error:(id*)arg3 ;
-(id)_initWithITunesMetadata:(id)arg1 ;
-(bool)isProfileValidated;
-(void)setProfileValidated:(bool)arg1 ;
@end
