/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAObjects-Structs.h>
#import <SAObjects/AceObject.h>

@protocol AceObject <NSObject,NSCopying,NSMutableCopying,NSSecureCoding>
@required
-(id)groupIdentifier;
-(id)init;
-(id)initWithDictionary:(id)arg1;
-(id)dictionary;
-(id)copyWithZone:(NSZone)arg1;
-(id)properties;
-(id)mutableCopyWithZone:(NSZone)arg1;
-(id)initWithDictionary:(id)arg1 context:(id)arg2;
-(id)encodedClassName;
@end


@class NSString, NSData, NSMutableDictionary;

@interface AceObject : NSObject <AceObject> {

	NSString* _aceId;
	NSString* _refId;
	NSData* _plistData;
	NSMutableDictionary* _dict;

}

@property (nonatomic,copy) NSString * aceId;                            //@synthesize aceId=_aceId - In the implementation block
@property (nonatomic,copy) NSString * refId;                            //@synthesize refId=_refId - In the implementation block
@property (nonatomic,readonly) NSData * plistData;                      //@synthesize plistData=_plistData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dict;              //@synthesize dict=_dict - In the implementation block
+(bool)supportsSecureCoding;
+(id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2 ;
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)_newAceObjectWithMutableDictionary:(id)arg1 ;
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2 ;
+(id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3 ;
+(id)dictionaryArrayWithAceObjectArray:(id)arg1 ;
+(id)dictionaryWithAceObjectDictionary:(id)arg1 ;
+(id)aceObjectWithPlistData:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)groupIdentifier;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)properties;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(id)plistData;
-(id)dict;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)aceId;
-(void)setAceId:(id)arg1 ;
-(id)refId;
-(void)setRefId:(id)arg1 ;
-(id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3 ;
-(id)_initWithMutableDictionary:(id)arg1 ;
-(void)_deserializeFromPlistData;
-(id)topLevelPropertyForKey:(id)arg1 ;
-(id)_dict;
-(void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(long long)arg3 withPrefixes:(id)arg4 ;
-(void)setTopLevelProperty:(id)arg1 forKey:(id)arg2 ;
-(bool)hasArrayForPropertyForKey:(id)arg1 ;
-(void)forceEagerDeserialization;
@end
