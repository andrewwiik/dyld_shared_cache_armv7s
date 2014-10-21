/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSXPCCoding.h>

@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSMutableDictionary, NSArray, NSDictionary;

@interface SSEntity : NSObject <SSXPCCoding> {

	SSXPCConnection* _connection;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableDictionary* _localExternalValues;
	NSMutableDictionary* _localValues;
	long long _pid;
	NSArray* _dirtyLocalExternalProperties;
	NSArray* _dirtyLocalProperties;

}

@property (readonly) bool exists; 
@property (readonly) long long _persistentIdentifier; 
@property (setter=_setLocalExternalValues:,getter=_localExternalValues,copy) NSDictionary * _localExternalValues; 
@property (setter=_setLocalValues:,getter=_localValues,copy) NSDictionary * _localValues; 
@property (getter=_isManaged,readonly) bool _managed; 
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setExternalValuesMessage;
+(long long)_setValuesMessage;
-(bool)exists;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)valueForProperty:(id)arg1 ;
-(bool)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(bool)setValuesWithDictionary:(id)arg1 ;
-(id)_initWithPersistentIdentifier:(long long)arg1 ;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(bool)_isManaged;
-(bool)setExternalValuesWithDictionary:(id)arg1 ;
-(void)_resetLocalIVars;
-(id)copyXPCEncoding;
-(void)_addCachedExternalValues:(id)arg1 ;
-(void)_addCachedPropertyValues:(id)arg1 ;
-(id)_localExternalValues;
-(void)_setLocalExternalValues:(id)arg1 ;
-(id)_localValues;
-(void)_setLocalValues:(id)arg1 ;
-(void)_setDirtyCachedExternalProperties:(id)arg1 ;
-(void)_setDirtyCachedProperties:(id)arg1 ;
-(void)_getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 message:(long long)arg4 ;
-(void)getValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(long long)_persistentIdentifier;
-(void)__addCachedExternalValues:(id)arg1 ;
-(void)__addCachedPropertyValues:(id)arg1 ;
-(void)resetCachedExternalProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)valueForExternalProperty:(id)arg1 ;
-(void)resetCachedProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
@end

