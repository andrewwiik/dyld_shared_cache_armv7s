/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MFComposeRecipientOriginContext : NSObject {

	int _resultType;
	NSString* _searchTerm;

}

@property (nonatomic,readonly) NSString * searchTerm;              //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,readonly) int resultType;                     //@synthesize resultType=_resultType - In the implementation block
-(id)searchTerm;
-(void)setSearchTerm:(id)arg1 ;
-(void)dealloc;
-(void)setResultType:(int)arg1 ;
-(int)resultType;
@end

