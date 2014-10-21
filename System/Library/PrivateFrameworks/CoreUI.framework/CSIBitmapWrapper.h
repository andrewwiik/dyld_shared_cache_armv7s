/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData;

@interface CSIBitmapWrapper : NSObject {

	CGContextRef _bitmap;
	NSData* _pixelData;

}
-(void)dealloc;
-(id)pixelData;
-(bool)getCompressedData:(id*)arg1 usedEncoding:(int*)arg2 ;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 ;
-(CGContextRef)bitmapContext;
-(id)compressedData;
-(void)finalize;
@end

