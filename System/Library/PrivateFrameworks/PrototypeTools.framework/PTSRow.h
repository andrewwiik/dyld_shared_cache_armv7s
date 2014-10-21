/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettingsKeyPathObserver.h>

@class NSHashTable, NSString, UIImage, NSPredicate, PTSRowAction, _UISettings, PTSSection;

@interface PTSRow : NSObject <_UISettingsKeyPathObserver> {

	NSHashTable* _observers;
	NSString* _valueKeyPath;
	NSString* _staticTitle;
	NSString* _titleKeyPath;
	UIImage* _staticImage;
	NSString* _imageKeyPath;
	NSPredicate* _condition;
	PTSRowAction* _action;
	/*^block*/ id _valueValidatator;
	/*^block*/ id _valueFormatter;
	NSString* _groupKeyPath;
	long long _allowedEditingTypes;
	_UISettings* _settings;
	PTSSection* _section;
	_UISettings* _groupChild;

}

@property (nonatomic,copy) NSString * valueKeyPath;                      //@synthesize valueKeyPath=_valueKeyPath - In the implementation block
@property (nonatomic,copy) NSString * staticTitle;                       //@synthesize staticTitle=_staticTitle - In the implementation block
@property (nonatomic,copy) NSString * titleKeyPath;                      //@synthesize titleKeyPath=_titleKeyPath - In the implementation block
@property (nonatomic,retain) UIImage * staticImage;                      //@synthesize staticImage=_staticImage - In the implementation block
@property (nonatomic,copy) NSString * imageKeyPath;                      //@synthesize imageKeyPath=_imageKeyPath - In the implementation block
@property (nonatomic,copy) NSPredicate * condition;                      //@synthesize condition=_condition - In the implementation block
@property (nonatomic,copy) PTSRowAction * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id valueValidatator;                          //@synthesize valueValidatator=_valueValidatator - In the implementation block
@property (nonatomic,copy) id valueFormatter;                            //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (nonatomic,retain) NSString * groupKeyPath;                    //@synthesize groupKeyPath=_groupKeyPath - In the implementation block
@property (assign,nonatomic) long long allowedEditingTypes;              //@synthesize allowedEditingTypes=_allowedEditingTypes - In the implementation block
@property (nonatomic,retain) _UISettings * settings;                     //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) id value; 
@property (assign,nonatomic,__weak) PTSSection * section;                //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) _UISettings * groupChild;                   //@synthesize groupChild=_groupChild - In the implementation block
+(id)row;
+(id)rowWithTitle:(id)arg1 valueKeyPath:(id)arg2 ;
-(id)pu_increment:(double)arg1 ;
-(Class)rowTableViewCellClass;
-(void)dealloc;
-(id)init;
-(id)action;
-(void)setValue:(id)arg1 ;
-(id)image;
-(void)removeObserver:(id)arg1 ;
-(id)value;
-(id)title;
-(id)section;
-(void)setAction:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(id)conditionFormat:(id)arg1 ;
-(void)setSettings:(id)arg1 ;
-(id)settings;
-(id)group;
-(void).cxx_destruct;
-(id)condition;
-(void)setCondition:(id)arg1 ;
-(void)setSection:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)setValueValidatator:(/*^block*/ id)arg1 ;
-(void)setValueKeyPath:(id)arg1 ;
-(id)valueKeyPath;
-(id)staticTitle:(id)arg1 ;
-(id)valueKeyPath:(id)arg1 ;
-(void)setStaticTitle:(id)arg1 ;
-(void)setTitleKeyPath:(id)arg1 ;
-(void)setStaticImage:(id)arg1 ;
-(void)setImageKeyPath:(id)arg1 ;
-(void)setValueFormatter:(/*^block*/ id)arg1 ;
-(void)setGroupKeyPath:(id)arg1 ;
-(void)setAllowedEditingTypes:(long long)arg1 ;
-(id)staticTitle;
-(id)titleKeyPath;
-(id)staticImage;
-(id)imageKeyPath;
-(/*^block*/ id)valueValidatator;
-(/*^block*/ id)valueFormatter;
-(id)groupKeyPath;
-(long long)allowedEditingTypes;
-(void)_sendValueChanged;
-(void)_sendTitleChanged;
-(void)_sendImageChanged;
-(void)resolveTemplatesWithIndex:(unsigned long long)arg1 ;
-(void)updateWithRow:(id)arg1 ;
-(id)titleKeyPath:(id)arg1 ;
-(id)staticImage:(id)arg1 ;
-(id)imageKeyPath:(id)arg1 ;
-(id)condition:(id)arg1 ;
-(id)action:(id)arg1 ;
-(id)valueValidator:(/*^block*/ id)arg1 ;
-(id)valueFormatter:(/*^block*/ id)arg1 ;
-(id)groupKeyPath:(id)arg1 ;
-(id)allowedEditingTypes:(long long)arg1 ;
-(id)childSettingsForKeyPath:(id)arg1 ;
-(id)concreteCopyWithIndex:(unsigned long long)arg1 ;
-(bool)allowsDelete;
-(bool)allowsReorder;
-(bool)allowsDuplicate;
-(bool)allowsShare;
-(id)groupChild;
-(void)setGroupChild:(id)arg1 ;
@end

