/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInputTokenizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {

	UIResponder<UITextInput>* _textInput;

}
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3 ;
-(bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(long long)_indexForTextPosition:(id)arg1 ;
-(bool)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2 ;
-(NSRange)_getClosestTokenRangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(bool)arg3 ;
-(id)initWithTextInput:(id)arg1 ;
@end

