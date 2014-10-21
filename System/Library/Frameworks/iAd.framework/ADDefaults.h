/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iAd/iAd-Structs.h>
@class NSMutableDictionary;

@interface ADDefaults : NSObject {

	NSMutableDictionary* _factoryDefaults;
	CFStringRef _defaultsBundleID;

}

@property (nonatomic,retain) NSMutableDictionary * factoryDefaults;              //@synthesize factoryDefaults=_factoryDefaults - In the implementation block
@property (assign,nonatomic) CFStringRef defaultsBundleID;                       //@synthesize defaultsBundleID=_defaultsBundleID - In the implementation block
+(double)doubleForKey:(id)arg1 ;
+(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
+(void)setDouble:(double)arg1 forKey:(id)arg2 ;
+(id)sharedInstance;
+(bool)boolForKey:(id)arg1 ;
+(id)stringForKey:(id)arg1 ;
+(void)setBool:(bool)arg1 forKey:(id)arg2 ;
+(long long)integerForKey:(id)arg1 ;
+(id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2 ;
+(void)_setDefaultValue:(id)arg1 forKey:(id)arg2 ;
+(void)addFactoryDefaults:(id)arg1 ;
+(id)factoryDefaults;
+(void)setString:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)factoryDefaults;
-(void)setFactoryDefaults:(id)arg1 ;
-(CFStringRef)defaultsBundleID;
-(void)setDefaultsBundleID:(CFStringRef)arg1 ;
@end

