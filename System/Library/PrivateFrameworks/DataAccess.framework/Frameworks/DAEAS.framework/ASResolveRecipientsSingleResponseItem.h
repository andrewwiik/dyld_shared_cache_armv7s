/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber, NSMutableArray;

@interface ASResolveRecipientsSingleResponseItem : ASItem {

	NSString* _emailAddress;
	NSNumber* _easStatus;
	NSMutableArray* _recipients;

}

@property (retain) NSString * emailAddress;                  //@synthesize emailAddress=_emailAddress - In the implementation block
@property (retain) NSNumber * easStatus;                     //@synthesize easStatus=_easStatus - In the implementation block
@property (retain) NSMutableArray * recipients;              //@synthesize recipients=_recipients - In the implementation block
+(bool)acceptsTopLevelLeaves;
+(bool)parsingLeafNode;
+(bool)parsingWithSubItems;
+(bool)frontingBasicTypes;
+(bool)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)dealloc;
-(id)description;
-(void)setEmailAddress:(id)arg1 ;
-(id)easStatus;
-(void)setEASStatus:(id)arg1 ;
-(id)emailAddress;
-(id)recipients;
-(void)setRecipients:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
@end

