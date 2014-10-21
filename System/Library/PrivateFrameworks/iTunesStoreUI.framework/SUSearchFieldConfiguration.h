/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, SUClientInterface;

@interface SUSearchFieldConfiguration : NSObject <NSCopying> {

	NSString* _cancelString;
	SUClientInterface* _clientInterface;
	CFDictionaryRef _hintURLs;
	long long _location;
	NSString* _placeholder;
	bool _rootViewOnly;
	CFDictionaryRef _searchURLs;
	NSString* _userDefaultsKey;
	double _width;
	double _widthLandscape;
	double _widthPortrait;

}

@property (nonatomic,readonly) NSString * cancelString;                              //@synthesize cancelString=_cancelString - In the implementation block
@property (getter=isRootViewOnly,nonatomic,readonly) bool rootViewOnly;              //@synthesize rootViewOnly=_rootViewOnly - In the implementation block
@property (nonatomic,readonly) long long location;                                   //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * placeholderString;                         //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,readonly) NSString * userDefaultsKey;                           //@synthesize userDefaultsKey=_userDefaultsKey - In the implementation block
@property (nonatomic,readonly) double width;                                         //@synthesize width=_width - In the implementation block
+(id)defaultConfigurationWithClientInterface:(id)arg1 ;
+(id)defaultConfiguration;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(double)width;
-(long long)location;
-(id)initWithDictionary:(id)arg1 clientInterface:(id)arg2 ;
-(void)loadFromDictionary:(id)arg1 ;
-(id)searchURLRequestPropertiesForNetworkType:(long long)arg1 ;
-(bool)isRootViewOnly;
-(id)_initWithClientInterface:(id)arg1 ;
-(id)_urlRequestPropertiesForURLBagKey:(id)arg1 networkType:(long long)arg2 ;
-(void)_setHintURLsFromDictionary:(id)arg1 ;
-(long long)_locationForString:(id)arg1 ;
-(void)_setSearchURLsFromDictionary:(id)arg1 ;
-(id)_newQueryStringDictionaryForNetworkType:(long long)arg1 ;
-(CFDictionaryRef)_newURLsDictionaryWithDictionary:(id)arg1 ;
-(id)URLRequestPropertiesWithBaseURL:(id)arg1 forNetworkType:(long long)arg2 ;
-(id)hintsURLRequestPropertiesForNetworkType:(long long)arg1 ;
-(double)widthForOrientation:(long long)arg1 ;
-(id)cancelString;
-(id)placeholderString;
-(id)userDefaultsKey;
@end

