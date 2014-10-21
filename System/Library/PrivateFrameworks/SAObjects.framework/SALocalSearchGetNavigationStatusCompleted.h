/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, SALocalSearchAceNavigationEta, SALocalSearchRoute, NSString;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) NSNumber * etaInMinutes; 
@property (nonatomic,retain) NSNumber * navigating; 
@property (nonatomic,retain) SALocalSearchAceNavigationEta * nextManeuverEta; 
@property (nonatomic,retain) SALocalSearchAceNavigationEta * overallEta; 
@property (nonatomic,retain) SALocalSearchRoute * route; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)getNavigationStatusCompleted;
+(id)getNavigationStatusCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRoute:(id)arg1 ;
-(id)route;
-(id)encodedClassName;
-(id)etaInMinutes;
-(void)setEtaInMinutes:(id)arg1 ;
-(id)navigating;
-(void)setNavigating:(id)arg1 ;
-(id)nextManeuverEta;
-(void)setNextManeuverEta:(id)arg1 ;
-(id)overallEta;
-(void)setOverallEta:(id)arg1 ;
@end

