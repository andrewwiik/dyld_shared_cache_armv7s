/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueProperty.h>

@class NSString, NSKeyValueUnnestedProperty;

@interface NSKeyValueNestedProperty : NSKeyValueProperty {

	NSString* _relationshipKey;
	NSString* _keyPathFromRelatedObject;
	NSKeyValueUnnestedProperty* _relationshipProperty;
	NSString* _keyPathWithoutOperatorComponents;
	bool _isAllowedToResultInForwarding;
	id _dependentValueKeyOrKeys;
	bool _dependentValueKeyOrKeysIsASet;

}
-(id)dependentValueKeyOrKeysIsASet:(bool*)arg1 ;
-(void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(bool)arg3 ;
-(void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(bool)arg3 ;
-(bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1 ;
-(void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(bool)arg4 forwardingValues:(SCD_Struct_NS33)arg5 ;
-(bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(bool)arg4 forwardingValues:(SCD_Struct_NS33*)arg5 ;
-(Class)_isaForAutonotifying;
-(id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(bool*)arg2 ;
-(id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(void)_givenPropertiesBeingInitialized:(CFSetRef)arg1 getAffectingProperties:(id)arg2 ;
-(void)_addDependentValueKey:(id)arg1 ;
-(id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 firstDotIndex:(unsigned long long)arg3 propertiesBeingInitialized:(CFSetRef)arg4 ;
-(void)dealloc;
-(id)description;
@end
