/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSDictionary;

@interface CalItemMetadata : NSObject <NSCoding> {

	NSDictionary* _x_props;
	int _classification;

}

@property (retain) NSDictionary * x_props;              //@synthesize x_props=_x_props - In the implementation block
@property (assign) int classification;                  //@synthesize classification=_classification - In the implementation block
+(id)metadataWithData:(id)arg1 ;
+(id)metadataWithICSComponent:(id)arg1 ;
-(int)classification;
-(void)setX_props:(id)arg1 ;
-(id)initWithICSComponent:(id)arg1 ;
-(void)applyToComponent:(id)arg1 ;
-(id)dataRepresentationWithExistingMetaData:(id)arg1 ;
-(id)x_props;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setClassification:(int)arg1 ;
@end
