/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBPlaceholder : NSObject
+(int)placeholderTypeFromTextType:(int)arg1 ;
+(int)readPlaceholderType:(int)arg1 ;
+(int)readPlaceholderSize:(int)arg1 ;
+(int)readPlaceholderOrientation:(int)arg1 ;
+(bool)isBodyPlaceholder:(int)arg1 ;
+(bool)isTitlePlaceholder:(int)arg1 ;
+(void)writePlaceholder:(id)arg1 toPlaceholderAtom:(PptOEPlaceholderAtom*)arg2 isMaster:(bool)arg3 isNotes:(bool)arg4 ;
@end

