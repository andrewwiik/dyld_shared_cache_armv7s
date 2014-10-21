/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface CAEmitterBehavior : NSObject <NSCoding> {

	unsigned _type;
	NSString* _name;
	void* _attr;
	void* _cache;
	unsigned _flags;

}

@property (readonly) NSString * type; 
@property (copy) NSString * name; 
@property (getter=isEnabled) bool enabled; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)behaviorWithType:(id)arg1 ;
+(id)behaviorTypes;
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)type;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)initWithType:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(bool)isEnabled;
-(id)name;
-(void)setEnabled:(bool)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
@end

