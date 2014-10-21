/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLAdapter.h>

@class NSString;

@interface NSSQLiteAdapter : NSSQLAdapter {

	NSString* _dbpath;

}
-(bool)supportsCorrelatedSubqueries;
-(Class)statementClass;
-(id)typeStringForColumn:(id)arg1 ;
-(id)typeStringForSQLType:(unsigned)arg1 ;
-(id)initWithSQLCore:(id)arg1 ;
-(id)sqliteVersion;
-(id)pathnameForDatabase;
-(void)dealloc;
-(id)type;
-(id)createConnection;
@end

