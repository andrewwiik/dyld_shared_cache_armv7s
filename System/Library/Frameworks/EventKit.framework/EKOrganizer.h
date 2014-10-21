/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKParticipant.h>

@interface EKOrganizer : EKParticipant

@property (assign,getter=isCurrentUser,nonatomic) bool currentUser; 
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(bool)arg4 ;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(bool)isCurrentUser;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(bool)arg4 ;
-(void)setCurrentUser:(bool)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)owner;
@end

