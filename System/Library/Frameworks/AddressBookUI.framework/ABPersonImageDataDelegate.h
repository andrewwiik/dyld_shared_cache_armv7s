/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPersonImageDataDelegate
@optional
-(bool)shouldUseSourceTypeSpecificStrings;

@required
-(id)people;
-(id)writablePeople;
-(bool)hasImageDataForPerson:(id)arg1;
-(id)personForImageData;
-(id)imageDataWithFormat:(int)arg1 cropRect:(CGRect*)arg2 forPerson:(id)arg3;
-(void)setPersonForImageData:(id)arg1;
-(void)refreshImageData;
-(void)removeImageDataForPerson:(id)arg1;
-(void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(CGRect)arg3 forPerson:(id)arg4;
-(void)reloadImageData;
-(void)resetImageData;
-(void)imageWillSave;
-(bool)hasImageChanges;
-(void)updateRecordImages;
-(bool)didChangePreferredPersonForImage;
@end

