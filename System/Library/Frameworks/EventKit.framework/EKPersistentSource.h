/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class EKSourceConstraints, NSString, NSNumber;

@interface EKPersistentSource : EKPersistentObject {

	EKSourceConstraints* _constraints;

}

@property (assign,nonatomic) NSString * UUID; 
@property (assign,nonatomic) int sourceType; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (assign,getter=isEnabled,nonatomic) bool enabled; 
@property (assign,nonatomic) bool onlyCreatorCanModify; 
@property (nonatomic,readonly) EKSourceConstraints * constraints;              //@synthesize constraints=_constraints - In the implementation block
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(bool)onlyCreatorCanModify;
-(id)defaultAlarmOffset;
-(void)setDefaultAlarmOffset:(id)arg1 ;
-(void)setOnlyCreatorCanModify:(bool)arg1 ;
-(int)entityType;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(bool)isEnabled;
-(id)UUID;
-(void)setEnabled:(bool)arg1 ;
-(id)title;
-(id)constraints;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(void)reset;
-(void)setUUID:(id)arg1 ;
-(void)setExternalID:(id)arg1 ;
-(id)externalID;
-(bool)refresh;
@end

