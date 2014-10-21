/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSFastEnumeration.h>

@interface NSKnownKeysMappingStrategy : NSObject <NSSecureCoding, NSFastEnumeration>
+(id)alloc;
+(id)allocWithZone:(NSZone)arg1 ;
-(id)initForKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id*)keys;
-(id)initForKeys:(id)arg1 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(unsigned long long)fastIndexForKnownKey:(id)arg1 ;
@end
