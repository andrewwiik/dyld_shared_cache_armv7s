/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAAction.h>

@interface ASEmailChangeFlagsAction : DAAction {

	bool _read;
	bool _flagged;
	unsigned long long _changedFlags;

}
-(id)initWithServerID:(id)arg1 read:(bool)arg2 flagged:(bool)arg3 changedFlags:(unsigned long long)arg4 ;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
@end
