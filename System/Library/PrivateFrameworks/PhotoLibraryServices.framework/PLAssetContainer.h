/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLAssetContainer <NSObject,PLDiagnosticsProvider>
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) bool isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) bool canShowComments; 
@property (nonatomic,readonly) bool canShowAvalancheStacks; 
@property (nonatomic,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@optional
-(id)startDate;
-(id)endDate;

@required
-(bool)isEmpty;
-(id)title;
-(id)localizedTitle;
-(bool)canPerformEditOperation:(int)arg1;
-(id)uuid;
-(id)assets;
-(unsigned long long)approximateCount;
-(unsigned long long)assetsCount;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(id)keyAsset;
-(void)setKeyAsset:(id)arg1;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1;
-(bool)canShowComments;
-(bool)canShowAvalancheStacks;
-(id)localizedLocationNames;
@end

