/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface GEOVLabelLanguage : PBCodable {

	unsigned _endOffset;
	NSString* _languageLocale;
	unsigned _startOffset;

}

@property (assign,nonatomic) unsigned startOffset;                   //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) unsigned endOffset;                     //@synthesize endOffset=_endOffset - In the implementation block
@property (nonatomic,retain) NSString * languageLocale;              //@synthesize languageLocale=_languageLocale - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)endOffset;
-(unsigned)startOffset;
-(id)dictionaryRepresentation;
-(void)setStartOffset:(unsigned)arg1 ;
-(void)setEndOffset:(unsigned)arg1 ;
-(void)setLanguageLocale:(id)arg1 ;
-(id)languageLocale;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

