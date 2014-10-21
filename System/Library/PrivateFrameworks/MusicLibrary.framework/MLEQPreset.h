/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MLEQPreset : NSObject {

	NSString* _name;
	NSString* _localizedName;
	int _builtInPresetType;

}
+(id)eqPresetForBuiltInPresetType:(int)arg1 ;
+(id)eqPresetForName:(id)arg1 ;
-(id)name;
-(id)localizedName;
-(void).cxx_destruct;
-(id)initWithBuiltInPresetType:(int)arg1 ;
-(int)builtInPresetType;
-(int)typeForAVController;
@end

