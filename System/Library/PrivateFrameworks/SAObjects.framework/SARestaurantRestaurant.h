/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SALocalSearchBusiness2.h>

@class NSArray, NSString, NSURL;

@interface SARestaurantRestaurant : SALocalSearchBusiness2

@property (nonatomic,copy) NSArray * attributeSet; 
@property (nonatomic,copy) NSString * currencySymbol; 
@property (nonatomic,copy) NSArray * makeReservationPunchOuts; 
@property (nonatomic,copy) NSURL * menuLink; 
@property (nonatomic,copy) NSArray * openings; 
@property (nonatomic,copy) NSArray * orderDeliveryPunchOuts; 
@property (nonatomic,copy) NSString * priceRange; 
+(id)restaurant;
+(id)restaurantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)currencySymbol;
-(void)setCurrencySymbol:(id)arg1 ;
-(id)groupIdentifier;
-(void)setAttributeSet:(id)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)attributeSet;
-(id)makeReservationPunchOuts;
-(void)setMakeReservationPunchOuts:(id)arg1 ;
-(id)menuLink;
-(void)setMenuLink:(id)arg1 ;
-(id)openings;
-(void)setOpenings:(id)arg1 ;
-(id)orderDeliveryPunchOuts;
-(void)setOrderDeliveryPunchOuts:(id)arg1 ;
-(id)priceRange;
-(void)setPriceRange:(id)arg1 ;
@end

