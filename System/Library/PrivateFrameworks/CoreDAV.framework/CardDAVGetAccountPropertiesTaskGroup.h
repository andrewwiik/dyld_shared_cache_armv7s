/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {

	NSSet* _addressBookHomes;
	NSSet* _directoryGatewayURLs;

}

@property (readonly) NSSet * addressBookHomes;                  //@synthesize addressBookHomes=_addressBookHomes - In the implementation block
@property (readonly) NSSet * directoryGatewayURLs;              //@synthesize directoryGatewayURLs=_directoryGatewayURLs - In the implementation block
-(void)dealloc;
-(id)description;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(id)homeSet;
-(id)directoryGatewayURL;
-(id)addressBookHomes;
-(id)directoryGatewayURLs;
@end

