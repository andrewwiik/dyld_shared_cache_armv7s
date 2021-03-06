/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearch.h>

@class NSDictionary, TIWordSearchCandidateResultSet;

@interface TIWordSearchKana : TIWordSearch {

	NSDictionary* _kanaromapat;
	NSDictionary* _kanaroma;
	unsigned long long _insertKatakanaAtIndex;
	/*^block*/ id _addressBookLoader;
	TIWordSearchCandidateResultSet* _candidateResultSet;

}

@property (nonatomic,retain) TIWordSearchCandidateResultSet * candidateResultSet;              //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
+(id)dynamicDictionaryFileNames;
-(void)dealloc;
-(id)candidateResultSet;
-(void)setCandidateResultSet:(id)arg1 ;
-(bool)_insertString:(id)arg1 input:(id)arg2 at:(unsigned long long)arg3 force:(bool)arg4 ;
-(bool)isAnalyzingJapaneseRomaji;
-(void)setInsertKatakanaAtIndex:(unsigned long long)arg1 ;
-(bool)_insertKatakana:(id)arg1 reading:(id)arg2 at:(unsigned long long)arg3 ;
-(id)makeCandidates:(id)arg1 contextString:(id)arg2 predictionEnabled:(bool)arg3 withInputManager:(id)arg4 geometryModelData:(id)arg5 ;
-(id)kanaSearchPat:(id)arg1 ;
-(id)kanaRomaPat:(id)arg1 ;
-(int)mecabraInputMethodType;
-(unsigned long long)mecabraCreationOptions;
-(void)updateMecabraState;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
@end

