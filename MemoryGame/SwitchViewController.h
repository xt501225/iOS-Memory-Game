//
//  SwitchViewController.h
//  MemoryGame
//
//  Created by Guest User on 11-12-02.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class GameViewController;
@class MenuViewController;
@class NetworkGameController;
@class InfoViewController;
@class MPViewController;

@interface SwitchViewController : UIViewController {
    
    GameViewController *gameViewController;
    MenuViewController *menuViewController;
    InfoViewController *infoViewController;
    MPViewController *mpViewController;
}
@property (retain, nonatomic) GameViewController *gameViewController;
@property (retain, nonatomic) MenuViewController *menuViewController;
@property (retain, nonatomic) InfoViewController *infoViewController;
@property (retain, nonatomic) MPViewController *mpViewController;
@property (retain, nonatomic) NetworkGameController *netGameController;


+ (void)switchToGame;
+ (void)switchToMenu;
+ (void)switchToInfo;
+ (void)switchToMultiplayer;
+ (void)switchToNetworkGame;
@end
