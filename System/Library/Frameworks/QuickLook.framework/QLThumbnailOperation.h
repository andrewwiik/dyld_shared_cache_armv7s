/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <Foundation/NSOperation.h>

@class UIImage;

@interface QLThumbnailOperation : NSOperation {

	long long _index;
	CGSize _size;
	UIImage* _image;

}

@property (assign) long long index;              //@synthesize index=_index - In the implementation block
@property (assign) CGSize size;                  //@synthesize size=_size - In the implementation block
@property (retain) UIImage * image;              //@synthesize image=_image - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(void)setImage:(id)arg1 ;
-(id)init;
-(id)image;
-(void)setSize:(CGSize)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
@end

