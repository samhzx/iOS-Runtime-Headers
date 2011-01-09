/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebViewPrivate;



@interface WebView : WAKView 
{
    WebViewPrivate *_private;
}

+ (void)initialize;
+ (BOOL)canShowMIMEType:(id)arg1;
+ (BOOL)canShowMIMETypeAsHTML:(id)arg1;
+ (id)MIMETypesShownAsHTML;
+ (void)setMIMETypesShownAsHTML:(id)arg1;
+ (void)registerURLSchemeAsLocal:(id)arg1;
+ (void)registerViewClass:(Class)arg1 representationClass:(Class)arg2 forMIMEType:(id)arg3;
+ (void)_setCacheModel:(NSUInteger)arg1;
+ (NSUInteger)_cacheModel;
+ (NSUInteger)_didSetCacheModel;
+ (NSUInteger)_maxCacheModelInAnyInstance;
+ (void)_preferencesChangedNotification:(id)arg1;
+ (void)_preferencesRemovedNotification:(id)arg1;
+ (void)_preflightSpellCheckerNow:(id)arg1;
+ (void)_preflightSpellChecker;
+ (id)_standardUserAgentWithApplicationName:(id)arg1;
+ (id)_supportedMIMETypes;
+ (void)enableWebThread;
+ (void)garbageCollectNow;
+ (BOOL)_viewClass:(Class*)arg1 andRepresentationClass:(Class*)arg2 forMIMEType:(id)arg3;
+ (void)_setAlwaysUsesComplexTextCodePath:(BOOL)arg1;
+ (BOOL)canShowFile:(id)arg1;
+ (id)_MIMETypeForFile:(id)arg1;
+ (void)_unregisterViewClassAndRepresentationClassForMIMEType:(id)arg1;
+ (void)_registerViewClass:(Class)arg1 representationClass:(Class)arg2 forURLScheme:(id)arg3;
+ (id)_generatedMIMETypeForURLScheme:(id)arg1;
+ (BOOL)_representationExistsForURLScheme:(id)arg1;
+ (BOOL)_canHandleRequest:(id)arg1 forMainFrame:(BOOL)arg2;
+ (BOOL)_canHandleRequest:(id)arg1;
+ (id)_decodeData:(id)arg1;
+ (void)_setShouldUseFontSmoothing:(BOOL)arg1;
+ (BOOL)_shouldUseFontSmoothing;
+ (void)_setUsesTestModeFocusRingColor:(BOOL)arg1;
+ (BOOL)_usesTestModeFocusRingColor;
+ (id)_minimumRequiredSafariBuildNumber;
+ (unsigned long)_glyphCacheInitialSize;
+ (unsigned long)_glyphCacheIncrementalSize;
+ (void)_setGlyphCacheInitialSize:(unsigned long)arg1 andIncrementSize:(unsigned long)arg2;
+ (id)_productivityDocumentMIMETypes;
+ (void)_makeAllWebViewsPerformSelector:(SEL)arg1;

- (id)_pluginForMIMEType:(id)arg1;
- (id)_pluginForExtension:(id)arg1;
- (BOOL)_isMIMETypeRegisteredAsPlugin:(id)arg1;
- (id)_initWithArguments:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 frameName:(id)arg2 groupName:(id)arg3;
- (void)dealloc;
- (void)finalize;
- (void)close;
- (void)setShouldCloseWithWindow:(BOOL)arg1;
- (BOOL)shouldCloseWithWindow;
- (void)_updateFocusedAndActiveState;
- (void)_updateFocusedAndActiveStateForFrame:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_windowDidResignKey:(id)arg1;
- (void)_windowWillOrderOnScreen:(id)arg1;
- (void)_windowWillClose:(id)arg1;
- (void)setPreferences:(id)arg1;
- (id)preferences;
- (void)setPreferencesIdentifier:(id)arg1;
- (id)preferencesIdentifier;
- (void)setUIDelegate:(id)arg1;
- (id)UIDelegate;
- (void)setResourceLoadDelegate:(id)arg1;
- (id)resourceLoadDelegate;
- (void)setDownloadDelegate:(id)arg1;
- (id)downloadDelegate;
- (void)setPolicyDelegate:(id)arg1;
- (id)policyDelegate;
- (void)setFrameLoadDelegate:(id)arg1;
- (id)frameLoadDelegate;
- (id)mainFrame;
- (id)selectedFrame;
- (id)backForwardList;
- (void)setMaintainsBackForwardList:(BOOL)arg1;
- (BOOL)goBack;
- (BOOL)goForward;
- (BOOL)goToBackForwardItem:(id)arg1;
- (void)setTextSizeMultiplier:(float)arg1;
- (float)textSizeMultiplier;
- (void)_setZoomMultiplier:(float)arg1 isTextOnly:(BOOL)arg2;
- (float)_zoomMultiplier:(BOOL)arg1;
- (float)_realZoomMultiplier;
- (BOOL)_realZoomMultiplierIsTextOnly;
- (BOOL)_canZoomOut:(BOOL)arg1;
- (BOOL)_canZoomIn:(BOOL)arg1;
- (BOOL)_canResetZoom:(BOOL)arg1;
- (void)_resetZoom:(id)arg1 isTextOnly:(BOOL)arg2;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)setApplicationNameForUserAgent:(id)arg1;
- (id)applicationNameForUserAgent;
- (void)setCustomUserAgent:(id)arg1;
- (id)customUserAgent;
- (void)setMediaStyle:(id)arg1;
- (id)mediaStyle;
- (BOOL)supportsTextEncoding;
- (void)setCustomTextEncodingName:(id)arg1;
- (id)_mainFrameOverrideEncoding;
- (id)customTextEncodingName;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (id)windowScriptObject;
- (id)userAgentForURL:(id)arg1;
- (void)setHostWindow:(id)arg1;
- (id)hostWindow;
- (id)documentViewAtWindowPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_elementAtWindowPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)elementAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)_webcore_effectiveFirstResponder;
- (void)setNextKeyView:(id)arg1;
- (void)setGroupName:(id)arg1;
- (id)groupName;
- (double)estimatedProgress;
- (void)setMainFrameURL:(id)arg1;
- (id)mainFrameURL;
- (BOOL)isLoading;
- (id)mainFrameTitle;
- (id)mainFrameDocument;
- (void)setDrawsBackground:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setShouldUpdateWhileOffscreen:(BOOL)arg1;
- (BOOL)shouldUpdateWhileOffscreen;
- (void)setCurrentNodeHighlight:(id)arg1;
- (id)currentNodeHighlight;
- (void)_scheduleViewUpdate;
- (BOOL)_becomingFirstResponderFromOutside;
- (struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })_userAgentForURL:(const struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x2; NSInteger x3; NSInteger x4; NSInteger x5; NSInteger x6; NSInteger x7; NSInteger x8; NSInteger x9; NSInteger x10; NSInteger x11; NSInteger x12; }*)arg1;
     /* Encoded args for previous method: {String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}12@0:4r^{KURL={String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}Biiiiiiiiii}8 */

- (void)_addObject:(id)arg1 forIdentifier:(unsigned long)arg2;
- (id)_objectForIdentifier:(unsigned long)arg1;
- (void)_removeObjectForIdentifier:(unsigned long)arg1;
- (void)_retrieveKeyboardUIModeFromPreferences:(id)arg1;
- (NSInteger)_keyboardUIMode;
- (id)_focusedFrame;
- (id)_selectedOrMainFrame;
- (BOOL)_isLoading;
- (id)_frameViewAtWindowPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_continuousCheckingAllowed;
- (id)_responderForResponderOperations;
- (void)_insertNewlineInQuotedContent;
- (void)_replaceSelectionWithNode:(id)arg1 matchStyle:(BOOL)arg2;
- (void)_performResponderOperation:(SEL)arg1 with:(id)arg2;
- (void)alignCenter:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)changeAttributes:(id)arg1;
- (void)changeBaseWritingDirection:(id)arg1;
- (void)changeBaseWritingDirectionToLTR:(id)arg1;
- (void)changeBaseWritingDirectionToRTL:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)changeDocumentBackgroundColor:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)changeSpelling:(id)arg1;
- (void)checkSpelling:(id)arg1;
- (void)complete:(id)arg1;
- (void)copy:(id)arg1;
- (void)copyFont:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)ignoreSpelling:(id)arg1;
- (void)indent:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)lowercaseWord:(id)arg1;
- (void)makeBaseWritingDirectionLeftToRight:(id)arg1;
- (void)makeBaseWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)moveBackwardAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)moveForwardAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveParagraphBackwardAndModifySelection:(id)arg1;
- (void)moveParagraphForwardAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfLineAndModifySelection:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToBeginningOfParagraphAndModifySelection:(id)arg1;
- (void)moveToBeginningOfSentence:(id)arg1;
- (void)moveToBeginningOfSentenceAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)moveToEndOfLineAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToEndOfParagraphAndModifySelection:(id)arg1;
- (void)moveToEndOfSentence:(id)arg1;
- (void)moveToEndOfSentenceAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveWordBackward:(id)arg1;
- (void)moveWordBackwardAndModifySelection:(id)arg1;
- (void)moveWordForward:(id)arg1;
- (void)moveWordForwardAndModifySelection:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)outdent:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)pageDownAndModifySelection:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)pageUpAndModifySelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)pasteAsRichText:(id)arg1;
- (void)pasteFont:(id)arg1;
- (void)performFindPanelAction:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectLine:(id)arg1;
- (void)selectParagraph:(id)arg1;
- (void)selectSentence:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)selectWord:(id)arg1;
- (void)setMark:(id)arg1;
- (void)showGuessPanel:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)stopSpeaking:(id)arg1;
- (void)subscript:(id)arg1;
- (void)superscript:(id)arg1;
- (void)swapWithMark:(id)arg1;
- (void)takeFindStringFromSelection:(id)arg1;
- (void)toggleBaseWritingDirection:(id)arg1;
- (void)transpose:(id)arg1;
- (void)underline:(id)arg1;
- (void)unscript:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)yank:(id)arg1;
- (void)yankAndSelect:(id)arg1;
- (void)clearText:(id)arg1;
- (void)insertText:(id)arg1;
- (void)replaceSelectionWithNode:(id)arg1;
- (void)replaceSelectionWithText:(id)arg1;
- (void)replaceSelectionWithMarkupString:(id)arg1;
- (void)replaceSelectionWithArchive:(id)arg1;
- (void)deleteSelection;
- (void)applyStyle:(id)arg1;
- (id)editableDOMRangeForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_shouldChangeSelectedDOMRange:(id)arg1 toDOMRange:(id)arg2 affinity:(NSInteger)arg3 stillSelecting:(BOOL)arg4;
- (BOOL)maintainsInactiveSelection;
- (void)setSelectedDOMRange:(id)arg1 affinity:(NSInteger)arg2;
- (id)selectedDOMRange;
- (NSInteger)selectionAffinity;
- (void)setEditable:(BOOL)arg1;
- (BOOL)isEditable;
- (void)setTypingStyle:(id)arg1;
- (id)typingStyle;
- (void)setSmartInsertDeleteEnabled:(BOOL)arg1;
- (BOOL)smartInsertDeleteEnabled;
- (id)undoManager;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (void)setEditingDelegate:(id)arg1;
- (id)editingDelegate;
- (id)styleDeclarationWithText:(id)arg1;
- (id)computedStyleForElement:(id)arg1 pseudoElement:(id)arg2;
- (void)setMainFrameDocumentReady:(BOOL)arg1;
- (id)_frameForCurrentSelection;
- (void)setTabKeyCyclesThroughElements:(BOOL)arg1;
- (BOOL)tabKeyCyclesThroughElements;
- (void)setScriptDebugDelegate:(id)arg1;
- (id)scriptDebugDelegate;
- (BOOL)shouldClose;
- (void)scrollDOMRangeToVisible:(id)arg1;
- (BOOL)allowsUndo;
- (void)setAllowsUndo:(BOOL)arg1;
- (void)setPageSizeMultiplier:(float)arg1;
- (float)pageSizeMultiplier;
- (BOOL)canZoomPageIn;
- (void)zoomPageIn:(id)arg1;
- (BOOL)canZoomPageOut;
- (void)zoomPageOut:(id)arg1;
- (BOOL)canResetPageZoom;
- (void)resetPageZoom:(id)arg1;
- (void)setMediaVolume:(float)arg1;
- (float)mediaVolume;
- (void)takeStringURLFrom:(id)arg1;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)goBack:(id)arg1;
- (void)goForward:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)stopLoadingAndClear;
- (void)reload:(id)arg1;
- (void)reloadFromOrigin:(id)arg1;
- (BOOL)canMakeTextSmaller;
- (void)makeTextSmaller:(id)arg1;
- (BOOL)canMakeTextLarger;
- (void)makeTextLarger:(id)arg1;
- (BOOL)canMakeTextStandardSize;
- (void)makeTextStandardSize:(id)arg1;
- (BOOL)_usesDocumentViews;
- (void)_commonInitializationWithFrameName:(id)arg1 groupName:(id)arg2 usesDocumentViews:(BOOL)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 frameName:(id)arg2 groupName:(id)arg3 usesDocumentViews:(BOOL)arg4;
- (void)_boundsChanged;
- (BOOL)_mustDrawUnionedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 singleRects:(const struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 count:(NSInteger)arg3;
- (void)drawSingleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFlipped;
- (void)_viewWillDrawInternal;
- (void)viewWillDraw;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initSimpleHTMLDocumentWithStyle:(id)arg1 editable:(BOOL)arg2 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 withPreferences:(id)arg4;
- (void)setUserStyleSheet:(id)arg1;
- (BOOL)_viewClass:(Class*)arg1 andRepresentationClass:(Class*)arg2 forMIMEType:(id)arg3;
- (BOOL)_isClosed;
- (void)_dispatchUnloadEvent;
- (void)_dispatchTileDidDraw:(id)arg1;
- (void)_willStartScrollingOrZooming;
- (void)_didFinishScrollingOrZooming;
- (void)_closePluginDatabases;
- (void)_closeWithFastTeardown;
- (void)_close;
- (id)_downloadURL:(id)arg1;
- (id)_openNewWindowWithRequest:(id)arg1;
- (struct Page { struct OwnPtr<WTF::HashSet<WTF::RefPtr<WebCore::SchedulePair>, WebCore::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WebCore::SchedulePair> > > > { struct HashSet<WTF::RefPtr<WebCore::SchedulePair>,WebCore::SchedulePairHash,WTF::HashTraits<WTF::RefPtr<WebCore::SchedulePair> > > {} *x_1_1_1; } x1; struct OwnPtr<WebCore::Chrome> { struct Chrome {} *x_2_1_1; } x2; struct OwnPtr<WebCore::SelectionController> { struct SelectionController {} *x_3_1_1; } x3; struct OwnPtr<WebCore::FocusController> { struct FocusController {} *x_4_1_1; } x4; struct OwnPtr<WebCore::Settings> { struct Settings {} *x_5_1_1; } x5; struct OwnPtr<WebCore::ProgressTracker> { struct ProgressTracker {} *x_6_1_1; } x6; struct RefPtr<WebCore::BackForwardList> { struct BackForwardList {} *x_7_1_1; } x7; struct RefPtr<WebCore::Frame> { struct Frame {} *x_8_1_1; } x8; struct RefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x_9_1_1; } x9; struct RefPtr<WebCore::PluginData> { struct PluginData {} *x_10_1_1; } x10; struct EditorClient {} *x11; NSInteger x12; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_13_1_1; } x13; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; float x19; void*x20; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_21_1_1; } x21; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_22_1_1; } x22; void*x23; NSInteger x24; struct OwnPtr<WebCore::PageGroup> { struct PageGroup {} *x_25_1_1; } x25; struct PageGroup {} *x26; struct Debugger {} *x27; NSUInteger x28; NSUInteger x29; double x30; NSInteger x31; struct RefPtr<WebCore::SessionStorage> { struct SessionStorage {} *x_32_1_1; } x32; }*)page;
     /* Encoded args for previous method: ^{Page={OwnPtr<WTF::HashSet<WTF::RefPtr<WebCore::SchedulePair>, WebCore::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WebCore::SchedulePair> > > >=^{HashSet<WTF::RefPtr<WebCore::SchedulePair>,WebCore::SchedulePairHash,WTF::HashTraits<WTF::RefPtr<WebCore::SchedulePair> > >}}{OwnPtr<WebCore::Chrome>=^{Chrome}}{OwnPtr<WebCore::SelectionController>=^{SelectionController}}{OwnPtr<WebCore::FocusController>=^{FocusController}}{OwnPtr<WebCore::Settings>=^{Settings}}{OwnPtr<WebCore::ProgressTracker>=^{ProgressTracker}}{RefPtr<WebCore::BackForwardList>=^{BackForwardList}}{RefPtr<WebCore::Frame>=^{Frame}}{RefPtr<WebCore::HistoryItem>=^{HistoryItem}}{RefPtr<WebCore::PluginData>=^{PluginData}}^{EditorClient}i{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}BBBBBfB{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}Bi{OwnPtr<WebCore::PageGroup>=^{PageGroup}}^{PageGroup}^{Debugger}IIdi{RefPtr<WebCore::SessionStorage>=^{SessionStorage}}}8@0:4 */

- (void)_mouseDidMoveOverElement:(id)arg1 modifierFlags:(NSUInteger)arg2;
- (void)_loadBackForwardListFromOtherView:(id)arg1;
- (void)_setFormDelegate:(id)arg1;
- (id)_formDelegate;
- (id)_formDelegateForwarder;
- (id)_formDelegateForSelector:(SEL)arg1;
- (void)_preferencesChangedNotification:(id)arg1;
- (void)_preferencesChanged:(id)arg1;
- (id)_UIKitDelegateForwarder;
- (void)_cacheResourceLoadDelegateImplementations;
- (void)_cacheFrameLoadDelegateImplementations;
- (void)_cacheScriptDebugDelegateImplementations;
- (id)_policyDelegateForwarder;
- (id)_UIDelegateForwarder;
- (id)_UIDelegateForSelector:(SEL)arg1;
- (id)_editingDelegateForwarder;
- (void)_closeWindow;
- (void)_pushPerformingProgrammaticFocus;
- (void)_popPerformingProgrammaticFocus;
- (BOOL)_isPerformingProgrammaticFocus;
- (void)_setUsesLoaderCache:(BOOL)arg1;
- (BOOL)_usesLoaderCache;
- (void)_setShouldCacheFileURLs:(BOOL)arg1;
- (BOOL)_shouldCacheFileURLs;
- (void)_setUIKitDelegate:(id)arg1;
- (id)_UIKitDelegate;
- (void)setWebMailDelegate:(id)arg1;
- (id)_webMailDelegate;
- (id)caretChangeListener;
- (void)setCaretChangeListener:(id)arg1;
- (id)caretChangeListeners;
- (void)addCaretChangeListener:(id)arg1;
- (void)removeCaretChangeListener:(id)arg1;
- (void)removeAllCaretChangeListeners;
- (void)caretChanged;
- (void)_clearDelegates;
- (id)_displayURL;
- (void)_setInViewSourceMode:(BOOL)arg1;
- (BOOL)_inViewSourceMode;
- (void)_setUseFastImageScalingMode:(BOOL)arg1;
- (BOOL)_inFastImageScalingMode;
- (BOOL)_cookieEnabled;
- (void)_setCookieEnabled:(BOOL)arg1;
- (BOOL)_locked_plugInsAreRunningInFrame:(id)arg1;
- (BOOL)_pluginsAreRunning;
- (void)_locked_performPlugInSelector:(SEL)arg1 inFrame:(id)arg2;
- (void)_destroyAllPlugIns;
- (BOOL)_clearBackForwardCache;
- (void)_startAllPlugIns;
- (void)_stopAllPlugIns;
- (void)_attachScriptDebuggerToAllFrames;
- (void)_detachScriptDebuggerFromAllFrames;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)backgroundColor;
- (BOOL)defersCallbacks;
- (void)setDefersCallbacks:(BOOL)arg1;
- (BOOL)_isStopping;
- (BOOL)_isClosing;
- (void)_setAllowsMessaging:(BOOL)arg1;
- (BOOL)_allowsMessaging;
- (void)_setNetworkStateIsOnline:(BOOL)arg1;
- (void)_setFixedLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_fixedLayoutSize;
- (BOOL)usesPageCache;
- (void)setUsesPageCache:(BOOL)arg1;
- (id)_globalHistoryItem;
- (id)textIteratorForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setCatchesDelegateExceptions:(BOOL)arg1;
- (BOOL)_catchesDelegateExceptions;
- (void)_executeCoreCommandByName:(id)arg1 value:(id)arg2;
- (void)_setCustomHTMLTokenizerTimeDelay:(double)arg1;
- (void)_setCustomHTMLTokenizerChunkSize:(NSInteger)arg1;
- (void)_clearMainFrameName;
- (void)setSelectTrailingWhitespaceEnabled:(BOOL)arg1;
- (BOOL)isSelectTrailingWhitespaceEnabled;
- (void)setMemoryCacheDelegateCallsEnabled:(BOOL)arg1;
- (BOOL)areMemoryCacheDelegateCallsEnabled;
- (void)_setJavaScriptURLsAreAllowed:(BOOL)arg1;
- (BOOL)_needsOneShotDrawingSynchronization;
- (void)_setNeedsOneShotDrawingSynchronization:(BOOL)arg1;
- (void)_removeFromAllWebViewsSet;
- (void)_addToAllWebViewsSet;
- (id)assistedNode;
- (oneway void)_webcore_releaseOnWebThread;
- (oneway void)release;

@end