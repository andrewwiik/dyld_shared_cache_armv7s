/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProgressSubscriber.h>

@protocol NSProgressSubscriber <NSObject>
@required
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(bool)arg4;
-(oneway void)removePublisherForID:(id)arg1;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(bool)arg4;
@end


@class NSString, NSMutableDictionary, NSXPCConnection, NSLock;

@interface NSProgressSubscriber : NSObject <NSProgressSubscriber> {

	/*^block*/ id _publishingHandler;
	NSString* _subscriberID;
	NSMutableDictionary* _proxiesByPublisherID;
	NSXPCConnection* _connection;
	NSLock* _lock;

}
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(bool)arg4 ;
-(oneway void)removePublisherForID:(id)arg1 ;
-(id)initWithPublishingHandler:(/*^block*/ id)arg1 ;
-(void)startForFileURL:(id)arg1 ;
-(void)startForCategory:(id)arg1 ;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(bool)arg4 ;
-(void)dealloc;
-(void)stop;
@end
