/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFPGraphicsState;

@interface MFPGraphicsContainer : NSObject {

	MFPGraphicsState* mParentGraphicsState;
	CGAffineTransform mContainerTransform;

}
-(void)dealloc;
-(id).cxx_construct;
-(id)initWithParentGraphicsState:(id)arg1 containerTransform:(CGAffineTransform)arg2 ;
-(id)parentGraphicsState;
-(CGAffineTransform)containerTransform;
@end

