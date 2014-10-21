/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLRelationship, NSString;

@interface NSSQLJoinIntermediate : NSSQLIntermediate {

	NSSQLRelationship* _relationship;
	NSString* _sourceAlias;
	NSString* _destinationAlias;
	NSString* _correlationAlias;
	unsigned long long _type;
	bool _direct;

}
+(id)createToOneJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4 ;
+(id)createToManyJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4 ;
+(id)createManyToManyJoinIntermediateForProperty:(id)arg1 direct:(bool)arg2 lastStep:(id)arg3 inScope:(id)arg4 context:(id)arg5 ;
+(id)createJoinIntermediatesForKeypath:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 forScope:(id)arg4 inFetchIntermediate:(id)arg5 inContext:(id)arg6 ;
-(id)relationship;
-(id)destinationEntity;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)sourceEntity;
-(void)setJoinType:(unsigned long long)arg1 ;
-(id)destinationAlias;
-(id)initForRelationship:(id)arg1 sourceAlias:(id)arg2 destinationAlias:(id)arg3 correlationAlias:(id)arg4 direct:(bool)arg5 inScope:(id)arg6 ;
-(id)sourceAlias;
-(void)setSourceAlias:(id)arg1 ;
-(id)_generateToOneSQLStringInContext:(id)arg1 ;
-(id)_generateToManySQLStringInContext:(id)arg1 ;
-(id)_generateManyToManySQLStringInContext:(id)arg1 ;
-(bool)isDirect;
-(void)setDirect:(bool)arg1 ;
-(void)setDestinationAlias:(id)arg1 ;
-(id)correlationAlias;
-(bool)joinType;
-(void)dealloc;
-(id)description;
@end

