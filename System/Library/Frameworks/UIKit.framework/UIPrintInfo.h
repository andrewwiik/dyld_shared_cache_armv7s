/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface UIPrintInfo : NSObject <NSCopying, NSCoding> {

	NSString* _printerID;
	NSString* _jobName;
	long long _outputType;
	long long _orientation;
	long long _duplex;
	long long _copies;
	bool _scaleUp;

}

@property (nonatomic,copy) NSString * printerID;                 //@synthesize printerID=_printerID - In the implementation block
@property (nonatomic,copy) NSString * jobName;                   //@synthesize jobName=_jobName - In the implementation block
@property (assign,nonatomic) long long outputType;               //@synthesize outputType=_outputType - In the implementation block
@property (assign,nonatomic) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long duplex;                   //@synthesize duplex=_duplex - In the implementation block
@property (assign,nonatomic) bool scaleUp;                       //@synthesize scaleUp=_scaleUp - In the implementation block
@property (assign,nonatomic) long long copies;                   //@synthesize copies=_copies - In the implementation block
+(id)printInfo;
+(id)printInfoWithDictionary:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(long long)orientation;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setJobName:(id)arg1 ;
-(void)setOutputType:(long long)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(void)_updateWithPrinter:(id)arg1 ;
-(id)_createPrintSettingsForPrinter:(id)arg1 ;
-(id)printerID;
-(void)setPrinterID:(id)arg1 ;
-(id)jobName;
-(long long)outputType;
-(long long)duplex;
-(void)setDuplex:(long long)arg1 ;
-(long long)copies;
-(void)setCopies:(long long)arg1 ;
-(bool)scaleUp;
-(void)setScaleUp:(bool)arg1 ;
@end
