/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/TextInput/TextInput_sk.bundle/TextInput_sk
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_sk/TextInput_sk-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_sk : TIKeyboardInputManagerZephyr
-(bool)shouldAddModifierSymbolsToWordCharacters;
-(TIInputManagerZephyr*)initImplementation;
-(bool)doesComposeText;
-(id)internalStringToExternal:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)nonstopPunctuationCharacters;
-(void)updateLayoutKeysIfNeeded;
@end
