/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSExpression, NSSQLFetchIntermediate, NSSQLEntity, NSMutableString, NSString, NSSQLColumn, NSMutableArray;

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {

	NSExpression* _trailingKeypath;
	NSExpression* _variableExpression;
	NSSQLFetchIntermediate* _fetchIntermediate;
	NSSQLEntity* _selectFromEntity;
	NSMutableString* _selectFromCorrelationTarget;
	NSString* _selectEntityAlias;
	NSSQLEntity* _governingEntityForVariable;
	NSSQLColumn* _variableColumn;
	NSString* _variableAlias;
	NSSQLColumn* _targetColumn;
	NSString* _targetAlias;
	NSMutableArray* _keypathsToPromote;
	bool _useDistinct;
	bool _isCount;
	bool _hasTrailingFunction;
	bool _onlyTrailIsCount;
	bool _subqueryHasTruePredicate;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(bool)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(void)selectDistinct;
-(id)initWithExpression:(id)arg1 trailingKeypath:(id)arg2 inScope:(id)arg3 ;
-(id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2 ;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1 ;
-(bool)_isKeypathScopedToSubquery:(id)arg1 ;
-(void)_setVariableColumn:(id)arg1 ;
-(void)_createCollectionJoinsForFetchInContext:(id)arg1 ;
-(void)_createSelectClauseInFetchWithContext:(id)arg1 ;
-(void)dealloc;
@end

