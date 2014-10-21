/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMHTMLCollection;

@interface DOMHTMLFormElement : DOMHTMLElement

@property (copy) NSString * acceptCharset; 
@property (copy) NSString * action; 
@property (copy) NSString * enctype; 
@property (copy) NSString * encoding; 
@property (copy) NSString * method; 
@property (copy) NSString * name; 
@property (copy) NSString * target; 
@property (readonly) DOMHTMLCollection * elements; 
@property (readonly) int length; 
-(int)structuralComplexityContribution;
-(int)length;
-(void)setTarget:(id)arg1 ;
-(id)action;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)target;
-(void)setAction:(id)arg1 ;
-(id)elements;
-(bool)autocorrect;
-(void)reset;
-(id)method;
-(id)encoding;
-(bool)checkValidity;
-(id)acceptCharset;
-(void)setAcceptCharset:(id)arg1 ;
-(id)autocomplete;
-(void)setAutocomplete:(id)arg1 ;
-(id)enctype;
-(void)setEnctype:(id)arg1 ;
-(void)setEncoding:(id)arg1 ;
-(void)setMethod:(id)arg1 ;
-(bool)noValidate;
-(void)setNoValidate:(bool)arg1 ;
-(void)setAutocorrect:(bool)arg1 ;
-(id)autocapitalize;
-(void)setAutocapitalize:(id)arg1 ;
-(void)submit;
@end

