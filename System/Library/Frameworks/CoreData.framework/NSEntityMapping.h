/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSString, NSData, NSExpression, NSMutableArray;

@interface NSEntityMapping : NSObject {

	void* _reserved;
	void* _reserved1;
	NSDictionary* _mappingsByName;
	NSString* _name;
	unsigned long long _mappingType;
	NSString* _sourceEntityName;
	NSData* _sourceEntityVersionHash;
	NSString* _destinationEntityName;
	NSData* _destinationEntityVersionHash;
	NSExpression* _sourceExpression;
	NSDictionary* _userInfo;
	NSString* _entityMigrationPolicyClassName;
	NSMutableArray* _attributeMappings;
	NSMutableArray* _relationshipMappings;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedEntityMapping : 31;
	}  _entityMappingFlags;

}
+(void)initialize;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(void)_setIsEditable:(bool)arg1 ;
-(id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2 ;
-(id)_mappingsByName;
-(id)_migrationPolicy;
-(void)_addAttributeMapping:(id)arg1 ;
-(void)_addRelationshipMapping:(id)arg1 ;
-(bool)_hasInferredMappingNeedingValidation;
-(bool)isEditable;
-(unsigned long long)mappingType;
-(id)sourceEntityName;
-(id)destinationEntityName;
-(void)setSourceExpression:(id)arg1 ;
-(void)setAttributeMappings:(id)arg1 ;
-(void)setRelationshipMappings:(id)arg1 ;
-(void)setSourceEntityName:(id)arg1 ;
-(void)setSourceEntityVersionHash:(id)arg1 ;
-(void)setDestinationEntityName:(id)arg1 ;
-(void)setDestinationEntityVersionHash:(id)arg1 ;
-(void)setMappingType:(unsigned long long)arg1 ;
-(id)sourceEntityVersionHash;
-(id)destinationEntityVersionHash;
-(id)sourceExpression;
-(id)entityMigrationPolicyClassName;
-(id)attributeMappings;
-(id)relationshipMappings;
-(void)setEntityMigrationPolicyClassName:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)userInfo;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setUserInfo:(id)arg1 ;
@end

