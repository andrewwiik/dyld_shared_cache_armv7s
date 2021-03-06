/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSMutableArray, NSArray;

@interface ASMeetingResponseResponse : ASItem {

	NSMutableArray* _singularResponses;

}

@property (readonly) NSArray * singularResponses;              //@synthesize singularResponses=_singularResponses - In the implementation block
+(bool)acceptsTopLevelLeaves;
+(bool)parsingLeafNode;
+(bool)parsingWithSubItems;
+(bool)frontingBasicTypes;
+(bool)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)singularResponses;
-(void)_addSingularResponse:(id)arg1 ;
@end

