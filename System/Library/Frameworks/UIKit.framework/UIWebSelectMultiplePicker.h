/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPickerView.h>
#import <UIKit/UIWebFormControl.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol UIWebSelectedItemPrivate;
@class DOMHTMLSelectElement, NSArray;

@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {

	DOMHTMLSelectElement* _selectionNode;
	NSArray* _cachedItems;
	<UIWebSelectedItemPrivate>* _singleSelectionItem;
	unsigned long long _singleSelectionIndex;
	double _fontSize;
	double _maximumTextWidth;
	long long _textAlignment;
	double _layoutWidth;

}

@property (nonatomic,retain) DOMHTMLSelectElement * _selectionNode;                          //@synthesize selectionNode=_selectionNode - In the implementation block
@property (nonatomic,retain) NSArray * _cachedItems;                                         //@synthesize cachedItems=_cachedItems - In the implementation block
@property (nonatomic,retain) <UIWebSelectedItemPrivate> * _singleSelectionItem;              //@synthesize singleSelectionItem=_singleSelectionItem - In the implementation block
-(void)dealloc;
-(void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(bool)arg4 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(void)layoutSubviews;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)set_selectionNode:(id)arg1 ;
-(void)set_cachedItems:(id)arg1 ;
-(void)set_singleSelectionItem:(id)arg1 ;
-(id)_selectionNode;
-(int)_itemIndexForRowIndex:(int)arg1 ;
-(id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(bool)arg5 ;
-(id)_cachedItems;
-(id)_singleSelectionItem;
@end

