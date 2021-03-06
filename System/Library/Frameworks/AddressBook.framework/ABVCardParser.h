/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@class ABVCardValueSetter, ABVCardLexer, NSData, NSString, NSMutableArray, NSMutableString, NSMutableDictionary;

@interface ABVCardParser : NSObject {

	ABVCardValueSetter* _valueSetter;
	void* _source;
	ABVCardLexer* _lexer;
	NSData* _data;
	unsigned long long _defaultEncoding;
	bool _hasImportErrors;
	bool _30vCard;
	NSString* _first;
	NSString* _last;
	NSString* _org;
	NSString* _formattedName;
	NSMutableArray* _emails;
	NSMutableArray* _dates;
	NSMutableArray* _phones;
	NSMutableArray* _addresses;
	NSMutableArray* _aims;
	NSMutableArray* _jabbers;
	NSMutableArray* _msns;
	NSMutableArray* _yahoos;
	NSMutableArray* _icqs;
	NSMutableArray* _untypedIMs;
	NSMutableArray* _instantMessengers;
	NSMutableArray* _socialProfiles;
	NSMutableArray* _relatedNames;
	NSMutableArray* _urls;
	NSMutableString* _notes;
	NSMutableString* _otherNotes;
	NSMutableDictionary* _extensions;
	NSString* _uid;
	NSData* _imageData;
	NSString* _imageURI;
	int _cropRectX;
	int _cropRectY;
	int _cropRectWidth;
	int _cropRectHeight;
	NSData* _cropRectChecksum;
	NSMutableArray* _itemParameters;
	NSString* _grouping;
	unsigned long long _encoding;
	bool _quotedPrintable;
	bool _base64;

}

@property (assign,nonatomic) void* source;              //@synthesize source=_source - In the implementation block
+(CFArrayRef)supportedProperties;
-(id)sortedPeopleAndProperties:(const _CFArray*)arg1 ;
-(bool)_usesArrayForExternalPropKey:(id)arg1 ;
-(void)cleanUpCardState;
-(id)defaultLabel;
-(void)setLocalRecordHasAdditionalProperties:(bool)arg1 ;
-(int)_addIMHandles:(id)arg1 toService:(CFStringRef)arg2 multiValue:(void*)arg3 uniquenessCheckingMultiValue:(void*)arg4 ;
-(int)_addIMPPProfiles:(id)arg1 multiValue:(void*)arg2 uniquenessCheckingMultiValue:(void*)arg3 ;
-(void)noteLackOfValueForProperty:(unsigned)arg1 ;
-(void)addMultiValues:(id)arg1 toProperty:(unsigned)arg2 valueComparator:(/*^block*/ id)arg3 ;
-(bool)_setStringValueOrNoteIfNull:(id)arg1 forProperty:(unsigned)arg2 ;
-(id)_genericLabel;
-(id)parseSingleValue;
-(id)genericLabel;
-(id)phoneLabel;
-(id)_socialProfileService;
-(id)_socialProfileUsername;
-(id)_socialProfileUserId;
-(id)_socialProfileDisplayName;
-(id)parseInstantMessengerProfile:(id)arg1 ;
-(id)dateFromISO8601String:(id)arg1 ;
-(bool)parseUID;
-(bool)parseTEL;
-(bool)parseADR;
-(bool)parseORG;
-(id)parseURL;
-(id)defaultURLLabel;
-(bool)parseADD;
-(bool)parseEMAIL;
-(bool)addIMValueTo:(id)arg1 ;
-(bool)parsePhoto:(id)arg1 ;
-(bool)parseN;
-(bool)parseVERSION;
-(bool)parseABUID;
-(bool)parseABExtensionType:(id)arg1 ;
-(bool)parseBDAY;
-(bool)parseIMPP;
-(bool)parseNICKNAME;
-(bool)parseABDATE;
-(void)parseABOrder;
-(void)parseABPhoto;
-(void)parseABShowAs;
-(bool)parseABMaiden;
-(bool)parseSocialProfiles;
-(bool)parseABReleatedNames;
-(id)parseRemainingLine;
-(id)parseValueArray;
-(bool)_usesRemainingLineForExternalPropKey:(id)arg1 ;
-(bool)_handleUnknownTag:(id)arg1 withValue:(id)arg2 ;
-(bool)importToValueSetter:(id)arg1 ;
-(bool)parseItem;
-(bool)_setMultiValuesOrNoteIfNull:(id)arg1 forProperty:(unsigned)arg2 valueComparator:(/*^block*/ id)arg3 ;
-(void)addAddressMultiValues;
-(void)addSocialProfileMultiValues;
-(void)addInstantMessageMultiValues;
-(void)noteLackOfValueForImageData;
-(bool)importToPerson:(void*)arg1 foundProperties:(const _CFArray*)arg2 ;
-(void*)copyNextPersonWithLength:(int*)arg1 foundProperties:(const _CFArray*)arg2 ;
-(CFArrayRef)peopleAndProperties:(const _CFArray*)arg1 ;
-(bool)hasImportErrors;
-(bool)_setIntValueOrNoteIfNull:(int)arg1 forProperty:(int)arg2 ;
-(bool)_setDataValueOrNoteIfNull:(id)arg1 forProperty:(unsigned)arg2 ;
-(id)defaultADRLabel;
-(id)_valueSetter;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void*)source;
-(void)setSource:(void*)arg1 ;
-(void)finalize;
@end

