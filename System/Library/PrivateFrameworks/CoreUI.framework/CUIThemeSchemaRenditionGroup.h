/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CUIRenditionKey, NSArray;

@interface CUIThemeSchemaRenditionGroup : NSObject {

	CUIRenditionKey* _baseKey;
	NSArray* _renditions;
	long long _partFeatures;

}

@property (nonatomic,retain) NSArray * renditions;              //@synthesize renditions=_renditions - In the implementation block
+(id)renditionGroupsForRenditions:(id)arg1 partFeatures:(long long)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithRenditions:(id)arg1 partFeatures:(long long)arg2 ;
-(id)renditions;
-(void)setRenditions:(id)arg1 ;
-(id)themeSchemaLayers;
-(long long)partFeatures;
-(id)_renditionsSortedIntoLayers;
-(id)_layerNameForDrawingLayer:(long long)arg1 ;
-(id)_layerNameForState:(long long)arg1 ;
-(id)baseKey;
-(id)mutablePSDImageRef;
@end

