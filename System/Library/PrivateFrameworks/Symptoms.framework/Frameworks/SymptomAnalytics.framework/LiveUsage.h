/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, Process;

@interface LiveUsage : NSManagedObject

@property (nonatomic,@dynamic,retain) NSNumber * kind; 
@property (nonatomic,@dynamic,retain) NSNumber * tag; 
@property (nonatomic,@dynamic,retain) NSDate * timeStamp; 
@property (nonatomic,@dynamic,retain) NSNumber * wifiIN; 
@property (nonatomic,@dynamic,retain) NSNumber * wifiOUT; 
@property (nonatomic,@dynamic,retain) NSNumber * wwanIN; 
@property (nonatomic,@dynamic,retain) NSNumber * wwanOUT; 
@property (nonatomic,@dynamic,retain) NSNumber * metadata; 
@property (nonatomic,@dynamic,retain) Process * hasProcess; 
@property (nonatomic,@dynamic,retain) Process * hintedBy; 
@end

