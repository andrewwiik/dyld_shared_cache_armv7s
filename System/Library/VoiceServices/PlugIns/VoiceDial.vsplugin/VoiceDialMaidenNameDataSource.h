/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceDial/VoiceDialNameDataSource.h>

@interface VoiceDialMaidenNameDataSource : VoiceDialNameDataSource
-(int)matchingNameType:(id)arg1 fromTypes:(unsigned long long)arg2 forPerson:(void*)arg3 ;
-(unsigned long long)personNameCount;
-(bool)getNth:(unsigned long long)arg1 name:(id*)arg2 phoneticName:(id*)arg3 ofType:(int)arg4 nameIndex:(unsigned long long*)arg5 forPerson:(void*)arg6 ;
-(bool)getName:(id*)arg1 phoneticName:(id*)arg2 atIndex:(unsigned long long)arg3 forPerson:(void*)arg4 ;
-(int)typeOfNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countOfNamesOfType:(int)arg1 ;
@end

