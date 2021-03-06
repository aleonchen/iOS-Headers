//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UINavigationController, UIViewController;

@protocol UINavigationControllerDelegate <NSObject>

@optional
- (id <UIViewControllerAnimatedTransitioning>)navigationController:(UINavigationController *)arg1 animationControllerForOperation:(int)arg2 fromViewController:(UIViewController *)arg3 toViewController:(UIViewController *)arg4;
- (id <UIViewControllerInteractiveTransitioning>)navigationController:(UINavigationController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (int)navigationControllerPreferredInterfaceOrientationForPresentation:(UINavigationController *)arg1;
- (unsigned int)navigationControllerSupportedInterfaceOrientations:(UINavigationController *)arg1;
- (void)navigationController:(UINavigationController *)arg1 didShowViewController:(UIViewController *)arg2 animated:(BOOL)arg3;
- (void)navigationController:(UINavigationController *)arg1 willShowViewController:(UIViewController *)arg2 animated:(BOOL)arg3;
@end

