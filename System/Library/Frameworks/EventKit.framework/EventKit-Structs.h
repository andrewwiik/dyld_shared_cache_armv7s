/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	BOOL __opaque[56];
} opaque_pthread_mutex_t;

typedef struct CalFilter* CalFilterRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFSet* CFSetRef;

typedef struct CalDatabase* CalDatabaseRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGColor* CGColorRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_EK9;

typedef struct {
	SCD_Struct_EK9 field1;
	double field2;
} SCD_Struct_EK10;

typedef struct {
	int field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	double field6;
} SCD_Struct_EK11;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
	int field5;
	double field6;
} SCD_Struct_EK12;

typedef struct CalAlarmOccurrence* CalAlarmOccurrenceRef;

typedef struct {
	int year;
	BOOL month;
	BOOL day;
	BOOL hour;
	BOOL minute;
	double second;
} SCD_Struct_EK14;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_EK15;

typedef struct {
	unsigned short field1[64];
	_ field2;
	_ field3;
	CFString field4;
	unsigned short field5;
	char* field6;
	SCD_Struct_EK15 field7;
	long long field8;
	long long field9;
} SCD_Struct_EK16;

typedef struct {
	int entityType;
	int entityID;
} SCD_Struct_EK17;

typedef struct {
	int notificationType;
	SCD_Struct_EK17 objectID;
	double date;
} SCD_Struct_EK18;

typedef struct {
	int field1;
	SCD_Struct_EK17 field2;
	double field3;
} SCD_Struct_EK19;

typedef struct {
	int years;
	int months;
	int days;
	int hours;
	int minutes;
	double seconds;
} SCD_Struct_EK20;

typedef struct {
	SCD_Struct_EK17 objectID;
	double date;
} SCD_Struct_EK21;

typedef struct {
	SCD_Struct_EK17 field1;
	double field2;
} SCD_Struct_EK22;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
	unsigned field12 : 1;
	unsigned field13 : 1;
	unsigned field14 : 1;
	unsigned field15 : 1;
	unsigned field16 : 1;
	unsigned field17 : 1;
	unsigned field18 : 1;
	unsigned field19 : 1;
	unsigned field20 : 1;
	unsigned field21 : 1;
	unsigned field22 : 1;
	unsigned field23 : 1;
	unsigned field24 : 1;
	unsigned field25 : 1;
	unsigned field26 : 1;
	unsigned field27 : 1;
	unsigned field28 : 1;
	unsigned field29 : 1;
	unsigned field30 : 1;
	unsigned field31 : 1;
	unsigned field32 : 1;
	unsigned field33 : 1;
	unsigned field34 : 1;
	unsigned field35 : 1;
	unsigned field36 : 1;
	unsigned field37 : 1;
	unsigned field38 : 1;
	unsigned field39 : 1;
	unsigned field40 : 1;
	unsigned field41 : 1;
	unsigned field42 : 1;
} SCD_Struct_EK23;

