/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSATSGlyphStorage, NSATSLineFragment;

@interface _NSATSTypesetterGuts : NSObject  {
    NSATSLineFragment *_lineFragment;
    NSATSGlyphStorage *_glyphStorage;
    unsigned int _lastGlyphIndex;
    unsigned int _lastContainerIndex;
    struct { struct { /* ? */ } *x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct _NSRange { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; float x4; float x5; int (*x6)(); int (*x7)(); float x8; float x9; float x10; float x11; float x12; float x13; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_14_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_14_1_2; } x14; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_15_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_15_1_2; } x15; struct _NSRange { unsigned int x_16_1_1; unsigned int x_16_1_2; } x16; id x17; float x18; int x19; struct { unsigned int x_20_1_1 : 4; unsigned int x_20_1_2 : 1; unsigned int x_20_1_3 : 1; unsigned int x_20_1_4 : 1; unsigned int x_20_1_5 : 4; unsigned int x_20_1_6 : 4; unsigned int x_20_1_7 : 1; unsigned int x_20_1_8 : 1; unsigned int x_20_1_9 : 1; unsigned int x_20_1_10 : 1; unsigned int x_20_1_11 : 2; unsigned int x_20_1_12 : 11; } x20; void *x21[0]; } *_typesetterAuxiliary;
    union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; int x_1_1_4; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; } x2; } *_lineFragmentRectArgs;
    char *_bidiLevels;
    struct { 
        unsigned int _isiChatTypesetter : 1; 
        unsigned int _resToWillSetLineFragmentRect : 1; 
        unsigned int _resToShouldBreakLineByWordWithCharacterAtIndex : 1; 
        unsigned int _resToShouldBreakLineByHyphenatingWithCharacterAtIndex : 1; 
        unsigned int _resToBBoxForControlGlyph : 1; 
        unsigned int _isBusy : 1; 
        unsigned int _baselineRendering : 1; 
        unsigned int _forceTruncation : 1; 
        unsigned int _forceWordWrapping : 1; 
        unsigned int _reserved : 23; 
    } _flags;
    struct { 
        unsigned int _resolvedWritingDirection : 2; 
        unsigned int _reserved : 30; 
    } _paragraphState;
    struct __CTTypesetter { } *_ctTypesetter;
}


- (id)initWithTypesetter:(id)arg1;
- (void)dealloc;
- (void)finalize;

@end