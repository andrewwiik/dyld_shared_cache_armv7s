/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/APFormatter.h>

@interface UTF8Formatter : APFormatter {

	unsigned long long _maxByteCount;

}
+(id)afpSet;
+(id)utf8Formatter:(unsigned long long)arg1 ;
+(id)utf8Formatter;
+(id)utf8FormatterWithMaxByteCount:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 ;
+(id)afpFormatter:(unsigned long long)arg1 ;
-(bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(id)initWithMaxByteCount:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initAFPFormatterWithLength:(unsigned long long)arg1 ;
-(void)setMaxByteCount:(unsigned long long)arg1 ;
-(unsigned long long)maxByteCount;
@end

