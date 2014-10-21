/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKUserLocationAnnotation, MKAnnotation;
@class CLLocation, CLHeading, NSString;

@interface MKUserLocationInternal : NSObject {

	CLLocation* location;
	CLLocation* fixedLocation;
	CLLocation* predictedLocation;
	CLHeading* heading;
	NSString* title;
	NSString* subtitle;
	<MKUserLocationAnnotation>* _annotation;
	int source;
	double timestamp;
	bool updating;
	double course;
	<MKAnnotation>* annotation;

}

@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLLocation * fixedLocation; 
@property (nonatomic,retain) CLLocation * predictedLocation; 
@property (nonatomic,retain) CLHeading * heading; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,readonly) <MKAnnotation> * annotation; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) double timestamp; 
@property (assign,getter=isUpdating,nonatomic) bool updating; 
@property (assign,nonatomic) double course; 
-(void)setUpdating:(bool)arg1 ;
-(void)setFixedLocation:(id)arg1 ;
-(bool)isUpdating;
-(id)predictedLocation;
-(void)setPredictedLocation:(id)arg1 ;
-(id)fixedLocation;
-(void)setTitle:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)title;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(id)location;
-(int)source;
-(void)setSource:(int)arg1 ;
-(void).cxx_destruct;
-(id)annotation;
-(void)setHeading:(id)arg1 ;
-(void)setCourse:(double)arg1 ;
-(double)course;
-(void)setLocation:(id)arg1 ;
-(id)heading;
@end

