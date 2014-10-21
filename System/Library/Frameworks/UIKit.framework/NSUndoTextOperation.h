/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UITextInputController;

@interface NSUndoTextOperation : NSObject {

	NSRange _affectedRange;
	UITextInputController* _inputController;

}

@property (assign,nonatomic) NSRange affectedRange;                                //@synthesize affectedRange=_affectedRange - In the implementation block
@property (assign,nonatomic) UITextInputController * inputController;              //@synthesize inputController=_inputController - In the implementation block
-(void)setInputController:(id)arg1 ;
-(id)inputController;
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 ;
-(void)undoRedo;
-(bool)supportsCoalescing;
-(NSRange)affectedRange;
-(void)setAffectedRange:(NSRange)arg1 ;
@end
