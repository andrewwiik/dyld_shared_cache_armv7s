/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>

@class UITextView;

@interface TextFilePane : PSEditingPane {

	UITextView* _textView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(bool)handlesDoneButton;
@end
