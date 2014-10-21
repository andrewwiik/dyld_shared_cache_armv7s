/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAppearance.h>

@class NSString, UIImage;

@interface UIBarItem : NSObject <UIAppearance> {

	bool _hasCustomizableInstanceAppearanceModifications;
	bool _shouldArchiveUIAppearanceTags;

}

@property (assign,getter=isEnabled,nonatomic,@dynamic) bool enabled; 
@property (nonatomic,@dynamic,copy) NSString * title; 
@property (nonatomic,@dynamic,retain) UIImage * image; 
@property (nonatomic,@dynamic,retain) UIImage * landscapeImagePhone; 
@property (assign,nonatomic,@dynamic) UIEdgeInsets imageInsets; 
@property (assign,nonatomic,@dynamic) UIEdgeInsets landscapeImagePhoneInsets; 
@property (assign,nonatomic,@dynamic) long long tag; 
@property (assign,setter=_setHasCustomizableInstanceAppearanceModifications:,nonatomic) bool _hasCustomizableInstanceAppearanceModifications;              //@synthesize hasCustomizableInstanceAppearanceModifications=_hasCustomizableInstanceAppearanceModifications - In the implementation block
@property (assign,setter=_setShouldArchiveUIAppearanceTags:,nonatomic) bool _shouldArchiveUIAppearanceTags;                                                //@synthesize shouldArchiveUIAppearanceTags=_shouldArchiveUIAppearanceTags - In the implementation block
+(id)_appearanceWhenContainedIn:(id)arg1 ;
+(id)appearance;
+(id)_appearanceRecorder;
+(id)appearanceWhenContainedIn:(Class)arg1 ;
+(id)_appearanceRecorderWhenContainedIn:(Class)arg1 ;
+(id)_appearanceBlindViewClasses;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)_shouldArchiveUIAppearanceTags;
-(void)_setShouldArchiveUIAppearanceTags:(bool)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(bool)_hasCustomizableInstanceAppearanceModifications;
-(void)_setHasCustomizableInstanceAppearanceModifications:(bool)arg1 ;
@end

