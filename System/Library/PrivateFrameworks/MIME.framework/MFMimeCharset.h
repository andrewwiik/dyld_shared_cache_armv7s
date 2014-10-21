/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MFMimeCharset : NSObject {

	unsigned _encoding;
	NSString* _primaryLanguage;
	NSString* _charsetName;
	unsigned _coversLargeUnicodeSubset : 1;
	unsigned _useBase64InHeaders : 1;
	unsigned _canBeUsedForOutgoingMessages : 1;

}
+(id)preferredMimeCharset;
+(id)allMimeCharsets:(bool)arg1 ;
+(id)allMimeCharsets;
+(id)charsetForEncoding:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(id)displayName;
-(id)primaryLanguage;
-(unsigned)encoding;
-(id)initWithEncoding:(unsigned)arg1 ;
-(void)_setPrimaryLanguage:(id)arg1 ;
-(bool)canBeUsedForOutgoingMessages;
-(bool)coversLargeUnicodeSubset;
-(bool)useBase64InHeaders;
-(id)charsetName;
@end

