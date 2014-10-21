/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UILabel.h>

@interface MKAttributionLabel : UILabel {

	unsigned long long _mapType;
	bool _useDarkText;

}

@property (assign,nonatomic) unsigned long long mapType;              //@synthesize mapType=_mapType - In the implementation block
-(void)_prepareLabel;
-(id)_attributesWithStroke:(bool)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1 ;
@end
