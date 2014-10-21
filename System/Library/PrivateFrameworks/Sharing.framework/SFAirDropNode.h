/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@class NSString, UIImage;

@interface SFAirDropNode : NSObject {

	SFOperationRef _sender;
	bool _unknown;
	bool _monogram;
	bool _supportsPasses;
	bool _supportsMixedTypes;
	id _node;
	NSString* _realName;
	UIImage* _displayIcon;
	NSString* _displayName;
	NSString* _secondaryName;

}

@property (retain) id node;                                //@synthesize node=_node - In the implementation block
@property (retain) NSString * realName;                    //@synthesize realName=_realName - In the implementation block
@property (retain) UIImage * displayIcon;                  //@synthesize displayIcon=_displayIcon - In the implementation block
@property (retain) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * secondaryName;               //@synthesize secondaryName=_secondaryName - In the implementation block
@property (getter=isUnknown) bool unknown;                 //@synthesize unknown=_unknown - In the implementation block
@property (getter=isMonogram) bool monogram;               //@synthesize monogram=_monogram - In the implementation block
@property (readonly) bool supportsPasses;                  //@synthesize supportsPasses=_supportsPasses - In the implementation block
@property (readonly) bool supportsMixedTypes;              //@synthesize supportsMixedTypes=_supportsMixedTypes - In the implementation block
+(id)nodeWithSFNode:(SFNodeRef)arg1 ;
-(bool)isUnknown;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setMonogram:(bool)arg1 ;
-(id)displayName;
-(id)node;
-(void).cxx_destruct;
-(void)setNode:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)updateWithSFNode:(SFNodeRef)arg1 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setRealName:(id)arg1 ;
-(void)setUnknown:(bool)arg1 ;
-(void)setSecondaryName:(id)arg1 ;
-(void)setDisplayIcon:(id)arg1 ;
-(void)cancelSend;
-(void)startSendWithSessionID:(id)arg1 items:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(id)realName;
-(id)displayIcon;
-(id)secondaryName;
-(bool)isMonogram;
-(bool)supportsPasses;
-(bool)supportsMixedTypes;
@end

