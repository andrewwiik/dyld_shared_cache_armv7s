/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForProperty:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 keypath:(id)arg4 inContext:(id)arg5 ;
-(id)_generateCountClauseForToManyKeyPathExpression:(id)arg1 inContext:(id)arg2 ;
@end

