/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ML3DatabaseStatementRenderer : NSObject
+(id)defaultRenderer;
-(id)rollbackTranscationStatementToSavepointName:(id)arg1 ;
-(id)beginTransactionStatementWithBehaviorType:(unsigned long long)arg1 ;
-(id)commitTransactionStatement;
-(id)rollbackTranscationStatement;
-(id)savepointStatementWithName:(id)arg1 ;
-(id)savepointReleaseStatementWithName:(id)arg1 ;
-(id)insertStatementWithOptions:(id)arg1 ;
-(id)insertStatementForTableName:(id)arg1 columnNames:(id)arg2 ;
-(id)insertStatementUsingDefaultValuesForTableName:(id)arg1 ;
-(id)statementWithPrefix:(id)arg1 inParameterCount:(unsigned long long)arg2 ;
@end

