/*
 * Copyright 2014 Apigee Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

#import "ApigeeEntity.h"

/*!
 @class ApigeeDevice
 @abstract Class representing data associated with a device
 @see ApigeeEntity ApigeeEntity
 */
@interface ApigeeDevice : ApigeeEntity

@property (strong, nonatomic) NSString* name;

/*!
 @abstract Compares the specified type name to the type name for ApigeeDevice
 @param type the type name to compare with
 @return boolean indicating whether the specified type name is the same as
 the type name for ApigeeDevice
 */
+ (BOOL)isSameType:(NSString*)type;

/*!
 @abstract
 @param dataClient
 */
- (id)initWithDataClient:(ApigeeDataClient *)dataClient;

/*!
 @abstract
 @param entity
 */
- (id)initWithEntity:(ApigeeEntity*)entity;

@end
