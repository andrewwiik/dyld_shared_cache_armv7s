/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/DataClassMigrators/DAAccountLegacy.migrator/DAAccountLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAAccountLegacy/DALegacyAccount.h>

@interface SubCalAccount_Legacy : DALegacyAccount
-(bool)upgradeAccountWithParent:(id)arg1 ;
-(id)_oldURLsForKeychain;
-(bool)_upgradeSelfFromVersion:(int)arg1 superClassUpgraded:(bool)arg2 ;
-(int)subCalAccountVersion;
@end

