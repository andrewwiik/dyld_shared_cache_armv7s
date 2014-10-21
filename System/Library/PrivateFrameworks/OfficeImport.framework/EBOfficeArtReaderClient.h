/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OABReaderClient.h>

@interface EBOfficeArtReaderClient : NSObject <OABReaderClient>
+(void)readEshClientAnchor:(const XlEshClientAnchor*)arg1 targetClientData:(id)arg2 state:(id)arg3 ;
+(void)setAutoInsetForShape:(EshShape*)arg1 ;
+(void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3 ;
+(bool)escherIsFullySupported;
+(bool)tablesAreAllowed;
@end
