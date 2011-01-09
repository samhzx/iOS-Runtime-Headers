/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface MLSQLSelect : MLSQLCode 
{
}

+ (id)expressionToken;

- (BOOL)performWithConnection:(struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; void *x4; int (*x5)(); int (*x6)(); void *x7; }*)arg1 rowHandler:(int (*)())arg2 context:(void*)arg3;
- (BOOL)_performWithConnection:(struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; void *x4; int (*x5)(); int (*x6)(); void *x7; }*)arg1 uint64Result:(unsigned long long*)arg2 uint32Result:(NSUInteger*)arg3;
- (BOOL)_performReadFromStore:(struct CPRecordStore { }*)arg1 uint64Result:(unsigned long long*)arg2 uint32Result:(NSUInteger*)arg3;
- (BOOL)performWithConnection:(struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; void *x4; int (*x5)(); int (*x6)(); void *x7; }*)arg1 uint64Result:(unsigned long long*)arg2;
- (BOOL)performReadFromStore:(struct CPRecordStore { }*)arg1 uint64Result:(unsigned long long*)arg2;
- (BOOL)performWithConnection:(struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; void *x4; int (*x5)(); int (*x6)(); void *x7; }*)arg1 uint32Result:(NSUInteger*)arg2;
- (BOOL)performReadFromStore:(struct CPRecordStore { }*)arg1 uint32Result:(NSUInteger*)arg2;
- (BOOL)performWithConnection:(struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; void *x4; int (*x5)(); int (*x6)(); void *x7; }*)arg1 copyDataResult:(id*)arg2;
- (BOOL)allowsJoins;

@end