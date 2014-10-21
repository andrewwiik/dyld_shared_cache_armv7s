/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface CalDAVPrincipalResult : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _displayName;
	NSString* _type;
	NSString* _principal;
	NSMutableArray* _emails;
	NSMutableArray* _cuAddresses;

}

@property (retain) NSString * firstName;                         //@synthesize firstName=_firstName - In the implementation block
@property (retain) NSString * lastName;                          //@synthesize lastName=_lastName - In the implementation block
@property (retain) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * resultType;                        //@synthesize type=_type - In the implementation block
@property (retain) NSString * principalPath;                     //@synthesize principal=_principal - In the implementation block
@property (readonly) NSString * emailAddress; 
@property (retain) NSArray * emailAddresses;                     //@synthesize emails=_emails - In the implementation block
@property (retain) NSArray * cuAddresses;                        //@synthesize cuAddresses=_cuAddresses - In the implementation block
@property (readonly) NSString * preferredCUAddress; 
+(id)resultFromResponse:(id)arg1 ;
-(id)convertToDAContactSearchResultElement;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)displayName;
-(id)principalPath;
-(void)setPrincipalPath:(id)arg1 ;
-(id)preferredCUAddress;
-(id)cuAddresses;
-(void)setCuAddresses:(id)arg1 ;
-(void)addEmail:(id)arg1 ;
-(void)addCUAddress:(id)arg1 ;
-(id)initWithResponse:(id)arg1 ;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
-(id)emailAddress;
-(void)setDisplayName:(id)arg1 ;
-(void)setResultType:(id)arg1 ;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)resultType;
@end

