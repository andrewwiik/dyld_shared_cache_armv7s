/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSBulkCloudLyricsInfoRequest : HSRequest {

	bool _useLongIDs;

}
+(id)requestWithDatabaseID:(unsigned)arg1 itemIDs:(id)arg2 sessionID:(unsigned)arg3 useLongIDs:(bool)arg4 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)_bodyDataForItemIDs:(id)arg1 sessionID:(unsigned)arg2 ;
-(id)initWithDatabaseID:(unsigned)arg1 itemIDs:(id)arg2 sessionID:(unsigned)arg3 useLongIDs:(bool)arg4 ;
@end

