/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonEAS/DADaemonEAS-Structs.h>
#import <DADaemonEAS/ASDataHandler.h>

@interface ASContactDataHandler : ASDataHandler
-(int)getIdFromLocalObject:(void*)arg1 ;
-(void*)copyLocalObjectFromId:(int)arg1 ;
-(bool)saveContainer;
-(CFArrayRef)copyOfAllLocalObjectsInContainer;
-(void)drainContainer;
-(bool)wipeServerIds;
-(void)openDB;
-(bool)closeDBAndSave:(bool)arg1 ;
-(id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3 ;
-(int)dataclass;
@end

