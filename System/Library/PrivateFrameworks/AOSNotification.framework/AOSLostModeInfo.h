/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface AOSLostModeInfo : NSObject <NSSecureCoding> {

	bool _lostModeEnabled;
	NSString* _message;
	NSString* _phoneNumber;

}

@property (assign,nonatomic) bool lostModeEnabled;                //@synthesize lostModeEnabled=_lostModeEnabled - In the implementation block
@property (nonatomic,retain) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(bool)supportsSecureCoding;
-(void)setPhoneNumber:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)phoneNumber;
-(bool)lostModeEnabled;
-(void)setLostModeEnabled:(bool)arg1 ;
@end
