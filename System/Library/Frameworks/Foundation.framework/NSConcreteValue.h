/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSConcreteValue : NSValue {

	unsigned long long _specialFlags;
	void* typeInfo;

}
+(bool)supportsSecureCoding;
+(void)initialize;
-(const void*)_value;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)getValue:(void*)arg1 ;
-(const char*)objCType;
-(bool)isEqualToValue:(id)arg1 ;
@end

