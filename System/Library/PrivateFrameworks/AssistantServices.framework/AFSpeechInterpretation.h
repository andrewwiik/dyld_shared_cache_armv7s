/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechInterpretation : NSObject <NSSecureCoding> {

	NSArray* _tokens;

}

@property (nonatomic,copy) NSArray * tokens;              //@synthesize tokens=_tokens - In the implementation block
+(bool)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void).cxx_destruct;
-(id)tokens;
-(void)setTokens:(id)arg1 ;
@end

