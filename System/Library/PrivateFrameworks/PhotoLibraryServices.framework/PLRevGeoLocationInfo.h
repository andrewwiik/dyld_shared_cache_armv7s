/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOPlaceResult, PLRevGeoCompoundNameInfo, NSString;

@interface PLRevGeoLocationInfo : NSObject {

	bool _isValid;
	bool _isHome;
	GEOPlaceResult* _geoPlaceResult;
	PLRevGeoCompoundNameInfo* _compoundNameInfo;
	PLRevGeoCompoundNameInfo* _compoundSecondaryNameInfo;
	NSString* _providerId;
	unsigned long long _providerVersion;

}

@property (nonatomic,readonly) bool isValid;                                                    //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) GEOPlaceResult * geoPlaceResult;                                   //@synthesize geoPlaceResult=_geoPlaceResult - In the implementation block
@property (nonatomic,retain) PLRevGeoCompoundNameInfo * compoundNameInfo;                       //@synthesize compoundNameInfo=_compoundNameInfo - In the implementation block
@property (nonatomic,retain) PLRevGeoCompoundNameInfo * compoundSecondaryNameInfo;              //@synthesize compoundSecondaryNameInfo=_compoundSecondaryNameInfo - In the implementation block
@property (assign,nonatomic) bool isHome;                                                       //@synthesize isHome=_isHome - In the implementation block
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,retain) NSString * providerId;                                             //@synthesize providerId=_providerId - In the implementation block
@property (assign,nonatomic) unsigned long long providerVersion;                                //@synthesize providerVersion=_providerVersion - In the implementation block
+(/*^block*/ id)sortedNameInfoComparatorWithHomeAtEnd:(bool)arg1 ;
+(unsigned long long)qualityTypeForPointInCountryCode:(id)arg1 withDataProviderId:(id)arg2 ;
+(unsigned long long)currentVersion;
-(void)dealloc;
-(id)init;
-(id)description;
-(bool)isValid;
-(id)initWithData:(id)arg1 ;
-(void)setCompoundNameInfo:(id)arg1 ;
-(void)setCompoundSecondaryNameInfo:(id)arg1 ;
-(void)setIsHome:(bool)arg1 ;
-(void)setProviderId:(id)arg1 ;
-(void)setProviderVersion:(unsigned long long)arg1 ;
-(id)geoPlaceResult;
-(bool)isHome;
-(id)countryCode;
-(id)dataForInfo;
-(void)_addNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 totalPlaceCount:(long long*)arg3 ;
-(void)setGeoPlaceResult:(id)arg1 ;
-(id)compoundNameInfo;
-(id)compoundSecondaryNameInfo;
-(id)providerId;
-(unsigned long long)providerVersion;
@end

