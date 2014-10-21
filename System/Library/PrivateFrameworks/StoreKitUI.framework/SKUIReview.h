/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUICacheCoding.h>

@class NSString, NSMutableDictionary;

@interface SKUIReview : NSObject <SKUICacheCoding> {

	NSString* _body;
	NSString* _dateString;
	float _rating;
	NSString* _reviewer;
	NSString* _title;

}

@property (nonatomic,readonly) NSString * body;                                        //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) NSString * dateString;                                  //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,readonly) float rating;                                           //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) NSString * reviewer;                                    //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(float)rating;
-(id)title;
-(id)body;
-(void).cxx_destruct;
-(id)reviewer;
-(id)initWithReviewDictionary:(id)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)cacheRepresentation;
-(id)dateString;
-(id)formattedBylineWithClientContext:(id)arg1 ;
@end

