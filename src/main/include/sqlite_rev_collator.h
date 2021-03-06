//
//  sqlite_rev_collator.h
//  CouchbaseLite
//
//  Created by Pasin Suriyentrakorn
//  Copyright (c) 2011 Couchbase, Inc. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
//  except in compliance with the License. You may obtain a copy of the License at
//    http://www.apache.org/licenses/LICENSE-2.0
//  Unless required by applicable law or agreed to in writing, software distributed under the
//  License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
//  either express or implied. See the License for the specific language governing permissions
//  and limitations under the License.
//

#include <sqlite3.h>
#include <jni.h>

#ifndef SQLITE_REV_COLLATOR_H_
#define SQLITE_REV_COLLATOR_H_
#ifdef __cplusplus
extern "C" {
#endif

void sqlite_rev_collator_init(sqlite3 * db);

int sqlite_rev_collator_test(const char * str1, const char * str2);

#ifdef __cplusplus
}
#endif
#endif