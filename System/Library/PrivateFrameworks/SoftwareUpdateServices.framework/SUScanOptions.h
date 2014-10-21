/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSMutableSet, NSSet;

@interface SUScanOptions : NSObject <NSSecureCoding> {

	NSString* _identifier;
	bool _forced;
	NSMutableSet* _types;

}

@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isForced,nonatomic) bool forced;              //@synthesize forced=_forced - In the implementation block
@property (nonatomic,retain) NSSet * types;                            //@synthesize types=_types - In the implementation block
+(bool)supportsSecureCoding;
-(id)types;
-(void)addType:(int)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setTypes:(id)arg1 ;
-(bool)containsType:(int)arg1 ;
-(void)removeType:(int)arg1 ;
-(bool)findsAnyUpdate;
-(void)clearTypes;
-(bool)isForced;
-(void)setForced:(bool)arg1 ;
@end

