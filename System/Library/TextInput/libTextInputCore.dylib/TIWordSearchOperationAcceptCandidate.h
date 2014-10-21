/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation {

	void* _mecabraCandidate;
	bool _partialCandidate;
	TIMecabraWrapper* _mecabraWrapper;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;                            //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (assign,getter=isPartialCandidate,nonatomic) bool partialCandidate;              //@synthesize partialCandidate=_partialCandidate - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)perform;
-(id)mecabraWrapper;
-(id)initWithWordSearch:(id)arg1 mecabraCandidate:(void*)arg2 isPartial:(bool)arg3 ;
-(bool)isPartialCandidate;
-(void)setMecabraWrapper:(id)arg1 ;
-(void)setPartialCandidate:(bool)arg1 ;
@end

