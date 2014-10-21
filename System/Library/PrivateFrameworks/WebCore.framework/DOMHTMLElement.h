/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMElement.h>

@class NSString, DOMHTMLCollection;

@interface DOMHTMLElement : DOMElement

@property (copy) NSString * idName; 
@property (copy) NSString * title; 
@property (copy) NSString * lang; 
@property (copy) NSString * dir; 
@property (assign) int tabIndex; 
@property (copy) NSString * accessKey; 
@property (copy) NSString * innerHTML; 
@property (copy) NSString * innerText; 
@property (copy) NSString * outerHTML; 
@property (copy) NSString * outerText; 
@property (readonly) DOMHTMLCollection * children; 
@property (copy) NSString * contentEditable; 
@property (readonly) bool isContentEditable; 
@property (readonly) NSString * titleDisplayString; 
-(int)structuralComplexityContribution;
-(int)scrollXOffset;
-(int)scrollYOffset;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(bool)arg3 ;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 ;
-(void)absolutePosition:(int*)arg1 :(int*)arg2 :(int*)arg3 :(int*)arg4 ;
-(void)setHidden:(bool)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setContentEditable:(id)arg1 ;
-(void)setInnerHTML:(id)arg1 ;
-(id)innerHTML;
-(id)innerText;
-(bool)isContentEditable;
-(id)idName;
-(bool)hidden;
-(id)accessKey;
-(void)setAccessKey:(id)arg1 ;
-(void)click;
-(id)dir;
-(void)setDir:(id)arg1 ;
-(void)setIdName:(id)arg1 ;
-(id)lang;
-(void)setLang:(id)arg1 ;
-(bool)translate;
-(void)setTranslate:(bool)arg1 ;
-(int)tabIndex;
-(void)setTabIndex:(int)arg1 ;
-(bool)draggable;
-(void)setDraggable:(bool)arg1 ;
-(id)webkitdropzone;
-(void)setWebkitdropzone:(id)arg1 ;
-(void)setInnerText:(id)arg1 ;
-(id)outerHTML;
-(void)setOuterHTML:(id)arg1 ;
-(id)outerText;
-(void)setOuterText:(id)arg1 ;
-(id)children;
-(id)contentEditable;
-(bool)spellcheck;
-(void)setSpellcheck:(bool)arg1 ;
-(id)titleDisplayString;
-(id)insertAdjacentElement:(id)arg1 element:(id)arg2 ;
-(void)insertAdjacentHTML:(id)arg1 html:(id)arg2 ;
-(void)insertAdjacentText:(id)arg1 text:(id)arg2 ;
@end

