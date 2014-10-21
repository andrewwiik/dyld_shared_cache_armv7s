/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebUI/WBSFormAutoFillNode.h>

@class DOMNode;

@interface WBUFormAutoFillNode : NSObject <WBSFormAutoFillNode> {

	DOMNode* _domNode;

}

@property (nonatomic,readonly) DOMNode * domNode;              //@synthesize domNode=_domNode - In the implementation block
+(id)autoFillNodeWithDOMNode:(id)arg1 ;
-(void)dealloc;
-(id)initWithDOMNode:(id)arg1 ;
-(id)domNode;
-(id)initWithJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(CGRect)elementBounds;
-(bool)isHTMLInputElementAutofilled;
-(void)setHTMLInputElementAutofilled:(bool)arg1 ;
-(bool)isHTMLInputElementUserEdited;
-(bool)isHTMLTextAreaElementUserEdited;
-(id)htmlTableCellElementCellAbove;
@end
