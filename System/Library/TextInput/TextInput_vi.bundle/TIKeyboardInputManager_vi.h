/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/TextInput/TextInput_vi.bundle/TextInput_vi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_vi/TextInput_vi-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_vi : TIKeyboardInputManagerZephyr {

	void* m_transliterator;
	bool m_compositionDisabled;
	bool m_useInternalIndex;

}
+(void)setupUnikey;
+(void)cleanupUnikey;
-(void)setInput:(id)arg1 ;
-(void)dealloc;
-(void)clearInput;
-(unsigned)inputIndex;
-(void)setInputIndex:(unsigned)arg1 ;
-(void*)createTransliterator;
-(id)decomposeTelex:(id)arg1 ;
-(bool)handleThisCharacter:(unsigned short)arg1 ;
-(bool)doesComposeText;
-(id)initWithConfig:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(unsigned long long)deleteLengthForString:(id)arg1 ;
-(unsigned)externalIndexToInternal:(unsigned)arg1 ;
-(unsigned)internalIndexToExternal:(unsigned)arg1 ;
-(void)acceptInput;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(bool)arg5 ;
-(void)inputLocationChanged;
@end
