/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class ASAsset, NSString;

@interface _UIDefinitionDictionary : NSObject {

	DCSDictionaryRef _dictionary;
	bool _activated;
	ASAsset* _rawAsset;
	NSString* _definitionLanguage;

}

@property (readonly) ASAsset * rawAsset;                              //@synthesize rawAsset=_rawAsset - In the implementation block
@property (readonly) NSString * localizedDictionaryName; 
@property (readonly) NSString * definitionLanguage;                   //@synthesize definitionLanguage=_definitionLanguage - In the implementation block
@property (assign) bool activated;                                    //@synthesize activated=_activated - In the implementation block
-(void)dealloc;
-(id)description;
-(id)localizedDictionaryName;
-(id)rawAsset;
-(id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2 ;
-(id)_shortHTMLDefinitionForTerm:(id)arg1 ;
-(id)_attributedDefinitionForTerm:(id)arg1 ;
-(id)_fullHTMLDefinitionForTerm:(id)arg1 ;
-(bool)activated;
-(id)initWithAsset:(id)arg1 ;
-(bool)_hasDefinitionForTerm:(id)arg1 ;
-(id)_definitionValueForTerm:(id)arg1 ;
-(id)definitionLanguage;
-(void)setActivated:(bool)arg1 ;
@end

