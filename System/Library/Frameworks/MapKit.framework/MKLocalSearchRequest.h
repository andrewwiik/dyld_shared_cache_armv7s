/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSData;

@interface MKLocalSearchRequest : NSObject <NSCopying> {

	NSString* _naturalLanguageQuery;
	bool _hasRegion;
	SCD_Struct_MK2 _region;
	NSData* _suggestionMetadata;
	NSData* _suggestionEntryMetadata;

}

@property (nonatomic,copy) NSString * naturalLanguageQuery;                 //@synthesize naturalLanguageQuery=_naturalLanguageQuery - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK2 region;                         //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) bool _hasRegion;                             //@synthesize hasRegion=_hasRegion - In the implementation block
@property (nonatomic,retain) NSData * suggestionMetadata;                   //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,retain) NSData * suggestionEntryMetadata;              //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
+(id)searchRequestWithCompletion:(id)arg1 ;
-(void)setNaturalLanguageQuery:(id)arg1 ;
-(id)naturalLanguageQuery;
-(bool)_hasRegion;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(void)setSuggestionMetadata:(id)arg1 ;
-(id)suggestionMetadata;
-(void)setSuggestionEntryMetadata:(id)arg1 ;
-(id)suggestionEntryMetadata;
-(void)setRegion:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)region;
-(id)_dictionaryRepresentation;
@end

