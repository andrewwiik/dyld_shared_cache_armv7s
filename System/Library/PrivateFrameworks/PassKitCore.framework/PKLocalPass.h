/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPass.h>
#import <PassKitCore/PKLocalPassFileAccessor.h>
#import <CoreFoundation/NSCopying.h>

@protocol PKLocalPassFileAccessor;
@class NSURL, NSData;

@interface PKLocalPass : PKPass <PKLocalPassFileAccessor, NSCopying> {

	bool _removeOnDiskRepresentationOnDealloc;
	NSURL* _fileURL;
	<PKLocalPassFileAccessor>* _fileAccessor;
	NSData* _passData;

}

@property (nonatomic,retain) NSURL * fileURL;                                       //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) <PKLocalPassFileAccessor> * fileAccessor;              //@synthesize fileAccessor=_fileAccessor - In the implementation block
@property (assign,nonatomic) bool removeOnDiskRepresentationOnDealloc;              //@synthesize removeOnDiskRepresentationOnDealloc=_removeOnDiskRepresentationOnDealloc - In the implementation block
@property (nonatomic,readonly) NSData * passData;                                   //@synthesize passData=_passData - In the implementation block
+(bool)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(id)passData;
-(void)fetchContentWithCompletion:(/*^block*/ id)arg1 ;
-(void)fetchImageSet:(long long)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(id)archivedPass;
-(id)localLocationsURL;
-(void)setFileAccessor:(id)arg1 ;
-(bool)isValidPassWithURL:(id)arg1 error:(id*)arg2 warnings:(id*)arg3 ;
-(id)loadDictionaryFromPassURL:(id)arg1 ;
-(id)_locationsFromPassDictionary:(id)arg1 ;
-(id)_beaconsFromPassDictionary:(id)arg1 ;
-(id)manifestHashFromPassURL:(id)arg1 ;
-(id)displayProfileWithPassDictionary:(id)arg1 passURL:(id)arg2 ;
-(id)_groupingIDFromPassDictionary:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 fileAccessor:(id)arg2 error:(id*)arg3 warnings:(id*)arg4 ;
-(id)initWithFileURL:(id)arg1 fileAccessor:(id)arg2 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 warnings:(id*)arg3 ;
-(void)setRemoveOnDiskRepresentationOnDealloc:(bool)arg1 ;
-(bool)getResourceValue:(id*)arg1 forKey:(id)arg2 forPassAtURL:(id)arg3 error:(id*)arg4 ;
-(void)checkRevocationStatusForPassAtURL:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)loadContentFromPassURL:(id)arg1 ;
-(id)loadImageSet:(long long)arg1 fromPassURL:(id)arg2 displayProfile:(id)arg3 ;
-(bool)copyPassAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)serializedFileWrapperFromPassURL:(id)arg1 ;
-(bool)movePassAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(bool)moveToFileURL:(id)arg1 ;
-(id)_localizationKeyForMultipleDiff;
-(bool)removePassAtURL:(id)arg1 error:(id*)arg2 ;
-(id)localizedString:(id)arg1 forPassAtURL:(id)arg2 ;
-(id)fileAccessor;
-(void)checkRevocationStatusWithCompletion:(/*^block*/ id)arg1 ;
-(id)copyWithFileURL:(id)arg1 fileAccessor:(id)arg2 ;
-(id)copyWithFileAccessor:(id)arg1 ;
-(id)serializedFileWrapper;
-(bool)moveToTemporaryURL;
-(id)diff:(id)arg1 ;
-(id)localizedDescriptionForDiff:(id)arg1 ;
-(bool)removeOnDiskRepresentationOnDealloc;
-(id)modificationDate;
-(void)setFileURL:(id)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
@end

