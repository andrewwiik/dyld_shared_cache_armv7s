/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIButton.h>

@interface TPAudioSelectionButton : UIButton {

	int _index;

}

@property (assign,nonatomic) int index;              //@synthesize index=_index - In the implementation block
-(int)index;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)setIndex:(int)arg1 ;
-(void)_audioSelectionButtonTitleRect:(CGRect*)arg1 imageRect:(CGRect*)arg2 forContentRect:(CGRect)arg3 ;
@end

