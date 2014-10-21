/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>

@interface CPImage : CPGraphicObject {

	CPPDFImage* imageData;
	bool renderedBoundsComputed;

}
-(id)initWithPDFImage:(CPPDFImage*)arg1 ;
-(CGRect)bounds;
-(bool)isVisible;
-(long long)zOrder;
-(CGRect)renderedBounds;
-(void)accept:(id)arg1 ;
-(void)recomputeRenderedBounds;
-(CPPDFImage*)imageData;
-(id)initWithBounds:(CGRect)arg1 ;
@end
