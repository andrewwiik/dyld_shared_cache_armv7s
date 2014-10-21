/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBService.h>

@class NSNumber, CBUUID, NSArray;

@interface CBMutableService : CBService {

	NSNumber* _ID;

}

@property (nonatomic,retain) CBUUID * UUID; 
@property (assign,nonatomic) bool isPrimary; 
@property (retain) NSArray * includedServices; 
@property (retain) NSArray * characteristics; 
@property (retain) NSNumber * ID;                           //@synthesize ID=_ID - In the implementation block
-(id)initWithType:(id)arg1 primary:(bool)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)ID;
-(void)setID:(id)arg1 ;
-(void)setCharacteristics:(id)arg1 ;
@end

