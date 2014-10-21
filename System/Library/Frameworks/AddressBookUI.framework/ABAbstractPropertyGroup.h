/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABStyleProvider;
@class NSArray, ABUIPerson;

@interface ABAbstractPropertyGroup : NSObject {

	NSArray* _people;
	<ABStyleProvider>* _styleProvider;
	bool _hasChanges;
	ABUIPerson* _preinsertedPerson;

}

@property (nonatomic,retain) NSArray * people;                               //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) ABUIPerson * preinsertedPerson;                 //@synthesize preinsertedPerson=_preinsertedPerson - In the implementation block
@property (assign,nonatomic) bool hasChanges;                                //@synthesize hasChanges=_hasChanges - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(void)reloadFromModel;
-(void)setHasChanges:(bool)arg1 ;
-(void)setPeople:(id)arg1 ;
-(void)updateRecord;
-(bool)canSave;
-(id)people;
-(id)preinsertedPerson;
-(void)setPreinsertedPerson:(id)arg1 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(int)property;
-(void)dealloc;
-(id)init;
-(bool)hasChanges;
@end

