/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface ML3OrderingTerm : NSObject <NSCopying, NSCoding> {

	int _direction;
	NSString* _property;
	NSString* _collation;

}

@property (nonatomic,readonly) NSString * property;               //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) int direction;                     //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) NSString * collation;              //@synthesize collation=_collation - In the implementation block
-(id)initWithProperty:(id)arg1 ;
-(id)property;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)direction;
-(void).cxx_destruct;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)initWithProperty:(id)arg1 direction:(int)arg2 ;
-(id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3 ;
-(id)collation;
@end

