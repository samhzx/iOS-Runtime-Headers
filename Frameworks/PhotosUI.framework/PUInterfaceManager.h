/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUInterfaceManager : NSObject

+ (void)_disabledUserInteractionRequestDidTimeOut:(id)arg1;
+ (void)_handleInteractionDisablingTimeout;
+ (void)_handleInteractionDisablingTimeoutForAlbumStackTransition;
+ (void)_handleInteractionDisablingTimeoutForBannerViewImagesJump;
+ (void)_handleInteractionDisablingTimeoutForOneUpToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForOverOneUpTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserZoomTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorComputingAutoEnhance;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorLoadingImage;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorRevertingChanges;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSavingChanges;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorToPhotoBrowserTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorWaitingToDismiss;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectResult;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectSuggestion;
+ (void)_handleInteractionDisablingTimeoutForStartSlideshowFromGrid;
+ (id)beginDisablingUserInteractionForReason:(int)arg1;
+ (id)beginDisablingUserInteractionForReason:(int)arg1 withExpectedTimeout:(double)arg2;
+ (void)beginUsingOrbTheme;
+ (id)currentTheme;
+ (void)endDisablingUserInteraction:(id)arg1;
+ (void)endUsingOrbTheme;
+ (BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)arg1;

@end
