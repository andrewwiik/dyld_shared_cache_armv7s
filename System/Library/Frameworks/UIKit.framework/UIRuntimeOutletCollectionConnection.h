/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIRuntimeConnection.h>

@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {

	NSString* runtimeCollectionClassName;
	bool addsContentToExistingCollection;

}

@property (copy) NSString * runtimeCollectionClassName; 
@property (assign) bool addsContentToExistingCollection; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)connectForSimulator;
-(void)connect;
-(id)runtimeCollectionClassName;
-(void)performConnect;
-(void)setRuntimeCollectionClassName:(id)arg1 ;
-(bool)addsContentToExistingCollection;
-(void)setAddsContentToExistingCollection:(bool)arg1 ;
@end

