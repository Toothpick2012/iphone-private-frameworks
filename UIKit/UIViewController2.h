/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "NSCoding.h"
#import <UIKit/UIViewController.h>
#import "UIKit-Structs.h"
#import <UIKit/UIResponder.h>

@class UINavigationItem, UITabBarItem, NSBundle, NSHashTable, UINavigationController, UITabBarController, UITransitionView, NSArray, UIView, UIBarButtonItem, NSString, UISearchDisplayController;

@interface UIViewController ()
+(BOOL)doesOverrideViewControllerMethod:(SEL)method;
+(id)existingNibNameMatchingClassName:(id)name bundle:(id)bundle;
+(int)_keyboardDirectionForTransition:(int)transition isOrderingIn:(BOOL)anIn;
+(id)viewControllerForView:(id)view;
+(void)removeViewControllerForView:(id)view;
+(void)setViewController:(id)controller forView:(id)view;
+(void)_setApplicationSuspendPurgeDelay:(double)delay;
+(BOOL)_isViewSizeFullScreen:(id)screen inWindow:(id)window;
+(void)_forceLegacyModalViewControllers:(BOOL)controllers;
+(BOOL)_shouldUseLegacyModalViewControllers;
+(void)setCustomTransitionDuration:(double)duration;
+(double)customTransitionDuration;
+(double)durationForTransition:(int)transition;
+(BOOL)_doesOverrideLegacyShouldAutorotateMethod;
-(void)_doCommonSetup;
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)awakeFromNib;
-(void)_populateArchivedChildViewControllers:(id)controllers;
-(BOOL)_shouldPersistViewWhenCoding;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)nextResponder;
-(void)_loadViewFromNibNamed:(id)nibNamed bundle:(id)bundle;
-(CGRect)_defaultInitialViewFrame;
-(float)_statusBarHeightForCurrentInterfaceOrientation;
-(void)loadView;
-(void)viewDidLoad;
-(void)forceUnloadView;
-(void)unloadView;
-(void)unloadViewIfReloadable;
-(void)unloadViewForced:(BOOL)forced;
-(void)viewDidUnload;
-(BOOL)isViewLoaded;
-(id)existingView;
-(id)_existingView;
-(id)contentScrollView;
-(void)_setExistingNavigationItem:(id)item;
-(id)_existingNavigationItem;
-(void)_setExistingTabBarItem:(id)item;
-(id)_existingTabBarItem;
-(void)window:(id)window willAnimateFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame3;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(BOOL)autoresizesArchivedViewToFullSize;
-(void)setAutoresizesArchivedViewToFullSize:(BOOL)fullSize;
-(void)autoresizeArchivedView;
-(void)updateTitleForViewController:(id)viewController;
-(void)addChildViewController:(id)controller;
-(void)removeChildViewController:(id)controller;
-(id)_nonModalParentViewController;
-(id)_ancestorViewControllerOfClass:(Class)aClass allowModalParent:(BOOL)parent;
-(BOOL)_isAppearingOrAppeared;
-(int)_appearState;
-(BOOL)_hasAppeared;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(BOOL)_tryBecomeRootViewControllerInWindow:(id)window;
-(void)_resignRootViewController;
-(void)viewWillMoveToWindow:(id)view;
-(void)viewDidMoveToWindow:(id)view shouldAppearOrDisappear:(BOOL)disappear;
-(void)_didReceiveMemoryWarning:(id)warning;
-(void)didReceiveMemoryWarning;
-(BOOL)_canReloadView;
-(void)purgeMemoryForReason:(int)reason;
-(BOOL)_isViewInWindowWithoutParentViewController;
-(id)_visibleView;
-(void)_purgeForApplicationSuspend;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(BOOL)_shouldUseFullScreenLayout;
-(BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)layout;
-(BOOL)_shouldUseFullScreenLayoutInWindow:(id)window parentViewController:(id)controller;
-(BOOL)_reallyWantsFullScreenLayout;
-(BOOL)isPerformingModalTransition;
-(id)presentedViewController;
-(id)currentAction;
-(void)_overlayPresentAnimationDidStop:(id)_overlayPresentAnimation finished:(id)finished context:(id)context;
-(void)presentModalViewController:(id)controller fromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;
-(void)dismissModalOverlayViewController;
-(void)dimmingViewWasTapped:(id)tapped;
-(void)_dismissModalOverlayAnimationDidStop:(id)_dismissModalOverlayAnimation finished:(id)finished context:(id)context;
-(void)_legacyPresentModalViewController:(id)controller withTransition:(int)transition;
-(int)_preferredInterfaceOrientationGivenCurrentOrientation:(int)orientation;
-(void)presentModalViewController:(id)controller withTransition:(int)transition;
-(int)_transitionForModalTransitionStyle:(int)modalTransitionStyle appearing:(BOOL)appearing;
-(BOOL)_tryRecursivelyPresentModalViewController:(id)controller withTransition:(int)transition;
-(void)_legacyDismissModalViewController:(id)controller withTransition:(int)transition;
-(void)dismissModalViewControllerWithTransition:(int)transition;
-(void)dismissModalViewControllerAnimated:(BOOL)animated;
-(void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;
-(void)_didFinishPresentModalTransition;
-(void)_legacyModalPresentTransitionDidComplete;
-(void)_didFinishDismissModalTransition;
-(void)_legacyModalDismissTransitionDidComplete;
-(double)durationForTransition:(int)transition;
-(id)viewControllerForRotation;
-(void)_beginDisablingInterfaceAutorotation;
-(void)_endDisablingInterfaceAutorotation;
-(BOOL)_isInterfaceAutorotationDisabled;
-(void)_updateInterfaceOrientationAnimated:(BOOL)animated;
-(BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)_allowsAutorotation;
-(void)_setAllowsAutorotation:(BOOL)autorotation;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(id)rotatingHeaderViewForWindow:(id)window;
-(id)rotatingHeaderView;
-(id)rotatingContentViewForWindow:(id)window;
-(id)rotatingFooterViewForWindow:(id)window;
-(id)rotatingFooterView;
-(int)_lastKnownInterfaceOrientation;
-(void)_setInterfaceOrientationOnModalRecursively:(int)recursively;
-(CGPoint)_centerForOrientation:(int)orientation;
-(CGRect)_boundsForOrientation:(int)orientation;
-(void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;
-(BOOL)_shouldUseOnePartRotation;
-(void)getRotationContentSettings:(XXStruct_TF$i3B*)settings forWindow:(id)window;
-(void)_getRotationContentSettings:(XXStruct_TF$i3B*)settings;
-(void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
//-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)window:(id)window willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;
//-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(id)defaultPNGName;
-(void)_setSearchDisplayController:(id)controller retain:(BOOL)retain;
-(void)_setSearchDisplayControllerUnretained:(id)unretained;
@end

@interface UIViewController (UIViewControllerClassDumpWarning)
-(void)attentionClassDumpUser:(id)user yesItsUsAgain:(id)again althoughSwizzlingAndOverridingPrivateMethodsIsFun:(id)fun itWasntMuchFunWhenYourAppStoppedWorking:(id)working pleaseRefrainFromDoingSoInTheFutureOkayThanksBye:(id)theFutureOkayThanksBye;
@end

@interface UIViewController (UINavigationControllerContextualToolbar)
-(id)toolbarItems;
-(void)setToolbarItems:(id)items;
-(void)setToolbarItems:(id)items animated:(BOOL)animated;
-(void)_updateToolbarItemsFromViewController:(id)viewController animated:(BOOL)animated;
@end

@interface UIViewController (UINavigationControllerItem2)
-(void)_toggleEditing:(id)editing;
-(BOOL)canHandleSnapbackIdentifier:(id)identifier animated:(BOOL)animated;
@end

@interface UIViewController (UITabBarControllerItem2)
-(void)updateTabBarItemForViewController:(id)viewController;
-(id)_moreListTitle __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(id)moreListImage;
-(id)moreListSelectedImage;
-(id)moreListTableCell;
@end

@interface UIViewController (PLImagePickerViewControllerInterface)
-(void)_setUseTelephonyUI:(BOOL)ui;
-(void)_setImagePickerMediaTypes:(id)types;
@end

@interface UIViewController (UIImagePickerControllerAdditions)
-(BOOL)_displaysFullScreen;
-(int)_imagePickerStatusBarMode;
@end

