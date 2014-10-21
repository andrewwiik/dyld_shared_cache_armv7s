/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSPurchase.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSCoding, NSCopying> {

	NSArray* _allowedToneStyles;
	NSNumber* _assigneeIdentifier;
	NSString* _assigneeToneStyle;
	bool _shouldMakeDefaultRingtone;
	bool _shouldMakeDefaultTextTone;

}

@property (copy) NSArray * allowedToneStyles; 
@property (retain) NSNumber * assigneeIdentifier; 
@property (copy) NSString * assigneeToneStyle; 
@property (assign) bool shouldMakeDefaultRingtone; 
@property (assign) bool shouldMakeDefaultTextTone; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_setValuesUsingDatabaseEncoding:(id)arg1 ;
-(void)_addEntriesToDatabaseEncoding:(id)arg1 ;
-(void)setAssigneeIdentifier:(id)arg1 ;
-(void)setAssigneeToneStyle:(id)arg1 ;
-(void)setShouldMakeDefaultRingtone:(bool)arg1 ;
-(void)setShouldMakeDefaultTextTone:(bool)arg1 ;
-(id)assigneeIdentifier;
-(id)assigneeToneStyle;
-(bool)shouldMakeDefaultRingtone;
-(bool)shouldMakeDefaultTextTone;
-(void)setAllowedToneStyles:(id)arg1 ;
-(id)initWithItem:(id)arg1 offer:(id)arg2 ;
-(id)allowedToneStyles;
@end
