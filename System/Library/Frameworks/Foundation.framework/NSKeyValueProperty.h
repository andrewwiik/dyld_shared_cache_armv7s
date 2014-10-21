/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSKeyValueContainerClass, NSString;

@interface NSKeyValueProperty : NSObject <NSCopying> {

	NSKeyValueContainerClass* _containerClass;
	NSString* _keyPath;

}
-(id)dependentValueKeyOrKeysIsASet:(bool*)arg1 ;
-(void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(bool)arg3 ;
-(Class)isaForAutonotifying;
-(void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(bool)arg3 ;
-(id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1 ;
-(bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1 ;
-(void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(bool)arg4 forwardingValues:(SCD_Struct_NS33)arg5 ;
-(id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(bool*)arg2 ;
-(bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(bool)arg4 forwardingValues:(SCD_Struct_NS33*)arg5 ;
-(id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(CFSetRef)arg3 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)keyPath;
@end
