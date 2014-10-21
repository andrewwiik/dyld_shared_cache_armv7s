/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManagerChineseMecabra.h>

@interface TIKeyboardInputManagerTraditionalZhuyin : TIKeyboardInputManagerChineseMecabra {

	bool _isDynamic;

}
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)initialSelectedIndex;
-(bool)acceptInputString:(id)arg1 ;
-(id)keyEventMap;
-(id)inputsToReject;
-(bool)shouldSearchCompletionForSubstrings;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(id)phoneticSortingMethod;
-(int)inputMethodType;
-(bool)shouldInsertFirstToneMark;
-(TIInputManagerZephyr*)initImplementation;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(void)didAcceptCandidate:(id)arg1 ;
@end

