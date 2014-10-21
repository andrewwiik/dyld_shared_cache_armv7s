/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface UIKBKeyDisplayContents : NSObject {

	bool _isCustomGlyph;
	bool _secondaryIsCustomGlyph;
	bool _fillPath;
	bool _force1xImages;
	NSString* _displayString;
	NSString* _displayStringImage;
	NSString* _secondaryDisplayStringImage;
	NSString* _secondaryDisplayString;
	NSArray* _variantDisplayStrings;
	NSArray* _variantDisplayImages;
	long long _highlightedVariantIndex;
	long long _displayPathType;
	UIKBKeyDisplayContents* _fallbackContents;

}

@property (nonatomic,retain) NSString * displayString;                               //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,retain) NSString * displayStringImage;                          //@synthesize displayStringImage=_displayStringImage - In the implementation block
@property (nonatomic,retain) NSString * secondaryDisplayStringImage;                 //@synthesize secondaryDisplayStringImage=_secondaryDisplayStringImage - In the implementation block
@property (assign,nonatomic) bool isCustomGlyph;                                     //@synthesize isCustomGlyph=_isCustomGlyph - In the implementation block
@property (nonatomic,retain) NSString * secondaryDisplayString;                      //@synthesize secondaryDisplayString=_secondaryDisplayString - In the implementation block
@property (assign,nonatomic) bool secondaryIsCustomGlyph;                            //@synthesize secondaryIsCustomGlyph=_secondaryIsCustomGlyph - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayStrings;                        //@synthesize variantDisplayStrings=_variantDisplayStrings - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayImages;                         //@synthesize variantDisplayImages=_variantDisplayImages - In the implementation block
@property (assign,nonatomic) long long highlightedVariantIndex;                      //@synthesize highlightedVariantIndex=_highlightedVariantIndex - In the implementation block
@property (assign,nonatomic) long long displayPathType;                              //@synthesize displayPathType=_displayPathType - In the implementation block
@property (assign,nonatomic) bool fillPath;                                          //@synthesize fillPath=_fillPath - In the implementation block
@property (assign,nonatomic) bool force1xImages;                                     //@synthesize force1xImages=_force1xImages - In the implementation block
@property (nonatomic,retain) UIKBKeyDisplayContents * fallbackContents;              //@synthesize fallbackContents=_fallbackContents - In the implementation block
+(id)displayContents;
-(void)dealloc;
-(id)description;
-(void)setVariantDisplayStrings:(id)arg1 ;
-(id)displayString;
-(void)setDisplayString:(id)arg1 ;
-(void)setHighlightedVariantIndex:(long long)arg1 ;
-(long long)highlightedVariantIndex;
-(void)setIsCustomGlyph:(bool)arg1 ;
-(id)secondaryDisplayString;
-(id)displayStringImage;
-(void)setForce1xImages:(bool)arg1 ;
-(bool)isCustomGlyph;
-(bool)secondaryIsCustomGlyph;
-(id)variantDisplayImages;
-(id)variantDisplayStrings;
-(long long)displayPathType;
-(bool)fillPath;
-(bool)force1xImages;
-(id)fallbackContents;
-(void)setDisplayStringImage:(id)arg1 ;
-(void)setDisplayPathType:(long long)arg1 ;
-(id)secondaryDisplayStringImage;
-(void)setSecondaryDisplayStringImage:(id)arg1 ;
-(void)setSecondaryDisplayString:(id)arg1 ;
-(void)setSecondaryIsCustomGlyph:(bool)arg1 ;
-(void)setVariantDisplayImages:(id)arg1 ;
-(void)setFillPath:(bool)arg1 ;
-(void)setFallbackContents:(id)arg1 ;
@end

