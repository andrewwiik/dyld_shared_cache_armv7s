/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@class WBSFormMetadataControllerPrivate;

@interface WBSFormMetadataController : NSObject {

	WBSFormMetadataControllerPrivate* _private;

}
-(void)dealloc;
-(id)init;
-(void)recursivelyClearMetadataForFrames:(id)arg1 ;
-(void)getMetadataForAllFormsInPageWithMainFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id*)arg3 formMetadata:(id*)arg4 ;
-(void)autoFillForm:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id*)arg3 formMetadata:(id*)arg4 canAutoComplete:(bool*)arg5 ;
-(void)focusField:(id)arg1 inForm:(double)arg2 inFrame:(id)arg3 ;
-(void)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3 ;
-(id)formElementWithFormID:(double)arg1 inFrame:(id)arg2 ;
-(id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(unsigned long long)arg3 ;
-(id)formAutoFillNodeForField:(id)arg1 form:(double)arg2 inFrame:(id)arg3 ;
-(id)formAutoFillNodeForJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)clearScriptWorld;
-(bool)formClassificationShouldIgnoreAutocompleteAttribute;
-(void)autoFillFormSynchronously:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(void)autoFillForm:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3 fillSynchronously:(bool)arg4 selectFieldWithNameAfterFilling:(id)arg5 ;
-(void)clearMetadataForFrame:(id)arg1 ;
-(FrameMetadata*)metadataForFrame:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)recursivelyCollectMetadataInFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id)arg3 formMetadata:(id)arg4 ;
-(unsigned long long)userEditedTextControlCountInArray:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 expectTextFieldsRatherThanTextAreas:(bool)arg3 ;
-(void)countUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long*)arg2 textAreas:(unsigned long long*)arg3 ;
-(void)recursivelyCountUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long*)arg2 textAreas:(unsigned long long*)arg3 ;
-(void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 ;
-(void)passwordFieldBlurredInFrame:(id)arg1 ;
-(void)creditCardFieldBlurredInFrame:(id)arg1 ;
-(void)usernameFieldBlurredInFrame:(id)arg1 ;
-(void)passwordFieldTextDidChange:(id)arg1 inFrame:(id)arg2 ;
-(void)autoFillFormAsynchronously:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3 selectFieldWithNameAfterFilling:(id)arg4 ;
-(void)removeAutoFillHighlightFromField:(id)arg1 form:(double)arg2 inFrame:(id)arg3 ;
-(void)selectRange:(NSRange)arg1 inField:(id)arg2 form:(double)arg3 inFrame:(id)arg4 ;
-(id)metadataForTextField:(id)arg1 form:(double)arg2 inFrame:(id)arg3 afterReplacingRange:(NSRange)arg4 withString:(id)arg5 andSelectingTailStartingAt:(unsigned long long)arg6 ;
-(bool)pageWithMainFrameMeetsEditedFormTextWarningCriteria:(id)arg1 ;
-(void)textFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)textFieldBlurred:(id)arg1 inFrame:(id)arg2 ;
-(void)textFieldTextDidChange:(id)arg1 inFrame:(id)arg2 ;
@end
