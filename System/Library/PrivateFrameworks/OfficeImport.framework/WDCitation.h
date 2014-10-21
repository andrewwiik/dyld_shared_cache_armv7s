/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDDocument, NSString, NSMutableArray;

@interface WDCitation : NSObject {

	WDDocument* mDocument;
	NSString* mSourceType;
	NSMutableArray* mAuthors;
	NSString* mYear;
	NSMutableArray* mTitles;
	NSMutableArray* mUrls;
	NSString* mPeriodicalTitle;
	NSString* mVolume;
	NSString* mNumber;
	NSString* mSection;
	NSString* mPubDate;
	NSString* mPages;

}

@property (nonatomic,retain) NSString * year; 
@property (nonatomic,retain) NSMutableArray * authors; 
@property (nonatomic,retain) NSString * sourceType; 
@property (nonatomic,retain) NSMutableArray * titles; 
@property (nonatomic,retain) NSString * periodicalTitle; 
@property (nonatomic,retain) NSString * volume; 
@property (nonatomic,retain) NSString * number; 
@property (nonatomic,retain) NSString * section; 
@property (nonatomic,retain) NSString * pubDate; 
@property (nonatomic,retain) NSMutableArray * urls; 
@property (nonatomic,retain) NSString * pages; 
-(void)dealloc;
-(void)setTitles:(id)arg1 ;
-(id)section;
-(id)titles;
-(id)sourceType;
-(void)setSourceType:(id)arg1 ;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(id)year;
-(void)setYear:(id)arg1 ;
-(id)number;
-(void)setSection:(id)arg1 ;
-(id)authors;
-(void)setAuthors:(id)arg1 ;
-(id)periodicalTitle;
-(void)setPeriodicalTitle:(id)arg1 ;
-(void)setNumber:(id)arg1 ;
-(id)pubDate;
-(void)setPubDate:(id)arg1 ;
-(id)pages;
-(void)setPages:(id)arg1 ;
-(id)urls;
-(void)setUrls:(id)arg1 ;
-(id)volume;
-(void)setVolume:(id)arg1 ;
@end

