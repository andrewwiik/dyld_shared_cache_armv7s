/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface MCDetailsDescriptionView : UIView {

	NSArray* _information;
	NSMutableArray* _labels;
	NSMutableArray* _fields;
	CGSize* _sizes;
	unsigned long long _sizesCount;
	double _idealHeight;
	bool _usesDynamicAlignment;
	double _labelMaxWidth;

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void).cxx_destruct;
-(id)_labelFont;
-(double)heightForTableView;
-(void)_calculateHeightsForFrame:(CGRect)arg1 ;
-(id)_valueFont;
-(id)initWithFrame:(CGRect)arg1 data:(id)arg2 ;
-(void)setUsesDynamicAlignment:(bool)arg1 ;
@end

