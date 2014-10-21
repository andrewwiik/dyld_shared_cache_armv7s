/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RadioShareInformation, NSError;

@interface _RUStationShareInformationResponse : NSObject {

	RadioShareInformation* _shareInformation;
	NSError* _error;

}

@property (nonatomic,readonly) RadioShareInformation * shareInformation;              //@synthesize shareInformation=_shareInformation - In the implementation block
@property (nonatomic,readonly) NSError * error;                                       //@synthesize error=_error - In the implementation block
-(void).cxx_destruct;
-(id)error;
-(id)shareInformation;
-(id)initWithShareInformation:(id)arg1 error:(id)arg2 ;
@end

