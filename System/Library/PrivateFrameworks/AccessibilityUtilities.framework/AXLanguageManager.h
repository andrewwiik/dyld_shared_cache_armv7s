/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AXDialectMap, NSArray, NSCharacterSet, NSLocale, NSString;

@interface AXLanguageManager : NSObject {

	AXDialectMap* _dialectForSystemLanguage;
	AXDialectMap* _dialectForCurrentLocale;
	NSArray* _langMaps;
	NSCharacterSet* _commonCharacters;
	NSLocale* _userLocale;

}

@property (nonatomic,retain) NSArray * langMaps;                                   //@synthesize langMaps=_langMaps - In the implementation block
@property (nonatomic,readonly) NSString * systemLanguageID; 
@property (nonatomic,copy) NSLocale * userLocale;                                  //@synthesize userLocale=_userLocale - In the implementation block
@property (nonatomic,retain) NSCharacterSet * commonCharacters;                    //@synthesize commonCharacters=_commonCharacters - In the implementation block
@property (assign,nonatomic) AXDialectMap * dialectForSystemLanguage; 
@property (assign,nonatomic) AXDialectMap * dialectForCurrentLocale; 
+(id)sharedInstance;
+(id)nonlocalizedNameForLanguage:(id)arg1 ;
+(id)commonPunctuationCharacters;
+(id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1 ;
+(id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)basicDescription;
-(id)userLocale;
-(bool)isCharacterCommon:(unsigned short)arg1 ;
-(void)setUserLocale:(id)arg1 ;
-(void)_handleUserLocaleDidChange:(id)arg1 ;
-(void)setCommonCharacters:(id)arg1 ;
-(id)_loadLangMaps;
-(void)setLangMaps:(id)arg1 ;
-(void)setDialectForSystemLanguage:(id)arg1 ;
-(void)setDialectForCurrentLocale:(id)arg1 ;
-(id)langMaps;
-(id)dialectForSystemLanguage;
-(id)dialectForCurrentLocale;
-(void)updateCachedDialects;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)_preferredLanguageIDsFromUserSelectedKeyboards;
-(id)dialectForLanguageID:(id)arg1 ;
-(id)commonCharacters;
-(id)systemLanguageID;
-(id)characterSetForRanges:(id)arg1 ;
-(id)dialectThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)ambiguousDialectsFromUserKeyboardPreferences;
-(id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2 ;
@end

