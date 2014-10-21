/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSMutableDictionary, NSSet, NSBundle, NSArray;

@interface SCROMobileBrailleDisplayInputManager : NSObject {

	NSMutableDictionary* _displayInfoDict;
	NSSet* _brailleKeys;
	NSBundle* _bundle;
	NSArray* _sixDotCommands;
	NSArray* _eightDotCommands;

}
+(id)allocWithZone:(NSZone)arg1 ;
+(void)initialize;
+(id)sharedManager;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)_commandsFromBrailleInputMode:(int)arg1 ;
-(id)_sixDotCommands;
-(id)_eightDotCommands;
-(id)inputIdentifierAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2 ;
-(id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(int)arg2 ;
-(void)configureWithDriverConfiguration:(id)arg1 ;
-(id)driverIdentifierForDisplayWithToken:(int)arg1 ;
-(id)modelIdentifierForDisplayWithToken:(int)arg1 ;
-(id)commandForBrailleKey:(id)arg1 ;
-(unsigned long long)countForDisplayWithToken:(int)arg1 ;
-(id)commandAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2 ;
-(id)buttonNamesAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2 ;
-(id)_bundle;
@end

