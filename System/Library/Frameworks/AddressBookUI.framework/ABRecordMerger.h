/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@interface ABRecordMerger : NSObject
+(void)_addValue:(void*)arg1 withProperty:(int)arg2 toExistingValues:(CFSetRef)arg3 ;
+(bool)_addMultiValueEntry:(void*)arg1 atIndex:(long long)arg2 toMultiValue:(void*)arg3 withProperty:(int)arg4 existingValues:(CFSetRef)arg5 ;
+(bool)_propertiesArray:(id)arg1 containsProperty:(int)arg2 ;
+(bool)mergeMultiValueProperty:(int)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3 ;
+(bool)_mergeSingleValueProperty:(int)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3 ;
+(void)mergeVCardRecord:(void*)arg1 withProperties:(CFArrayRef)arg2 intoRecord:(void*)arg3 ;
@end

