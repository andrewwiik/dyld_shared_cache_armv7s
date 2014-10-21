/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {

	WebTextIteratorPrivate* _private;

}
+(id)dd_iteratorForDocument:(id)arg1 ;
-(bool)dd_checkCurrentRangeAgainstString:(CFStringRef)arg1 ;
-(id)dd_collectDDRangesForQuery:(_DDScanQuery*)arg1 forResults:(id)arg2 ;
-(_DDScanQuery*)dd_newQueryStopRange:(id*)arg1 ;
-(id)dd_doUrlificationForQuery:(_DDScanQuery*)arg1 forResults:(id)arg2 referenceDate:(id)arg3 document:(id)arg4 DOMWasModified:(bool*)arg5 relevantResults:(id*)arg6 URLificationBlock:(/*^block*/ id)arg7 ;
-(id)currentText;
-(id)currentNode;
-(id)initWithRange:(id)arg1 ;
-(bool)atEnd;
-(unsigned long long)currentTextLength;
-(const unsigned short*)currentTextPointer;
-(id)currentRange;
-(void)advance;
-(void)dealloc;
@end

