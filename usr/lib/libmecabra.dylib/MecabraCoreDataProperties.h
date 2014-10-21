/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface MecabraCoreDataProperties : NSObject {

	NSMutableDictionary* _descriptionDictionary;
	NSString* _identifier;
	NSString* _type;

}

@property (nonatomic,readonly) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * ubiquityContainerIdentifier; 
@property (nonatomic,retain) NSMutableDictionary * descriptionDictionary;              //@synthesize descriptionDictionary=_descriptionDictionary - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
+(id)sharedInstanceForType:(id)arg1 ;
+(void)setDefaultDescriptionPath:(id)arg1 ;
+(id)defaultDescriptionPath;
+(id)ubiquityContainerURL;
-(void)dealloc;
-(id)valueForKey:(id)arg1 ;
-(id)type;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(id)sortDescriptors;
-(void)forceNoSync;
-(id)uniqueKeys;
-(id)requiredKeys;
-(id)entityModelName;
-(bool)databaseSyncs;
-(id)entityDescriptionURL;
-(id)ubiquityContainerIdentifier;
-(id)descriptionDictionary;
-(id)ubiquitousURLWithSuffix:(id)arg1 ;
-(id)ubiquitousStoreDirectoryURLForIdentifier:(id)arg1 ;
-(id)ubiquitousTransactionURLForIdentifier:(id)arg1 ;
-(void)setDescriptionDictionary:(id)arg1 ;
@end

