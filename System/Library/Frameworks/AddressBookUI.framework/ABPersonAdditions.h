/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@interface ABPersonAdditions : NSObject
+(CFArrayRef)copyDefaultDisplayedProperties;
+(id)arrayByWrappingIntegersInCFArray:(CFArrayRef)arg1 ;
+(CFArrayRef)copyOptionalNameAffixProperties;
+(CFArrayRef)copyOptionalJobProperties;
+(CFArrayRef)copyOptionalProperties;
+(bool)isNameProperty:(int)arg1 ;
+(CFArrayRef)copyNamePropertiesWithCurrentNameFormat;
+(CFArrayRef)copyOptionalNameProperties;
+(CFArrayRef)copyNamePropertiesForEditing:(bool)arg1 includeRequiredNameProperties:(bool)arg2 people:(id)arg3 ;
+(CFArrayRef)newCFArrayByUnwrappingIntegersInArray:(id)arg1 ;
+(void)initializeAddressBookProperties;
+(CFArrayRef)copyNamePropertiesForEditing:(bool)arg1 includeRequiredNameProperties:(bool)arg2 person:(id)arg3 ;
+(CFArrayRef)copyAllProperties;
+(void)cloneNamePropertiesFromPerson:(void*)arg1 toPerson:(void*)arg2 ;
+(CFArrayRef)copyProperties:(CFArrayRef)arg1 excludingProperties:(CFArrayRef)arg2 ;
+(CFArrayRef)copyNamePropertiesForEditing:(bool)arg1 person:(id)arg2 ;
+(void)person:(void*)arg1 allowsLabels:(bool*)arg2 customLabels:(bool*)arg3 forProperty:(int)arg4 ;
@end
