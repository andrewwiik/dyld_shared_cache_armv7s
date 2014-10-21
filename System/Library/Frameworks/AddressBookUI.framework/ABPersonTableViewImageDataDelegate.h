/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPersonImageDataDelegate.h>

@class NSMutableDictionary, ABUIPerson, ABPersonTableViewDataSource;

@interface ABPersonTableViewImageDataDelegate : NSObject <ABPersonImageDataDelegate> {

	NSMutableDictionary* _currentImageData;
	ABUIPerson* _personForImageData;
	bool _hasImageChanges;
	bool _didChangePreferredPersonForImage;
	ABPersonTableViewDataSource* _dataSource;

}

@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)people;
-(id)currentImageData;
-(id)writablePeople;
-(bool)hasImageDataForPerson:(id)arg1 ;
-(id)personForImageData;
-(id)imageDataWithFormat:(int)arg1 cropRect:(CGRect*)arg2 forPerson:(id)arg3 ;
-(void)setPersonForImageData:(id)arg1 ;
-(void)refreshImageData;
-(void)removeImageDataForPerson:(id)arg1 ;
-(void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(CGRect)arg3 forPerson:(id)arg4 ;
-(id)imageDataWithFormat:(int)arg1 cropRect:(CGRect*)arg2 forPerson:(id)arg3 isRemoved:(bool*)arg4 ;
-(void)markImagesWith:(id)arg1 forPerson:(id)arg2 ;
-(id)personForImageDataExcludingPeople:(id)arg1 ;
-(void)reloadImageData;
-(void)setCurrentImageData:(id)arg1 ;
-(void)resetImageData;
-(void)imageWillSave;
-(bool)hasImageChanges;
-(void)updateRecordImages;
-(bool)didChangePreferredPersonForImage;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
@end

