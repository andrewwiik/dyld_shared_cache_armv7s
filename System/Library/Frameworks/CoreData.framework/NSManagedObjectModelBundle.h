/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBundle, NSDictionary;

@interface NSManagedObjectModelBundle : NSObject {

	NSBundle* _bundle;
	NSDictionary* _versionInfoDictionary;

}
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)optimizedVersionURL;
-(id)currentVersionURL;
-(id)versionInfoDictionary;
-(id)versionHashInfo;
-(id)urlForModelVersionWithName:(id)arg1 ;
-(id)modelVersions;
-(id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)bundle;
-(id)initWithPath:(id)arg1 ;
-(id)currentVersion;
@end

