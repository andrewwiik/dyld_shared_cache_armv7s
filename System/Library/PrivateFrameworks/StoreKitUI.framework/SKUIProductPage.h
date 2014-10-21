/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class SKUIProductPageItem, SSMetricsConfiguration, NSString, NSURL, NSArray, SKUIReviewConfiguration, SKUIUber;

@interface SKUIProductPage : NSObject <NSCopying> {

	long long _defaultPageFragment;
	SKUIProductPageItem* _item;
	SSMetricsConfiguration* _metricsConfiguration;
	NSString* _metricsPageDescription;
	NSURL* _pageURL;
	NSArray* _relatedContentSwooshes;
	SKUIReviewConfiguration* _reviewConfiguration;
	SKUIUber* _uber;

}

@property (assign,nonatomic) long long defaultPageFragment;                              //@synthesize defaultPageFragment=_defaultPageFragment - In the implementation block
@property (nonatomic,retain) SKUIProductPageItem * item;                                 //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,copy) NSString * metricsPageDescription;                            //@synthesize metricsPageDescription=_metricsPageDescription - In the implementation block
@property (nonatomic,copy) NSURL * pageURL;                                              //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy) NSArray * relatedContentSwooshes;                             //@synthesize relatedContentSwooshes=_relatedContentSwooshes - In the implementation block
@property (nonatomic,retain) SKUIReviewConfiguration * reviewConfiguration;              //@synthesize reviewConfiguration=_reviewConfiguration - In the implementation block
@property (nonatomic,retain) SKUIUber * uber;                                            //@synthesize uber=_uber - In the implementation block
-(void)setItem:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)item;
-(void)setPageURL:(id)arg1 ;
-(id)pageURL;
-(void).cxx_destruct;
-(void)setMetricsConfiguration:(id)arg1 ;
-(void)setMetricsPageDescription:(id)arg1 ;
-(void)setUber:(id)arg1 ;
-(id)metricsConfiguration;
-(id)metricsPageDescription;
-(id)uber;
-(void)setDefaultPageFragment:(long long)arg1 ;
-(id)reviewConfiguration;
-(long long)defaultPageFragment;
-(id)relatedContentSwooshes;
-(void)setRelatedContentSwooshes:(id)arg1 ;
-(void)setReviewConfiguration:(id)arg1 ;
@end

