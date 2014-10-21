/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem {

	NSNumber* _status;
	NSString* _fileReference;

}

@property (retain) NSNumber * status;                     //@synthesize status=_status - In the implementation block
@property (retain) NSString * fileReference;              //@synthesize fileReference=_fileReference - In the implementation block
+(bool)acceptsTopLevelLeaves;
+(bool)parsingLeafNode;
+(bool)parsingWithSubItems;
+(bool)frontingBasicTypes;
+(bool)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(void)setFileReference:(id)arg1 ;
-(id)fileReference;
@end

