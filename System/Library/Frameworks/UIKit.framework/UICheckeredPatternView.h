/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface UICheckeredPatternView : UIView {

	UIColor* m_patternColor;
	UIColor* m_checkerColor;
	double m_scale;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(bool)_canDrawContent;
-(void)updatePatternColor;
-(id)checkerColor;
-(void)setCheckerColor:(id)arg1 ;
@end

