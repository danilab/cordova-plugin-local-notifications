/*
 Copyright 2013-2014 appPlant UG

 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 */

@interface APPLocalNotificationOptions : NSObject

- (id) initWithDict:(NSDictionary*)dict;

@property (readonly, getter=id) NSString* id;
@property (readonly, getter=autoCancel) BOOL autoCancel;
@property (readonly, getter=json) NSString* json;
@property (readonly, getter=badgeNumber) NSInteger badgeNumber;
@property (readonly, getter=alertBody) NSString* alertBody;
@property (readonly, getter=soundName) NSString* soundName;
@property (readonly, getter=fireDate) NSDate* fireDate;
@property (readonly, getter=repeatInterval) NSCalendarUnit repeatInterval;
@property (readonly, getter=userInfo) NSDictionary* userInfo;

// Encode the user info dict to JSON
- (NSString*) encodeToJSON;

@end
