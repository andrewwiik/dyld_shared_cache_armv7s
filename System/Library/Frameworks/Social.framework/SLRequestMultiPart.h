/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface SLRequestMultiPart : NSObject {

	NSData* _payload;
	NSString* _name;
	NSString* _type;
	NSString* _uniqueIdentifier;
	NSString* _multiPartBoundary;
	NSString* _filename;

}

@property (nonatomic,@dynamic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,retain) NSData * payload;                                    //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * filename;                                   //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSString * multiPartBoundary;                          //@synthesize multiPartBoundary=_multiPartBoundary - In the implementation block
+(id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3 multiPartBoundary:(id)arg4 ;
-(void)setMultiPartBoundary:(id)arg1 ;
-(id)multiPartBoundary;
-(id)partData;
-(id)payloadPreamble;
-(id)payloadEpilogue;
-(id)multiPartHeader;
-(unsigned long long)length;
-(void)setType:(id)arg1 ;
-(id)type;
-(void)setName:(id)arg1 ;
-(id)name;
-(void).cxx_destruct;
-(id)uniqueIdentifier;
-(id)payload;
-(void)setPayload:(id)arg1 ;
-(id)filename;
-(void)setFilename:(id)arg1 ;
@end

