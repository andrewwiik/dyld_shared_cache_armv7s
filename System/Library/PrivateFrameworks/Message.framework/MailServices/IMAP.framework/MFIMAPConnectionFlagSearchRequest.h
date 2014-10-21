/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MFIMAPConnectionFlagSearchRequest : NSObject {

	bool _isPositiveMatch;
	unsigned long long _mask;
	NSArray* _searchTerms;

}

@property (nonatomic,readonly) unsigned long long mask;              //@synthesize mask=_mask - In the implementation block
@property (nonatomic,readonly) NSArray * searchTerms;                //@synthesize searchTerms=_searchTerms - In the implementation block
@property (nonatomic,readonly) bool isPositiveMatch;                 //@synthesize isPositiveMatch=_isPositiveMatch - In the implementation block
+(id)requestWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(bool)arg3 ;
-(void)dealloc;
-(unsigned long long)mask;
-(id)searchTerms;
-(bool)isPositiveMatch;
-(id)initWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(bool)arg3 ;
@end

