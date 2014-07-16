//
//  THCoreDataStack.h
//  Diary
//
//  Created by Kelvin Atawura on 15/07/14.
//  Copyright (c) 2014 recodedlabs. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface THCoreDataStack : NSObject

+ (instancetype)defaultStack;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
