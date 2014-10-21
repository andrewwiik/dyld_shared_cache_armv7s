/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class WDParagraph, OIXMLElement;

@interface WMParagraphMapper : CMMapper {

	WDParagraph* wdParagraph;
	WMParagraphMapper* mCurrentMapper;
	OIXMLElement* mActiveNode;
	bool mIsDeleted;

}
+(void)mapPlaceholderAt:(id)arg1 rect:(CGRect)arg2 withState:(id)arg3 ;
-(bool)isTextFrame;
-(bool)containsOfficeArt;
-(bool)isCollapsable:(id)arg1 ;
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)activeNode;
-(void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3 ;
-(void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3 ;
-(id)runAtIndex:(int)arg1 ;
-(void)mapParagraphBodyWithState:(id)arg1 ;
-(id)initWithBlock:(id)arg1 parent:(id)arg2 ;
@end

