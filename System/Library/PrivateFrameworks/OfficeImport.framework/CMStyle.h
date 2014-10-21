/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, NSMutableString;

@interface CMStyle : NSObject {

	NSMutableDictionary* properties;
	NSMutableString* mStyleString;

}
-(void)dealloc;
-(id)init;
-(id)initWithStyle:(id)arg1 ;
-(id)properties;
-(void)appendPropertyForName:(id)arg1 intValue:(int)arg2 ;
-(void)appendPropertyForName:(id)arg1 stringWithColons:(id)arg2 ;
-(void)appendPropertyForName:(id)arg1 stringValue:(id)arg2 ;
-(void)addProperty:(id)arg1 forKey:(id)arg2 ;
-(id)propertyForName:(id)arg1 ;
-(void)appendPropertyForName:(id)arg1 length:(double)arg2 unit:(int)arg3 ;
-(void)appendSizeInfoFromRect:(CGRect)arg1 ;
-(void)appendPositionInfoFromRect:(CGRect)arg1 ;
-(void)appendDefaultBorderStyle;
-(void)appendPropertyForName:(id)arg1 floatValue:(float)arg2 ;
-(void)appendPropertyString:(id)arg1 ;
-(id)attributeForName:(id)arg1 ;
-(id)cssStyleString;
-(void)appendPropertyForName:(id)arg1 color:(id)arg2 ;
-(void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 unit:(int)arg3 ;
-(void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 ;
-(void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 lineHeight:(float)arg3 unit:(int)arg4 ;
@end

