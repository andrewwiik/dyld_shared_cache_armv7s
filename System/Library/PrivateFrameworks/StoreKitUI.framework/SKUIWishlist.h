/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSWishlist, NSArray;

@interface SKUIWishlist : NSObject {

	SSWishlist* _database;

}

@property (nonatomic,readonly) long long accountIdentifier; 
@property (nonatomic,readonly) NSArray * items; 
+(id)activeWishlist;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)items;
-(void)addItem:(id)arg1 ;
-(void).cxx_destruct;
-(long long)accountIdentifier;
-(bool)containsItemWithIdentifier:(long long)arg1 ;
-(void)postChangeNotification;
-(void)removeItemsWithItemIdentifiers:(id)arg1 ;
@end

