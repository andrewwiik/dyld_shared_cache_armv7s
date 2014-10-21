/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/RTF_OIXMLNode.h>

@class RTF_OIXMLElement, NSString;

@interface RTF_OIXMLDocument : RTF_OIXMLNode {

	RTF_OIXMLElement* _rootElement;
	NSString* _version;
	NSString* _encoding;

}
-(id)copyMutableXMLString;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setVersion:(id)arg1 ;
-(id)rootElement;
-(id)openingTagString;
-(id)XMLString;
-(id)closingTagString;
-(id)initWithRootElement:(id)arg1 ;
-(void)setCharacterEncoding:(id)arg1 ;
-(void)setRootElement:(id)arg1 ;
-(id)contentString;
@end

