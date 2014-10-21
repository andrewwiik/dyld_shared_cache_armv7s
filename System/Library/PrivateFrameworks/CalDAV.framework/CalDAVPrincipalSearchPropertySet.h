/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject {

	NSSet* _properties;

}

@property (readonly) NSSet * stringProperties;                 //@synthesize properties=_properties - In the implementation block
@property (readonly) bool supportsPropertySearch; 
+(id)searchSetWithProperties:(id)arg1 ;
-(void)dealloc;
-(bool)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)initWithSearchProperties:(id)arg1 ;
-(bool)isEqualToPropertySet:(id)arg1 ;
-(id)initWithStringProperties:(id)arg1 ;
-(id)stringProperties;
-(bool)supportsPropertySearch;
-(bool)supportsWellKnownType:(int)arg1 ;
@end

