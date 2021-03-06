/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <DAEAS/ASParsingAcceptingTopLevelLeaves.h>

@class NSString, NSMutableDictionary;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves> {

	NSString* _name;
	NSString* _email;
	int _status;
	int _role;
	int _localId;
	NSMutableDictionary* _placeHolder;

}

@property (retain) NSString * name;               //@synthesize name=_name - In the implementation block
@property (retain) NSString * email;              //@synthesize email=_email - In the implementation block
@property (assign) int status;                    //@synthesize status=_status - In the implementation block
@property (assign) int role;                      //@synthesize role=_role - In the implementation block
@property (assign) int localId;                   //@synthesize localId=_localId - In the implementation block
+(bool)acceptsTopLevelLeaves;
+(bool)parsingLeafNode;
+(bool)parsingWithSubItems;
+(bool)frontingBasicTypes;
+(bool)notifyOfUnknownTokens;
+(id)asParseRules;
-(int)role;
-(void)setRole:(int)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setEmail:(id)arg1 ;
-(void)applyPlaceHolder;
-(void)clearPlaceHolder;
-(void)setObject:(id)arg1 forDCCPT:(int)arg2 ;
-(void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 shouldMergeProperties:(bool)arg3 outMergeDidChooseLocalProperties:(bool*)arg4 ;
-(id)initWithCalAttendee:(void*)arg1 parentEvent:(id)arg2 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2 ;
-(id)fullEmailString;
-(id)copyOfSelfWithoutLocalID;
-(id)icsUserAddress;
-(int)localId;
-(void)setLocalId:(int)arg1 ;
-(id)email;
@end

