/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class UIImage;

@interface SUScriptCanvasResult : NSObject {

	UIImage* _image;
	CGPathRef _path;

}

@property (nonatomic,readonly) UIImage * canvasImage;              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGPathRef canvasPath;               //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(id)canvasImage;
-(id)_initWithCanvas:(id)arg1 ;
-(CGPathRef)canvasPath;
@end

