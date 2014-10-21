/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class NSString, TIWordSearchCandidateResultSet, NSArray, TIWordSearch;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation {

	bool _predictionEnabled;
	NSString* _inputString;
	TIWordSearchCandidateResultSet* _results;
	id _target;
	NSArray* _geometryModelData;
	SEL _action;
	TIWordSearch* _wordSearch;
	unsigned long long _autocapitalizationType;

}

@property (nonatomic,readonly) NSString * inputString;                                 //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,retain) TIWordSearchCandidateResultSet * results;                 //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) id target;                                              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                                             //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) bool predictionEnabled;                                 //@synthesize predictionEnabled=_predictionEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) NSArray * geometryModelData;                            //@synthesize geometryModelData=_geometryModelData - In the implementation block
@property (retain) TIWordSearch * wordSearch;                                          //@synthesize wordSearch=_wordSearch - In the implementation block
-(void)dealloc;
-(SEL)action;
-(id)target;
-(unsigned long long)autocapitalizationType;
-(id)inputString;
-(void)perform;
-(id)results;
-(void)setResults:(id)arg1 ;
-(bool)predictionEnabled;
-(void)checkForCachedResults;
-(id)wordSearch;
-(void)completeSearchOnMainThreadWithResults:(id)arg1 ;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 predictionEnabled:(bool)arg3 autocapitalizationType:(unsigned long long)arg4 target:(id)arg5 action:(SEL)arg6 geometryModelData:(id)arg7 ;
-(id)geometryModelData;
-(void)setWordSearch:(id)arg1 ;
@end
