//
//  AppDelegate.h
//  CoreData
//
//  Created by Abhinav Jayanthy on 1/8/17.
//  Copyright © 2017 Abhinav Jayanthy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

