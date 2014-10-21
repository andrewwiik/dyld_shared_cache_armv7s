/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <GeoServices/NSXMLParserDelegate.h>

@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate> {

	CGPoint _p[4];
	CGPathRef _path;
	bool _parserError;

}

@property (@dynamic,readonly) CGPathRef path; 
@property (readonly) bool parserError;                     //@synthesize parserError=_parserError - In the implementation block
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(bool)parserError;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(CGPathRef)path;
@end

