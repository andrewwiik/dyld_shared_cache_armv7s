/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSPortNameServer : NSObject
+(id)systemDefaultPortNameServer;
+(id)defaultPortNameServer;
-(bool)registerPort:(id)arg1 name:(id)arg2 ;
-(id)portForName:(id)arg1 host:(id)arg2 ;
-(id)portForName:(id)arg1 ;
-(bool)removePortForName:(id)arg1 ;
-(bool)registerPort:(id)arg1 forName:(id)arg2 ;
-(id)portForName:(id)arg1 onHost:(id)arg2 ;
@end

