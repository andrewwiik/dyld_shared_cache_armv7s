/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface SUItemValidator : NSObject {

	NSMutableArray* _collectionTests;
	NSMutableArray* _itemTests;

}

@property (nonatomic,readonly) NSArray * validationTests; 
-(void)dealloc;
-(bool)validateItems:(id)arg1 offers:(id)arg2 error:(id*)arg3 ;
-(void)addCollectionValidationTests:(id)arg1 ;
-(void)addItemValidationTests:(id)arg1 ;
-(void)removeValidationTest:(id)arg1 ;
-(bool)validateItems:(id)arg1 error:(id*)arg2 ;
-(id)validationTests;
@end
