/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSURL, OCPPackageRelationshipCollection, OCPPackage;

@interface OCPPackagePart : NSObject {

	NSURL* mLocation;
	OCPPackageRelationshipCollection* mRelationships;
	OCPPackage* mPackage;
	xmlDoc* mDocument;

}
-(id)initWithLocation:(id)arg1 relationshipsXml:(xmlDoc*)arg2 package:(id)arg3 ;
-(void)dealloc;
-(id)data;
-(id)location;
-(id)package;
-(id)firstPartWithRelationshipOfType:(id)arg1 ;
-(xmlDoc*)xmlDocument;
-(id)relationshipForIdentifier:(id)arg1 ;
-(xmlTextReaderRef)xmlReader;
-(id)relationshipsByType:(id)arg1 ;
-(id)contentType;
-(void)copyToFile:(id)arg1 ;
@end

