/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SearchBundles/TopHits.searchBundle/TopHits
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SPSearchDatastore <NSObject>
@optional
-(void)preheat;
-(id)resultForIdentifier:(id)arg1 domain:(unsigned)arg2;
-(bool)wantsEveryResultInItsOwnSection;
-(id)categoryForDomain:(unsigned)arg1;
-(id)imageDataForResultIdentifier:(unsigned long long)arg1 domain:(unsigned)arg2 size:(CGSize)arg3;

@required
-(id)searchDomains;
-(id)displayIdentifierForDomain:(unsigned)arg1;
-(void)performQuery:(id)arg1 withResultsPipe:(id)arg2;
@end

