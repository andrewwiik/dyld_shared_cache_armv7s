/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADParagraph;

@interface PMParagraphMapper : CMMapper {

	OADParagraph* mParagraph;

}
-(id)copyParagraphStyleWithState:(id)arg1 isFirstParagraph:(bool)arg2 ;
-(void)addEndCharacterStyleToStyle:(id)arg1 ;
-(int)firstTextRunFontSize;
-(id)fontScheme;
-(id)initWithOadParagraph:(id)arg1 parent:(id)arg2 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 isFirstParagraph:(bool)arg3 ;
@end

