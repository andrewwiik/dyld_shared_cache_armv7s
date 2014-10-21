/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OABReaderState.h>

@class WBReader;

@interface WBOfficeArtReaderState : OABReaderState {

	WBReader* mReader;
	int mCurrentTextType;

}

@property (assign,nonatomic) WBReader * reader; 
@property (assign,nonatomic) int currentTextType; 
-(void)setReader:(id)arg1 ;
-(id)reader;
-(void)setCurrentTextType:(int)arg1 ;
-(int)currentTextType;
-(id)initWithClient:(Class)arg1 ;
@end

