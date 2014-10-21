/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface ABContactsFilter : NSObject {

	void* _addressBook;
	bool _showsAllContacts;
	NSArray* _groups;
	NSArray* _sources;
	void* _directorySource;

}

@property (nonatomic,readonly) void* addressBook; 
@property (nonatomic,readonly) NSArray * groups;                                          //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) NSArray * sources;                                         //@synthesize sources=_sources - In the implementation block
@property (nonatomic,readonly) void* directorySource;                                     //@synthesize directorySource=_directorySource - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) void* sourceForNewRecords; 
@property (nonatomic,readonly) void* groupForNewRecords; 
@property (getter=isEditable,nonatomic,readonly) bool editable; 
@property (nonatomic,readonly) bool isDirectory; 
@property (nonatomic,readonly) bool shouldChangeModelSelectionWhenDisplayed; 
@property (nonatomic,readonly) bool showsAllContacts;                                     //@synthesize showsAllContacts=_showsAllContacts - In the implementation block
+(id)_newContactsFilterFromGroupWrapperRepresentation:(id)arg1 withAddressBook:(void*)arg2 ;
+(id)newContactsFilterFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2 ;
-(id)initWithAddressBook:(void*)arg1 ;
-(id)groups;
-(bool)showsAllContacts;
-(id)initWithGroups:(id)arg1 sources:(id)arg2 addressBook:(void*)arg3 ;
-(id)initWithDirectorySource:(void*)arg1 addressBook:(void*)arg2 ;
-(id)sortedGroupsForGroups:(id)arg1 ;
-(id)sortedSourcesForSources:(id)arg1 ;
-(void*)_defaultSourceForAccountContainingSource:(void*)arg1 ;
-(void)_getWritableSource:(const void*)arg1 andGroup:(const void*)arg2 ;
-(id)_sortedRecordsForRecords:(id)arg1 byNameProperty:(int)arg2 ;
-(void*)directorySource;
-(void)invalidateSourcesForAllContacts;
-(id)copyDictionaryRepresentation;
-(bool)shouldChangeModelSelectionWhenDisplayed;
-(void*)groupForNewRecords;
-(void*)sourceForNewRecords;
-(bool)isDirectory;
-(id)sources;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(bool)isEditable;
-(id)name;
-(void*)addressBook;
@end

