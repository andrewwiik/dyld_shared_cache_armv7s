/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/NSGlyphInfo.h>

@interface NSCIDGlyphInfo : NSGlyphInfo {

	unsigned short _cid;
	unsigned long long _collection;

}
+(void)initialize;
+(id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(unsigned long long)characterIdentifier;
-(unsigned long long)characterCollection;
-(id)initWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3 ;
@end

